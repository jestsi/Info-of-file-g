#include "warning.h"
#include "ui_warning.h"

Warning::Warning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Warning)
{
//    *m_text = "Warning!!";
//    ui->label->setText("Warning!!");

    ui->setupUi(this);
    this->setWindowTitle("Warning!!");



//    QFile file(":/resource/styles/style_white_theme.css");
//    file.open(QFile::ReadOnly);
//    this->setStyleSheet(file.readAll());

    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());

}

Warning::~Warning()
{
    delete ui;
}

void Warning::on_pushButton_clicked()
{
    this->close();
}

void Warning::set_Text(QString &text)  {

    this->ui->label->setText(text);

}
