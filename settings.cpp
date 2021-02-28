#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_pushButton_clicked()
{
//    Settings::theme_is_black = !theme_is_black;
    QFile file(":/resource/styles/style_white_theme.css");
    file.open(QFile::ReadOnly);
//    this->setStyleSheet(file.readAll());
    qApp->setStyleSheet(file.readAll());
//    this->setStyleSheet("background: rgb(230, 230, 230);");

}

void Settings::on_pushButton_2_clicked()
{
    QFile file(":/resource/styles/style_black_theme.css");
    file.open(QFile::ReadOnly);
    QString test = file.readAll();
//    this->setStyleSheet(test);
    qApp->setStyleSheet(test);
//    this->setStyleSheet("background: rgb(25, 25, 25);");
}
