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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminClass
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *passward;

    void setupUi(QDialog *adminClass)
    {
        if (adminClass->objectName().isEmpty())
            adminClass->setObjectName(QStringLiteral("adminClass"));
        adminClass->resize(684, 510);
        adminClass->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(adminClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 520, 54, 12));
        layoutWidget = new QWidget(adminClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 350, 83, 60));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_2);

        layoutWidget1 = new QWidget(adminClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(410, 270, 191, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        passward = new QLineEdit(layoutWidget1);
        passward->setObjectName(QStringLiteral("passward"));

        horizontalLayout_3->addWidget(passward);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);


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
        pushButton->setText(QApplication::translate("adminClass", "\345\205\215\345\257\206\347\231\273\345\275\225", 0));
        pushButton_2->setText(QApplication::translate("adminClass", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("adminClass", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("adminClass", "\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class adminClass: public Ui_adminClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
