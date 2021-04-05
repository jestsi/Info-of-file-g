#include "info_of_file.hpp"
#include "QPushButton"
#include "QDateTime"
#include "QKeyEvent"
#include "QDir"
#include "QPixmap"
#include "QPainter"
#include "warning.h"
#include "QFileDialog"
#include "QMessageBox"
#include "QMimeType"
#include "QMimeDatabase"

Info_Of_File::Info_Of_File(QWidget *parent) : QWidget(parent)
{
    get_file_name = new QLineEdit(this);
    info = new QLabel(this);
    settings = new Settings(nullptr);
    m_file = nullptr;
    m_file_m = nullptr;
    about = nullptr;
    window = nullptr;

    QFont win_font = info->font();
    win_font.setPixelSize(10);
    info->setFont(win_font);
    info->show();


    QPushButton *get_file_info_button = new QPushButton(tr( "Get info"), this);
    QPushButton *about_open = new QPushButton(tr("About"), this);
    QPushButton *open_settings_button = new QPushButton(tr("Settings"), this);
    QPushButton *open_file_dialog = new QPushButton("...", this);
    QPushButton *actions_of_file_button = new QPushButton("File actions", this);

    get_file_info_button->setCursor(Qt::PointingHandCursor);
    about_open->setCursor(Qt::PointingHandCursor);
    open_settings_button->setCursor(Qt::PointingHandCursor);
    open_file_dialog->setCursor(Qt::PointingHandCursor);
    actions_of_file_button->setCursor(Qt::PointingHandCursor);


    QPixmap myPixmap(":/resource/img/Logo2.png");
    QLabel *picture = new QLabel(this);
    picture->setPixmap(myPixmap.scaled( picture->width()/1.2, picture->height()/1.2, Qt::KeepAspectRatioByExpanding ));
    picture->setAlignment((Qt::AlignRight | Qt::AlignBottom));

    info->setAlignment(Qt::AlignTop);
    info->setTextInteractionFlags(Qt::TextSelectableByMouse);

    get_file_name->setPlaceholderText(tr("Enter file name"));
    get_file_name->setTabletTracking(false);


    grid = new QGridLayout(this);

    QPalette p = get_file_name->palette();
    p.setColor(QPalette::PlaceholderText, Qt::darkGray);
    get_file_name->setPalette(p);

    open_file_dialog->setMaximumWidth(60);

    grid->addWidget(get_file_info_button, 0, 2);

    grid->addWidget(get_file_name, 0, 0);
    grid->addWidget(info, 1, 0);
    grid->addWidget(picture, 3, 4);
    grid->addWidget(about_open, 0, 4);
    grid->addWidget(open_settings_button, 1, 4, Qt::AlignTop);
    grid->addWidget(actions_of_file_button, 1, 2, Qt::AlignTop);
    grid->addWidget(open_file_dialog, 0, 1);

    get_file_name->setAlignment(Qt::AlignTop);

    connect(settings, &Settings::fontSize, this, &Info_Of_File::set_font_size);
    connect(get_file_info_button, SIGNAL(clicked()), this, SLOT(get_info_of_file()));
    connect(about_open, SIGNAL(clicked()), this, SLOT(open_about_window()));
    connect(open_settings_button, SIGNAL(clicked()), this, SLOT(open_setting_slot()));
    connect(open_file_dialog, SIGNAL(clicked()), this, SLOT(open_file_dialog_slot()));
    connect(actions_of_file_button, SIGNAL(clicked()), this, SLOT(open_file_action_slot()));
}

Info_Of_File::~Info_Of_File() {
    delete get_file_name;
    delete info;
    delete settings;
    delete grid;
    delete m_file;
    delete m_file_m;
    delete about;
    delete window;
}

void Info_Of_File::get_info_of_file() {

    if (get_file_name->text().size() > 0) {
        const QString file_name = get_file_name->text();
        m_file = new QFileInfo(file_name);
        m_file_m = new QFile(m_file->fileName());

        QMimeDatabase db;
        QMimeType mime = db.mimeTypeForFile(m_file->absoluteFilePath(), QMimeDatabase::MatchContent);


        info->setText(
                      "File name is - "               + m_file->baseName() + '\n' +
                      "File birth time is - "         + m_file->birthTime().toString() + '\n' +
                      "File size in bytes is - "      + QString::number(m_file->size()) + '\n' +
                      "File suffix is - "             + m_file->suffix() + '\n' +
                      "File path - "                  + m_file->filePath() + '\n' +
                      "File last modif is - "         + m_file->lastModified().toString() + '\n' +
                      "File last read is - "          + m_file->lastRead().toString() + '\n' +
                      "File absolute directory - "    + m_file->absoluteFilePath() + '\n' +
                      "File directory - "             + m_file->dir().currentPath() + "\n" +
                      "File type - "                  + mime.filterString() + '\n' +
                      "File meta data change time - " + m_file->metadataChangeTime().toString() + '\n' +
                      "File is junction - "           + ( m_file->isJunction() ? "Yes" : "No") + '\n' +
                      "File is root - "               + ( m_file->isRoot() ? "Yes" : "No") + '\n' +
                      "File is readable - "           + ( m_file->isReadable() ? "Yes" : "No" ) + '\n' +
                      "File is executable - "         + ( m_file->isExecutable() ? "Yes" : "No") + '\n' +
                      "File is hidden - "             + ( m_file->isHidden() ? "Yes" : "No") + '\n' +
                      "File is writable - "           + ( m_file->isWritable() ? "Yes" : "No")
                    );
    }
}

void Info_Of_File::keyPressEvent(QKeyEvent *event) {

    if (event->key() == Qt::Key_Return) {
        get_info_of_file();
    }

}

void Info_Of_File::open_about_window() {
    about = new About();
    about->show();
}

void Info_Of_File::open_setting_slot() {
    settings->show();
}

void Info_Of_File::open_file_dialog_slot () {
    QFileDialog dialog(nullptr);
    dialog.setObjectName("file_selector");

    QString full_dir = QString::fromStdString( dialog.getOpenFileName().toStdString());
    get_file_name->setText(full_dir);


    if (full_dir.size() != 0)
        get_info_of_file();
}

void Info_Of_File::set_font_size(qint32 value) {
    QFont font = info->font();
    font.setPixelSize(value);
    info->setFont(font);
}

void Info_Of_File::open_file_action_slot() {

    QString temp = get_file_name->text();
    if (temp.size() > 0) {
        window = new File_Actions_window(temp, nullptr);
        window->show();
    } else {
        QMessageBox::warning(nullptr, "Warning!", "Select file for edit file!!");
    }
}
