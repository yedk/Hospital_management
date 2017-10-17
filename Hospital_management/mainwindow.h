#pragma once
#include<QtWidgets/QDialog>
#include "ui_mainwindow.h"

class dialog :public QDialog
{
	Q_OBJECT;

public:
	dialog(QWidget *parent = Q_NULLPTR);
private:
	Ui::dialogClass ui;
};
