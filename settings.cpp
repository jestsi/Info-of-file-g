#include "settings.h"
#include "ui_settings.h"
#include "warning.h"


Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle("Settings");


}

Settings::~Settings()
{
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
    qApp->setStyleSheet(qApp->styleSheet() + "font-size: " + ui->lineEdit_font_size->text() + "px;");
}
