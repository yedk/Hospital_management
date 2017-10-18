#include "mainwindow.h"
#include <QtWidgets/QDialog>
#include "ui_mainwindow.h"
#include "admin.h"
#include <qsqlquery.h>
#include <QStandardItemModel>

dialog::dialog(QWidget * parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QStandardItemModel *patient_model = new QStandardItemModel();
	patient_model->setColumnCount(3);
	patient_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	patient_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	patient_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("联系方式"));
	ui.tableView->setModel(patient_model);
	ui.tableView->setColumnWidth(0, 100);
	ui.tableView->setColumnWidth(1, 150);
	ui.tableView->setColumnWidth(2, 329);
	QStandardItemModel *doc_model = new QStandardItemModel();
	doc_model->setColumnCount(2);
	doc_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	doc_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	ui.tableView_2->setModel(doc_model);
	ui.tableView_2->setColumnWidth(0, 250);
	ui.tableView_2->setColumnWidth(1, 329);
	admin w;
	w.exec();
}

void dialog::on_pushButton_clicked()
{
	QStandardItemModel *patient_model = new QStandardItemModel();
	patient_model->setColumnCount(3);
	patient_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	patient_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	patient_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("联系方式"));
	ui.tableView->setModel(patient_model);
	ui.tableView->setColumnWidth(0, 100);
	ui.tableView->setColumnWidth(1, 150);
	ui.tableView->setColumnWidth(2, 313);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	/*query.exec("select * from patient");*/
	query.prepare("SELECT idname,name,phone FROM patient WHERE idname = ?");
	query.addBindValue(ui.lineEdit->text());
	query.exec();
	while (query.next())
	{
		//i++;
		patient_model->setItem(i, 0, new QStandardItem(query.value(0).toString()));
		patient_model->setItem(i, 1, new QStandardItem(query.value(1).toString()));
		patient_model->setItem(i, 2, new QStandardItem(query.value(2).toString()));
		i++;
	}
	db.close();
	i = 0;
}

void dialog::on_all_patient_clicked()
{
	QStandardItemModel *patient_model = new QStandardItemModel();
	patient_model->setColumnCount(3);
	patient_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	patient_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	patient_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("联系方式"));
	ui.tableView->setModel(patient_model);
	ui.tableView->setColumnWidth(0, 100);
	ui.tableView->setColumnWidth(1, 150);
	ui.tableView->setColumnWidth(2, 329);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from patient");
	while (query.next())
	{
		//i++;
		patient_model->setItem(i, 0, new QStandardItem(query.value(1).toString()));
		patient_model->setItem(i, 1, new QStandardItem(query.value(2).toString()));
		patient_model->setItem(i, 2, new QStandardItem(query.value(3).toString()));
		i++;
	}
	db.close();
	i = 0;
}

void dialog::on_doc_query_clicked()
{
	QStandardItemModel *doc_model = new QStandardItemModel();
	doc_model->setColumnCount(2);
	doc_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	doc_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	ui.tableView_2->setModel(doc_model);
	ui.tableView_2->setColumnWidth(0, 250);
	ui.tableView_2->setColumnWidth(1, 320);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	QString find_sql;
	QString find;
	find = ui.doc_id_qu->text();
	query.prepare("SELECT idname,name FROM doc WHERE idname = ?");
	query.addBindValue(ui.doc_id_qu->text());
	//find_sql = "select idname,name from doc where idname = find";
	//query.prepare(find_sql);
	//query.addBindValue(ui.doc_id_qu->text());
	//query.exec("select * from doc");
	//if (query.exec())
	//{
	query.exec();
		while (query.next())
		{
			//i++;
			doc_model->setItem(i, 0, new QStandardItem(query.value(0).toString()));
			doc_model->setItem(i, 1, new QStandardItem(query.value(1).toString()));
			i++;
		}
	//}

	db.close();
	i = 0;
}

void dialog::on_doc_insert_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	//QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	//db.setHostName("127.0.0.1");
	//db.setPort(3306);
	//db.setUserName("root1");
	//db.setPassword("123456");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE doc(id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"name varchar(20))");
	/*query.prepare("insert into doc (idname,name)"
		"values(?,?)");
	query.bindValue(0, ui.doc_id->text());
	query.bindValue(1, ui.doc_name->text());
	query.exec();*/
	query.exec("insert into doc(idname,name)values('" + ui.doc_id->text() + "','" + ui.doc_name->text() + "')");
	QMessageBox::information(this, "information", QString::fromLocal8Bit("成功插入数据！"));
	db.close();

}

void dialog::on_all_doc_clicked()
{
	QStandardItemModel *doc_model = new QStandardItemModel();
	doc_model->setColumnCount(2);
	doc_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("编号"));
	doc_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	ui.tableView_2->setModel(doc_model);
	ui.tableView_2->setColumnWidth(0, 250);
	ui.tableView_2->setColumnWidth(1, 320);
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("select * from doc");
	while (query.next())
	{
		//i++;
		doc_model->setItem(i, 0, new QStandardItem(query.value(1).toString()));
		doc_model->setItem(i, 1, new QStandardItem(query.value(2).toString()));
		i++;
	}
	db.close();
	i = 0;
}

void dialog::on_patient_insert_clicked()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	//QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	//db.setHostName("127.0.0.1");
	//db.setPort(3306);
	//db.setUserName("root1");
	//db.setPassword("123456");
	db.setDatabaseName("../manage.sql");
	if (!db.open())
	{
		QMessageBox::critical(0, "Cannot open database",
			"Unable to establish a data connection", QMessageBox::Cancel);
	}
	QSqlQuery query;
	query.exec("CREATE TABLE patient(id INTEFER PRIMARY KEY,"
		"idname varchar(20),"
		"name varchar(20),"
		"phone varchar(20))");
	/*query.prepare("insert into doc (idname,name)"
	"values(?,?)");
	query.bindValue(0, ui.doc_id->text());
	query.bindValue(1, ui.doc_name->text());
	query.exec();*/
	query.exec("insert into patient(idname,name,phone)values('" + ui.patient_id->text() + "','" + ui.patient_name->text() + "','"+ui.patient_phone->text()+"')");
	QMessageBox::information(this, "information", QString::fromLocal8Bit("成功插入数据！"));
	db.close();

}
