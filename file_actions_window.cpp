#include "file_actions_window.h"
#include "ui_file_actions_window.h"
#include "QDebug"
#include "QDir"
#include "QScrollArea"

File_Actions_window::File_Actions_window(QString &path_to_file, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::File_Actions_window)
{
    ui->setupUi(this);
    m_file_m = new QFile(path_to_file);
    m_file = new QFileInfo(*m_file_m);


    QFile style(":/resource/styles/style_black_theme.css");
    style.open(QFile::ReadOnly);
    if (qApp->styleSheet() != style.readAll()) {
        ui->pushButton_2->setIcon(QIcon(":/resource/img/black_theme/trash-512.png"));
    } else {
        ui->pushButton_2->setIcon(QIcon(":/resource/img/white_theme/trash-512.png"));
    }

    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setWidget(ui->widget);
    scrollArea->setMaximumSize(520, 300);
    scrollArea->setFixedSize(512, 300);
    scrollArea->setGeometry(scrollArea->geometry().x(), 10, scrollArea->geometry().width(), scrollArea->geometry().height());
    scrollArea->setWindowTitle("File actions");
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setFrameStyle(0);
    scrollArea->show();

    // start value
    ui->lineEdit->setText(m_file->fileName());
    ui->dateTimeEdit->setDateTime(m_file->lastModified());
    ui->dateTimeEdit_2->setDateTime(m_file->lastRead());
    ui->dateTimeEdit_3->setDateTime(m_file->birthTime());
    ui->dateTimeEdit_4->setDateTime(m_file->metadataChangeTime());
    ui->spinBox->setValue(m_file->size());

}

File_Actions_window::~File_Actions_window()
{
    delete m_file;
    delete m_file_m;
    delete ui;
}

void File_Actions_window::on_pushButton_clicked()
{
    m_file_m->rename(m_file->path() + '/' + ui->lineEdit->text());

    m_file_m->close();
}

void File_Actions_window::on_pushButton_2_clicked()
{
    m_file_m->moveToTrash();
    this->close();
}

void File_Actions_window::on_pushButton_3_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit->dateTime()), QFileDevice::FileModificationTime);
    m_file_m->close();
}

void File_Actions_window::on_pushButton_4_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text | QIODevice::ReadWrite);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit_2->dateTime()), QFileDevice::FileAccessTime);

    m_file_m->close();
}

void File_Actions_window::on_pushButton_5_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text | QIODevice::ReadWrite);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit_3->dateTime()), QFileDevice::FileBirthTime);

    m_file_m->close();
}

void File_Actions_window::on_pushButton_6_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text | QIODevice::ReadWrite);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit_4->dateTime()), QFileDevice::FileMetadataChangeTime);

    m_file_m->close();
}

void File_Actions_window::on_pushButton_7_clicked()
{
    m_file_m->resize(ui->spinBox->text().toInt());
}
