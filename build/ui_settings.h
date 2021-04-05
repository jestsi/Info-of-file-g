/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_font_size;
    QLabel *label_font_size;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirm_button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setWindowModality(Qt::ApplicationModal);
        Settings->resize(461, 430);
        Settings->setMinimumSize(QSize(461, 430));
        Settings->setMaximumSize(QSize(461, 430));
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 185, 51));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(Settings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 80, 185, 51));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_font_size = new QLineEdit(Settings);
        lineEdit_font_size->setObjectName(QString::fromUtf8("lineEdit_font_size"));
        lineEdit_font_size->setGeometry(QRect(103, 150, 72, 50));
        lineEdit_font_size->setMaxLength(2);
        label_font_size = new QLabel(Settings);
        label_font_size->setObjectName(QString::fromUtf8("label_font_size"));
        label_font_size->setGeometry(QRect(10, 150, 91, 51));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_font_size->setFont(font1);
        pushButton_3 = new QPushButton(Settings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 20, 185, 51));
        pushButton_3->setFont(font);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayoutWidget = new QWidget(Settings);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 350, 461, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        confirm_button = new QPushButton(horizontalLayoutWidget);
        confirm_button->setObjectName(QString::fromUtf8("confirm_button"));
        confirm_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(confirm_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        pushButton->setText(QApplication::translate("Settings", "White color theme", nullptr));
        pushButton_2->setText(QApplication::translate("Settings", "Black color theme", nullptr));
        lineEdit_font_size->setInputMask(QString());
        lineEdit_font_size->setText(QApplication::translate("Settings", "10", nullptr));
        label_font_size->setText(QApplication::translate("Settings", "Font size", nullptr));
        pushButton_3->setText(QApplication::translate("Settings", "Purple color theme", nullptr));
        confirm_button->setText(QApplication::translate("Settings", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
