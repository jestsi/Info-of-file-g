#include "settings.h"
#include "ui_settings.h"
#include "warning.h"
#include "QMainWindow"
#include "QMessageBox"

Settings::Settings(QWidget *window ,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");

    m_window = window;

}

Settings::~Settings()
{
    delete m_window;
    delete ui;
}

void Settings::on_pushButton_clicked()
{

    QFile file(":/resource/styles/style_white_theme.css");
    file.open(QFile::ReadOnly);
    qApp->setStyleSheet(file.readAll());

}

void Settings::on_pushButton_2_clicked()
{
    QFile file(":/resource/styles/style_black_theme.css");
    file.open(QFile::ReadOnly);
    QString test = file.readAll();

    qApp->setStyleSheet(test);

}

void Settings::on_confirm_button_clicked()
{
    int size_font_i = ui->lineEdit_font_size->text().toInt();
    if (size_font_i > 3 && size_font_i < 32) {
        emit fontSize(size_font_i);
        this->close();
    }
    else {
        QMessageBox::warning(nullptr, "Warning", "Maximum font size is 32! Minimum is 3!");
    }

}

void Settings::on_pushButton_3_clicked()
{
    QFile file(":/resource/styles/style_purple_theme.css");
    file.open(QFile::ReadOnly);
    QString test = file.readAll();

    qApp->setStyleSheet(test);
}
