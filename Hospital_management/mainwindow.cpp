#include "mainwindow.h"
#include <QtWidgets/QDialog>
#include "ui_mainwindow.h"
#include "admin.h"

dialog::dialog(QWidget * parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	admin w;
	w.exec();
}

