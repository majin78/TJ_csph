#pragma once

#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include "ui_TJ_csph.h"

class TJ_csph : public QMainWindow
{
	Q_OBJECT

public:
	TJ_csph(QWidget *parent = Q_NULLPTR);

private slots:
	void on_refleshslot();
	void on_exitslot();
private:
	Ui::TJ_csphClass ui;
public:
	int inputDialog();
};
