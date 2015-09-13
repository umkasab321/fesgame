#include<QApplication>
#include<QLabel>
#include<QPushButton>
int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	QLabel* label = new QLabel("Hello Qt!");
	label->show();
	QPushButton* button = new QPushButton("Button");
	button->resize(200,40);
	button->move(100,50);
	button->show();
	return app.exec();
}
