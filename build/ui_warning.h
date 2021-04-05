/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QString::fromUtf8("Warning"));
        Warning->setWindowModality(Qt::ApplicationModal);
        Warning->resize(300, 214);
        label = new QLabel(Warning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 271, 101));
        label->setStyleSheet(QString::fromUtf8("font-size: 13px;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Warning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 150, 111, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Warning);

        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QWidget *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Warning", "Ok!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
