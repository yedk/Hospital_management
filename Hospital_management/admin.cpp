#include "admin.h"
#include <qpainter.h>
#include "mainwindow.h"
#include <qmessagebox.h>
#include <QtWidgets/QApplication>
#include <qevent.h>


admin::admin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.passward->setEchoMode(QLineEdit::Password);
	setWindowFlags(Qt::WindowTitleHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
}

//void admin::closeEvent(QCloseEvent * event)
//{
//	event->ignore();
//}

void admin::on_pushButton_clicked()
{
	close();
}
void admin::on_pushButton_2_clicked()
{
	if ((ui.lineEdit->text() == "admin") && (ui.passward->text() == "123456"))
	{
		//dialog Mainwin;
		/*Mainwin.setGeometry(QRect(500, 250, 376, 247));
		Mainwin.setWindowModified(true);
		Mainwin.show();*/
	//this->hide();
		close();
	}
	else
	{
		QMessageBox::critical(NULL,QStringLiteral( "´íÎó"), QStringLiteral("ÃÜÂë´íÎó£¡"), QMessageBox::Yes, QMessageBox::Yes);
	}
}