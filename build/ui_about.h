/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *youtubeCPushButton;
    QPushButton *youtubeTPushButton;
    QPushButton *vkCButton;
    QPushButton *githubTButton;
    QPushButton *githubCButton;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QPushButton *vkTButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *Discord_icon;
    QLabel *Discord_icon_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->setWindowModality(Qt::ApplicationModal);
        About->resize(344, 435);
        About->setMinimumSize(QSize(344, 435));
        About->setMaximumSize(QSize(344, 435));
        youtubeCPushButton = new QPushButton(About);
        youtubeCPushButton->setObjectName(QString::fromUtf8("youtubeCPushButton"));
        youtubeCPushButton->setGeometry(QRect(20, 130, 130, 50));
        youtubeCPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/img/white_theme/youtube.png"), QSize(), QIcon::Normal, QIcon::Off);
        youtubeCPushButton->setIcon(icon);
        youtubeCPushButton->setIconSize(QSize(48, 48));
        youtubeTPushButton = new QPushButton(About);
        youtubeTPushButton->setObjectName(QString::fromUtf8("youtubeTPushButton"));
        youtubeTPushButton->setGeometry(QRect(190, 130, 130, 50));
        youtubeTPushButton->setCursor(QCursor(Qt::PointingHandCursor));
        youtubeTPushButton->setIcon(icon);
        youtubeTPushButton->setIconSize(QSize(48, 48));
        vkCButton = new QPushButton(About);
        vkCButton->setObjectName(QString::fromUtf8("vkCButton"));
        vkCButton->setGeometry(QRect(20, 190, 130, 50));
        vkCButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/img/white_theme/vk.png"), QSize(), QIcon::Normal, QIcon::Off);
        vkCButton->setIcon(icon1);
        vkCButton->setIconSize(QSize(38, 38));
        githubTButton = new QPushButton(About);
        githubTButton->setObjectName(QString::fromUtf8("githubTButton"));
        githubTButton->setGeometry(QRect(190, 250, 130, 50));
        githubTButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/img/white_theme/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        githubTButton->setIcon(icon2);
        githubTButton->setIconSize(QSize(32, 32));
        githubCButton = new QPushButton(About);
        githubCButton->setObjectName(QString::fromUtf8("githubCButton"));
        githubCButton->setGeometry(QRect(20, 250, 130, 50));
        githubCButton->setCursor(QCursor(Qt::PointingHandCursor));
        githubCButton->setIcon(icon2);
        githubCButton->setIconSize(QSize(32, 32));
        line = new QFrame(About);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(160, 70, 20, 231));
        line->setStyleSheet(QString::fromUtf8("color: black;"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 10, 141, 41));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(179, 10, 141, 41));
        label_2->setAlignment(Qt::AlignCenter);
        vkTButton = new QPushButton(About);
        vkTButton->setObjectName(QString::fromUtf8("vkTButton"));
        vkTButton->setGeometry(QRect(190, 190, 130, 50));
        vkTButton->setCursor(QCursor(Qt::PointingHandCursor));
        vkTButton->setIcon(icon1);
        vkTButton->setIconSize(QSize(38, 38));
        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 111, 41));
        label_3->setCursor(QCursor(Qt::IBeamCursor));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 80, 131, 41));
        label_4->setCursor(QCursor(Qt::IBeamCursor));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        Discord_icon = new QLabel(About);
        Discord_icon->setObjectName(QString::fromUtf8("Discord_icon"));
        Discord_icon->setGeometry(QRect(60, 40, 51, 51));
        Discord_icon->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/white_theme/discord.png")));
        Discord_icon->setScaledContents(true);
        Discord_icon_2 = new QLabel(About);
        Discord_icon_2->setObjectName(QString::fromUtf8("Discord_icon_2"));
        Discord_icon_2->setGeometry(QRect(225, 40, 51, 51));
        Discord_icon_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/white_theme/discord.png")));
        Discord_icon_2->setScaledContents(true);
        label_5 = new QLabel(About);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 310, 101, 31));
        label_6 = new QLabel(About);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 340, 231, 51));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", nullptr));
        youtubeCPushButton->setText(QString());
        youtubeTPushButton->setText(QString());
        vkCButton->setText(QString());
        githubTButton->setText(QString());
        githubCButton->setText(QString());
        label->setText(QApplication::translate("About", "Creator", nullptr));
        label_2->setText(QApplication::translate("About", "Tester", nullptr));
        vkTButton->setText(QString());
        label_3->setText(QApplication::translate("About", "Gest#1955", nullptr));
        label_4->setText(QApplication::translate("About", "FlyMaster#2642", nullptr));
        Discord_icon->setText(QString());
        Discord_icon_2->setText(QString());
        label_5->setText(QApplication::translate("About", "Donate", nullptr));
        label_6->setText(QApplication::translate("About", "Sber card - 5469 6000 4265 1281", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
