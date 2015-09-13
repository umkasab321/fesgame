#include<QApplication>
#include"mainwindow.h"
int main(int argc, char **argv)
{
	QApplication a(argc, argv);
	mainwindow *w = new mainwindow();
	w->show();
	return a.exec();	
}

