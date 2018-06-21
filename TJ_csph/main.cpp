#include "TJ_csph.h"
#include "tj_gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TJ_csph w;
	TJ_GUI w2;
	w2.show();
	w.show();
	return a.exec();
}
