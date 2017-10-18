/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogClass
{
public:
    QTabWidget *tabWidget;
    QWidget *widget;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *all_patient;
    QWidget *doc_quer_wid;
    QTableView *tableView_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *doc_id_qu;
    QPushButton *doc_query;
    QPushButton *all_doc;
    QWidget *patient_input;
    QPushButton *patient_insert;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *patient_name;
    QLineEdit *patient_id;
    QLineEdit *patient_phone;
    QWidget *doctor_input;
    QPushButton *doc_insert;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *doc_id;
    QLineEdit *doc_name;

    void setupUi(QDialog *dialogClass)
    {
        if (dialogClass->objectName().isEmpty())
            dialogClass->setObjectName(QStringLiteral("dialogClass"));
        dialogClass->setWindowModality(Qt::WindowModal);
        dialogClass->resize(596, 575);
        tabWidget = new QTabWidget(dialogClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 571));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 200, 581, 291));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 110, 258, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        all_patient = new QPushButton(widget);
        all_patient->setObjectName(QStringLiteral("all_patient"));
        all_patient->setGeometry(QRect(30, 110, 111, 23));
        tabWidget->addTab(widget, QString());
        doc_quer_wid = new QWidget();
        doc_quer_wid->setObjectName(QStringLiteral("doc_quer_wid"));
        tableView_2 = new QTableView(doc_quer_wid);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 160, 591, 291));
        layoutWidget1 = new QWidget(doc_quer_wid);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 100, 260, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        doc_id_qu = new QLineEdit(layoutWidget1);
        doc_id_qu->setObjectName(QStringLiteral("doc_id_qu"));

        horizontalLayout_2->addWidget(doc_id_qu);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        doc_query = new QPushButton(layoutWidget1);
        doc_query->setObjectName(QStringLiteral("doc_query"));

        horizontalLayout_3->addWidget(doc_query);

        all_doc = new QPushButton(doc_quer_wid);
        all_doc->setObjectName(QStringLiteral("all_doc"));
        all_doc->setGeometry(QRect(20, 100, 111, 23));
        tabWidget->addTab(doc_quer_wid, QString());
        patient_input = new QWidget();
        patient_input->setObjectName(QStringLiteral("patient_input"));
        patient_insert = new QPushButton(patient_input);
        patient_insert->setObjectName(QStringLiteral("patient_insert"));
        patient_insert->setGeometry(QRect(460, 470, 75, 23));
        label_4 = new QLabel(patient_input);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 61, 16));
        label_5 = new QLabel(patient_input);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 61, 16));
        label_6 = new QLabel(patient_input);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 230, 91, 16));
        patient_name = new QLineEdit(patient_input);
        patient_name->setObjectName(QStringLiteral("patient_name"));
        patient_name->setGeometry(QRect(120, 80, 113, 20));
        patient_id = new QLineEdit(patient_input);
        patient_id->setObjectName(QStringLiteral("patient_id"));
        patient_id->setGeometry(QRect(120, 160, 113, 20));
        patient_phone = new QLineEdit(patient_input);
        patient_phone->setObjectName(QStringLiteral("patient_phone"));
        patient_phone->setGeometry(QRect(120, 230, 113, 20));
        tabWidget->addTab(patient_input, QString());
        doctor_input = new QWidget();
        doctor_input->setObjectName(QStringLiteral("doctor_input"));
        doc_insert = new QPushButton(doctor_input);
        doc_insert->setObjectName(QStringLiteral("doc_insert"));
        doc_insert->setGeometry(QRect(420, 440, 75, 23));
        label_2 = new QLabel(doctor_input);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 72, 71, 20));
        label_3 = new QLabel(doctor_input);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 61, 16));
        doc_id = new QLineEdit(doctor_input);
        doc_id->setObjectName(QStringLiteral("doc_id"));
        doc_id->setGeometry(QRect(90, 190, 113, 20));
        doc_name = new QLineEdit(doctor_input);
        doc_name->setObjectName(QStringLiteral("doc_name"));
        doc_name->setGeometry(QRect(90, 70, 113, 20));
        tabWidget->addTab(doctor_input, QString());

        retranslateUi(dialogClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialogClass);
    } // setupUi

    void retranslateUi(QDialog *dialogClass)
    {
        dialogClass->setWindowTitle(QApplication::translate("dialogClass", "\345\214\273\351\231\242\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("dialogClass", "\347\274\226\345\217\267\357\274\232", 0));
        pushButton->setText(QApplication::translate("dialogClass", "\346\237\245\350\257\242", 0));
        all_patient->setText(QApplication::translate("dialogClass", "\346\230\276\347\244\272\345\205\250\351\203\250\347\227\205\344\272\272\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        label_7->setText(QApplication::translate("dialogClass", "\347\274\226\345\217\267\357\274\232", 0));
        doc_query->setText(QApplication::translate("dialogClass", "\346\237\245\350\257\242", 0));
        all_doc->setText(QApplication::translate("dialogClass", "\346\230\276\347\244\272\345\205\250\351\203\250\345\214\273\347\224\237\344\277\241\346\201\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(doc_quer_wid), QApplication::translate("dialogClass", "\345\214\273\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        patient_insert->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
        label_4->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\345\247\223\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\347\274\226\345\217\267\357\274\232", 0));
        label_6->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(patient_input), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\345\275\225\345\205\245", 0));
        doc_insert->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
        label_2->setText(QApplication::translate("dialogClass", "\345\214\273\347\224\237\345\247\223\345\220\215\357\274\232", 0));
        label_3->setText(QApplication::translate("dialogClass", "\345\214\273\347\224\237\347\274\226\345\217\267\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(doctor_input), QApplication::translate("dialogClass", "\345\214\273\347\224\237\344\277\241\346\201\257\345\275\225\345\205\245", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogClass: public Ui_dialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
