#include "info_of_file.hpp"
#include "QPushButton"
#include "QDateTime"
#include "QKeyEvent"
#include "QDir"
#include "QPixmap"
#include "QPainter"
#include "warning.h"
#include "about.h"

Info_Of_File::Info_Of_File(QWidget *parent) : QWidget(parent)
{
    get_file_name = new QLineEdit(this);
    info = new QLabel(this);
    size_text_pixels = "10";

    QPushButton *get_file_info_button = new QPushButton("Get info", this);
    QPushButton *set_text_size_button = new QPushButton("Confim", this);
    QPushButton *about_open = new QPushButton("About", this);

    get_text_size = new QLineEdit(this);

    get_text_size->setPlaceholderText("Enter width for font");

    QPixmap myPixmap(":/Logo2.png");
    QLabel *picture = new QLabel(this);
    picture->setPixmap(myPixmap.scaled( picture->width()*3, picture->height()*3, Qt::KeepAspectRatio ));
    picture->setAlignment(Qt::AlignRight);
    picture->setAlignment(Qt::AlignBottom);

    info->setAlignment(Qt::AlignTop);
    info->setStyleSheet("font-size: " + size_text_pixels + "px");

    get_file_name->setPlaceholderText("Enter file name");
    get_file_name->setTabletTracking(false);

    grid = new QGridLayout(this);

    grid->addWidget(get_file_info_button, 0, 1);
    grid->addWidget(set_text_size_button, 1, 2);
    grid->addWidget(get_text_size, 0, 2);
    grid->addWidget(get_file_name, 0, 0);
    grid->addWidget(info, 1, 0);
    grid->addWidget(picture, 1, 3);
    grid->addWidget(about_open, 0, 3);

    about_open->setObjectName("about-class");

    get_text_size->setAlignment(Qt::AlignTop);
    get_file_name->setAlignment(Qt::AlignTop);

    connect(get_file_info_button, &QPushButton::clicked, this, &Info_Of_File::get_info_of_file);
    connect(set_text_size_button, &QPushButton::clicked, this, &Info_Of_File::set_text_font_size);
    connect(about_open, &QPushButton::clicked, this, &Info_Of_File::open_about_window);
}

void Info_Of_File::get_info_of_file() {
    const QString file_name = get_file_name->text();
    m_file = new QFileInfo(file_name);
    info->setText("File name is - " + m_file->baseName() + '\n' +
                  "File birth time is - " + m_file->birthTime().toString() + '\n' +
                  "File size in bytes is - " + QString::number(m_file->size()) + '\n' +
                  "File suffix is - " + m_file->suffix() + '\n' +
                  "File path - " + m_file->filePath() + '\n' +
                  "File last modif is - " + m_file->lastModified().toString() + '\n' +
                  "File last read is - " + m_file->lastRead().toString() + '\n' +
                  "File directory - " + m_file->absoluteFilePath() + '\n' +
                  "File meta data change time - " + m_file->metadataChangeTime().toString() + '\n' +
                  "File is root - " + QString::number( m_file->isRoot() ) + '\n' +
                  "File is readable - " + QString::number( m_file->isReadable() ) + '\n' +
                  "File is executable - " + QString::number ( m_file->isExecutable() ) + '\n' +
                  "File is hidden -  - " + QString::number (m_file->isHidden()) + '\n' +
                  "File is writable - " +  QString::number (m_file->isWritable()));
}

void Info_Of_File::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        get_info_of_file();
    }
    if (event->key() == Qt::Key_F) {
        set_text_font_size();
    }
}

void Info_Of_File::set_text_font_size() {
    if (get_text_size->text().toInt() <= 5000 && get_text_size->text().toInt() > 0)
        info->setStyleSheet("font-size: " + get_text_size->text() + "px;");
    else {
        Warning *warn = new Warning();
        QString test = "This font size is not supported!";
        warn->set_Text(test);
        warn->show();
    }
}

void Info_Of_File::open_about_window() {
    About *about = new About();
    about->show();
}

//void Info_Of_File::paintEvent(QPaintEvent *e) {

//    Q_UNUSED(e);

//    QPainter qp(this);

//    QPen pen(Qt::gray, 1, Qt::SolidLine);
//    qp.setPen(pen);
//    qp.drawLine(15, 80, 250, 80);
//  }
