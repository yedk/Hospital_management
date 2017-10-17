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
    QTabWidget *patient_query_widget;
    QWidget *widget1;
    QTableView *tableView_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_5;
    QWidget *tab_4;
    QTableView *tableView_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_6;
    QWidget *tab_5;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QWidget *tab_6;
    QPushButton *pushButton_8;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QWidget *doc_quer_wid;
    QTableView *tableView_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QWidget *patient_input;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QWidget *doctor_input;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

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
        tableView->setGeometry(QRect(0, 131, 581, 291));
        patient_query_widget = new QTabWidget(widget);
        patient_query_widget->setObjectName(QStringLiteral("patient_query_widget"));
        patient_query_widget->setGeometry(QRect(0, -20, 601, 571));
        widget1 = new QWidget();
        widget1->setObjectName(QStringLiteral("widget1"));
        tableView_3 = new QTableView(widget1);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(0, 131, 581, 291));
        layoutWidget = new QWidget(widget1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 80, 258, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_4->addWidget(lineEdit_8);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        patient_query_widget->addTab(widget1, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(0, 160, 591, 291));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(320, 50, 260, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_6->addWidget(lineEdit_9);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        pushButton_6 = new QPushButton(layoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        patient_query_widget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(460, 470, 75, 23));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 80, 61, 16));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 160, 61, 16));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 230, 91, 16));
        lineEdit_10 = new QLineEdit(tab_5);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(120, 80, 113, 20));
        lineEdit_11 = new QLineEdit(tab_5);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(120, 160, 113, 20));
        lineEdit_12 = new QLineEdit(tab_5);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(120, 230, 113, 20));
        patient_query_widget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_8 = new QPushButton(tab_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(420, 440, 75, 23));
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 72, 71, 20));
        label_14 = new QLabel(tab_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 190, 61, 16));
        lineEdit_13 = new QLineEdit(tab_6);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(90, 190, 113, 20));
        lineEdit_14 = new QLineEdit(tab_6);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(90, 70, 113, 20));
        patient_query_widget->addTab(tab_6, QString());
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

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_2->addWidget(lineEdit_7);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        tabWidget->addTab(doc_quer_wid, QString());
        patient_input = new QWidget();
        patient_input->setObjectName(QStringLiteral("patient_input"));
        pushButton_2 = new QPushButton(patient_input);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 470, 75, 23));
        label_4 = new QLabel(patient_input);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 61, 16));
        label_5 = new QLabel(patient_input);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 160, 61, 16));
        label_6 = new QLabel(patient_input);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 230, 91, 16));
        lineEdit_4 = new QLineEdit(patient_input);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 80, 113, 20));
        lineEdit_5 = new QLineEdit(patient_input);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 160, 113, 20));
        lineEdit_6 = new QLineEdit(patient_input);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 230, 113, 20));
        tabWidget->addTab(patient_input, QString());
        doctor_input = new QWidget();
        doctor_input->setObjectName(QStringLiteral("doctor_input"));
        pushButton_4 = new QPushButton(doctor_input);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 440, 75, 23));
        label_2 = new QLabel(doctor_input);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 72, 71, 20));
        label_3 = new QLabel(doctor_input);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 61, 16));
        lineEdit_2 = new QLineEdit(doctor_input);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 190, 113, 20));
        lineEdit_3 = new QLineEdit(doctor_input);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 70, 113, 20));
        tabWidget->addTab(doctor_input, QString());

        retranslateUi(dialogClass);

        tabWidget->setCurrentIndex(0);
        patient_query_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialogClass);
    } // setupUi

    void retranslateUi(QDialog *dialogClass)
    {
        dialogClass->setWindowTitle(QApplication::translate("dialogClass", "\345\214\273\351\231\242\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_8->setText(QApplication::translate("dialogClass", "\347\274\226\345\217\267\357\274\232", 0));
        pushButton_5->setText(QApplication::translate("dialogClass", "\346\237\245\350\257\242", 0));
        patient_query_widget->setTabText(patient_query_widget->indexOf(widget1), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        label_9->setText(QApplication::translate("dialogClass", "\347\274\226\345\217\267\357\274\232", 0));
        pushButton_6->setText(QApplication::translate("dialogClass", "\346\237\245\350\257\242", 0));
        patient_query_widget->setTabText(patient_query_widget->indexOf(tab_4), QApplication::translate("dialogClass", "\345\214\273\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        pushButton_7->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
        label_10->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\345\247\223\345\220\215\357\274\232", 0));
        label_11->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\347\274\226\345\217\267\357\274\232", 0));
        label_12->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        patient_query_widget->setTabText(patient_query_widget->indexOf(tab_5), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\345\275\225\345\205\245", 0));
        pushButton_8->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
        label_13->setText(QApplication::translate("dialogClass", "\345\214\273\347\224\237\345\247\223\345\220\215\357\274\232", 0));
        label_14->setText(QApplication::translate("dialogClass", "\345\214\273\347\224\237\347\274\226\345\217\267\357\274\232", 0));
        patient_query_widget->setTabText(patient_query_widget->indexOf(tab_6), QApplication::translate("dialogClass", "\345\214\273\347\224\237\344\277\241\346\201\257\345\275\225\345\205\245", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        label_7->setText(QApplication::translate("dialogClass", "\347\274\226\345\217\267\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("dialogClass", "\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(doc_quer_wid), QApplication::translate("dialogClass", "\345\214\273\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
        label_4->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\345\247\223\345\220\215\357\274\232", 0));
        label_5->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\347\274\226\345\217\267\357\274\232", 0));
        label_6->setText(QApplication::translate("dialogClass", "\347\227\205\344\272\272\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(patient_input), QApplication::translate("dialogClass", "\347\227\205\344\272\272\344\277\241\346\201\257\345\275\225\345\205\245", 0));
        pushButton_4->setText(QApplication::translate("dialogClass", "\347\241\256\345\256\232", 0));
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
