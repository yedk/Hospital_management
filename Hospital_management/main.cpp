#include "admin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//admin w;
	//w.show();
	dialog d;
	d.show();
	return a.exec();
}
