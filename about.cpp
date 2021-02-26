#include "about.h"
#include "ui_about.h"
#include "QUrl"
#include "QDesktopServices"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}


void About::on_pushButton_clicked()
{

    QDesktopServices::openUrl(QUrl("https://www.youtube.com/channel/UChCVqiT_jodoOic3o18AkkQ", QUrl::TolerantMode));

}

void About::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/channel/UCl1HbvVCz_Aew-hk298SV1A", QUrl::TolerantMode));

}

void About::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("https://vk.com/nesryf", QUrl::TolerantMode));

}

void About::on_pushButton_8_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/jestsi", QUrl::TolerantMode));

}

void About::on_pushButton_7_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Mer4ant", QUrl::TolerantMode));
}
