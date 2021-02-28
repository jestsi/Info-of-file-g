#include "about.h"
#include "ui_about.h"
#include "QUrl"
#include "QDesktopServices"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
//    this->setStyleSheet("background-color: rgb(25,25,25);");
}

About::~About()
{
    delete ui;
}


void About::on_youtubeCPushButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.youtube.com/channel/UChCVqiT_jodoOic3o18AkkQ", QUrl::TolerantMode));
}

void About::on_youtubeTPushButton_clicked()
{
     QDesktopServices::openUrl(QUrl("https://www.youtube.com/channel/UCl1HbvVCz_Aew-hk298SV1A", QUrl::TolerantMode));
}

void About::on_vkButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://vk.com/nesryf", QUrl::TolerantMode));
}

void About::on_githubCButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/jestsi", QUrl::TolerantMode));
}

void About::on_githubTButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Mer4ant", QUrl::TolerantMode));
}
