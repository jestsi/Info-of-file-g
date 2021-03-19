#include "file_actions_window.h"
#include "ui_file_actions_window.h"
#include "QDebug"
#include "QDir"

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
}

File_Actions_window::~File_Actions_window()
{

    delete ui;
}

void File_Actions_window::on_pushButton_clicked()
{
    m_file_m->open(QIODevice::ReadWrite);

    QFile::rename(m_file->filePath(), m_file->path() +
#ifdef Q_OS_LINUX
                  "/"
#else
                  "\\"
#endif
                  + ui->lineEdit->text());


    m_file_m->close();


}

void File_Actions_window::on_pushButton_2_clicked()
{
    m_file_m->moveToTrash();
}

void File_Actions_window::on_pushButton_3_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit->dateTime()), QFileDevice::FileModificationTime);
    m_file_m->close();
}

void File_Actions_window::on_pushButton_4_clicked()
{
    m_file_m->open(QIODevice::Append | QIODevice::Text);
    m_file_m->setFileTime(QDateTime(ui->dateTimeEdit->dateTime()), QFileDevice::FileAccessTime);

    m_file_m->close();
}
