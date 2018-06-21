#ifndef TJ_GUI_H
#define TJ_GUI_H

#include <QWidget>
#include "ui_tj_gui.h"

class TJ_GUI : public QWidget
{
	Q_OBJECT

public:
	TJ_GUI(QWidget *parent = 0);
	~TJ_GUI();

private:
	Ui::TJ_GUI ui;
};

#endif // TJ_GUI_H
