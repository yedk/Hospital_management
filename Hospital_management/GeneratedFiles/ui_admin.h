/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminClass
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *passward;

    void setupUi(QDialog *adminClass)
    {
        if (adminClass->objectName().isEmpty())
            adminClass->setObjectName(QStringLiteral("adminClass"));
        adminClass->resize(803, 591);
        adminClass->setMaximumSize(QSize(803, 591));
        adminClass->setStyleSheet(QStringLiteral("background-image: url(:/admin/Resources/hospital_magement.png);"));
        label_2 = new QLabel(adminClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 520, 54, 12));
        pushButton_2 = new QPushButton(adminClass);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(527, 221, 75, 23));
        pushButton = new QPushButton(adminClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(527, 250, 75, 23));
        label = new QLabel(adminClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(482, 142, 48, 16));
        lineEdit = new QLineEdit(adminClass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(540, 140, 133, 20));
        label_3 = new QLabel(adminClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(483, 171, 36, 16));
        passward = new QLineEdit(adminClass);
        passward->setObjectName(QStringLiteral("passward"));
        passward->setGeometry(QRect(540, 170, 133, 20));

        retranslateUi(adminClass);

        QMetaObject::connectSlotsByName(adminClass);
    } // setupUi

    void retranslateUi(QDialog *adminClass)
    {
        adminClass->setWindowTitle(QApplication::translate("adminClass", "\345\214\273\351\231\242\347\256\241\347\220\206\347\263\273\347\273\237", 0));
#ifndef QT_NO_WHATSTHIS
        adminClass->setWhatsThis(QApplication::translate("adminClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\214\273\351\231\242\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("adminClass", "date&time", 0));
        pushButton_2->setText(QApplication::translate("adminClass", "\347\231\273\345\275\225", 0));
        pushButton->setText(QApplication::translate("adminClass", "\345\205\215\345\257\206\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("adminClass", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("adminClass", "\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class adminClass: public Ui_adminClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
