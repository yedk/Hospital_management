#pragma once
#include<QtWidgets/QDialog>
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <qmessagebox.h>

class dialog :public QDialog
{
	Q_OBJECT;

public:
	dialog(QWidget *parent = Q_NULLPTR);
private:
	Ui::dialogClass ui;
	int i = 0;
	int j = 0;
private slots:
	void on_patient_insert_clicked();
	void on_pushButton_clicked();
	void on_all_patient_clicked();
	void on_doc_query_clicked();
	void on_doc_insert_clicked();
	void on_all_doc_clicked();
};
