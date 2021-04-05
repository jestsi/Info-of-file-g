/********************************************************************************
** Form generated from reading UI file 'file_actions_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_ACTIONS_WINDOW_H
#define UI_FILE_ACTIONS_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_File_Actions_window
{
public:
    QPushButton *pushButton_2;
    QWidget *widget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QDateTimeEdit *dateTimeEdit_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QDateTimeEdit *dateTimeEdit_4;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QSpinBox *spinBox;

    void setupUi(QWidget *File_Actions_window)
    {
        if (File_Actions_window->objectName().isEmpty())
            File_Actions_window->setObjectName(QString::fromUtf8("File_Actions_window"));
        File_Actions_window->setWindowModality(Qt::ApplicationModal);
        File_Actions_window->resize(521, 406);
        File_Actions_window->setMinimumSize(QSize(521, 406));
        File_Actions_window->setMaximumSize(QSize(521, 406));
        pushButton_2 = new QPushButton(File_Actions_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 320, 61, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: f;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/img/white_theme/trash-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(48, 48));
        widget = new QWidget(File_Actions_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-3, 10, 501, 381));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        widget->setStyleSheet(QString::fromUtf8("border: ;"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 491, 91));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 90, 491, 201));
        groupBox_2->setMinimumSize(QSize(0, 100));
        groupBox_2->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dateTimeEdit_2 = new QDateTimeEdit(groupBox_2);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"    border-radius: 7px;"));
        dateTimeEdit_2->setWrapping(true);
        dateTimeEdit_2->setFrame(false);
        dateTimeEdit_2->setAlignment(Qt::AlignCenter);
        dateTimeEdit_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTimeEdit_2->setProperty("showGroupSeparator", QVariant(true));

        gridLayout_2->addWidget(dateTimeEdit_2, 1, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"    border-radius: 7px;"));
        dateTimeEdit->setWrapping(true);
        dateTimeEdit->setFrame(false);
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(dateTimeEdit, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        dateTimeEdit_3 = new QDateTimeEdit(groupBox_2);
        dateTimeEdit_3->setObjectName(QString::fromUtf8("dateTimeEdit_3"));
        dateTimeEdit_3->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"    border-radius: 7px;"));
        dateTimeEdit_3->setWrapping(true);
        dateTimeEdit_3->setFrame(false);
        dateTimeEdit_3->setAlignment(Qt::AlignCenter);
        dateTimeEdit_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTimeEdit_3->setProperty("showGroupSeparator", QVariant(true));

        gridLayout_2->addWidget(dateTimeEdit_3, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 3, 2, 1, 1);

        dateTimeEdit_4 = new QDateTimeEdit(groupBox_2);
        dateTimeEdit_4->setObjectName(QString::fromUtf8("dateTimeEdit_4"));
        dateTimeEdit_4->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"    border-radius: 7px;"));
        dateTimeEdit_4->setWrapping(true);
        dateTimeEdit_4->setFrame(false);
        dateTimeEdit_4->setAlignment(Qt::AlignCenter);
        dateTimeEdit_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTimeEdit_4->setProperty("showGroupSeparator", QVariant(true));

        gridLayout_2->addWidget(dateTimeEdit_4, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 4, 2, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 295, 491, 91));
        groupBox_3->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 0, 1, 1, 1);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFrame(false);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMaximum(999999999);

        gridLayout_3->addWidget(spinBox, 0, 0, 1, 1);


        retranslateUi(File_Actions_window);

        QMetaObject::connectSlotsByName(File_Actions_window);
    } // setupUi

    void retranslateUi(QWidget *File_Actions_window)
    {
        File_Actions_window->setWindowTitle(QApplication::translate("File_Actions_window", "File actions", nullptr));
#ifndef QT_NO_STATUSTIP
        pushButton_2->setStatusTip(QApplication::translate("File_Actions_window", "Move to trash file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_2->setWhatsThis(QApplication::translate("File_Actions_window", "Move to trash file", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QString());
        groupBox->setTitle(QApplication::translate("File_Actions_window", "Rename file", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("File_Actions_window", "Enter new file name", nullptr));
        pushButton->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        groupBox_2->setTitle(QApplication::translate("File_Actions_window", "Edit time", nullptr));
        label->setText(QApplication::translate("File_Actions_window", "Last modif", nullptr));
        label_3->setText(QApplication::translate("File_Actions_window", "Birth file ", nullptr));
        pushButton_4->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        pushButton_3->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        label_2->setText(QApplication::translate("File_Actions_window", "Open file ", nullptr));
        pushButton_5->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        pushButton_6->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        label_4->setText(QApplication::translate("File_Actions_window", "MetaData file ", nullptr));
        groupBox_3->setTitle(QApplication::translate("File_Actions_window", "Resize file", nullptr));
        pushButton_7->setText(QApplication::translate("File_Actions_window", "Set", nullptr));
        spinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class File_Actions_window: public Ui_File_Actions_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_ACTIONS_WINDOW_H
