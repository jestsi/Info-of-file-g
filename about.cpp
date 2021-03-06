#include "about.h"
#include "ui_about.h"
#include "QUrl"
#include "QDesktopServices"
#include "QFile"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QFile file(":/resource/styles/style_black_theme.css");
    file.open(QFile::ReadOnly);

    if (qApp->styleSheet() == file.readAll()) {
        ui->githubCButton->setIcon(QIcon(":/resource/img/white_theme/github.png"));
        ui->githubTButton->setIcon(QIcon(":/resource/img/white_theme/github.png"));

        ui->vkCButton->setIcon(QIcon(":/resource/img/white_theme/vk.png"));
        ui->vkTButton->setIcon(QIcon(":/resource/img/white_theme/vk.png"));

        ui->youtubeCPushButton->setIcon(QIcon(":/resource/img/white_theme/youtube.png"));
        ui->youtubeTPushButton->setIcon(QIcon(":/resource/img/white_theme/youtube.png"));

        ui->Discord_icon->setPixmap(QPixmap(":/resource/img/white_theme/discord.png"));
        ui->Discord_icon_2->setPixmap(QPixmap(":/resource/img/white_theme/discord.png"));
    } else {
        ui->githubCButton->setIcon(QIcon(":/resource/img/black_theme/github.png"));
        ui->githubTButton->setIcon(QIcon(":/resource/img/black_theme/github.png"));

        ui->vkCButton->setIcon(QIcon(":/resource/img/black_theme/vk.png"));
        ui->vkTButton->setIcon(QIcon(":/resource/img/black_theme/vk.png"));

        ui->youtubeCPushButton->setIcon(QIcon(":/resource/img/black_theme/youtube.png"));
        ui->youtubeTPushButton->setIcon(QIcon(":/resource/img/black_theme/youtube.png"));

        ui->Discord_icon->setPixmap(QPixmap(":/resource/img/black_theme/discord.png"));
        ui->Discord_icon_2->setPixmap(QPixmap(":/resource/img/black_theme/discord.png"));
    }
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
     QDesktopServices::openUrl(QUrl("https://www.youtube.com/channel/UCt7FU0J-ewnYppudD_oGI5Q", QUrl::TolerantMode));
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
    QDesktopServices::openUrl(QUrl("https://github.com/Apceniy", QUrl::TolerantMode));
}

void About::on_vkTButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://vk.com/redstoner2002", QUrl::TolerantMode));
}


void About::on_vkCButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://vk.com/nesryf", QUrl::TolerantMode));
}
