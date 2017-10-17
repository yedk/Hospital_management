#pragma once

#include <QtWidgets/QDialog>
#include "ui_admin.h"
#include "mainwindow.h"
#include <qevent.h>

class admin : public QDialog
{
	Q_OBJECT

public:
	admin(QWidget *parent = Q_NULLPTR);
	/*void closeEvent(QCloseEvent*event);*/
private:
	Ui::adminClass ui;

private slots:
	void on_pushButton_2_clicked();
	void on_pushButton_clicked();
};
