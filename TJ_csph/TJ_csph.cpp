#include "TJ_csph.h"

#include < QMessageBox >  
#include <qinputdialog.h>
#include "iostream"
using namespace std;
TJ_csph::TJ_csph(QWidget *parent)
	: QMainWindow(parent)
{
	inputDialog(); 
	ui.setupUi(this);
}

void TJ_csph::on_refleshslot()
{
	QMessageBox::about(this, "about", "this is a about dialog\n");
}
void TJ_csph::on_exitslot()
{
	QMessageBox msgBox(QMessageBox::Warning, tr("QMessageBox::warning()"),
		0, 0, this);
	msgBox.addButton(tr("Save &Again"), QMessageBox::AcceptRole);
	msgBox.addButton(tr("&Continue"), QMessageBox::RejectRole);
	if (msgBox.exec() == QMessageBox::AcceptRole)
		QMessageBox::about(this, "Save &Again", "Save &Again\n");
	else
		QMessageBox::about(this, "Continue", "Continue\n");
		//warningLabel->setText(tr("Continue"));
}

int TJ_csph::inputDialog()
{
	QString  str(u8"我是中文");
	bool ok ;
	QString text = QInputDialog::getText(this,(u8"验证"), tr("请输入身份证号："), QLineEdit::Password, tr(""), &ok);
	// 当身份证号输入完成，用户点击确认键后，传客户号码给服务器
	if (ok) { // 当按下ok键时候，ok = true
		QString data = "tell\nvip\n" + text;
		//tcpSocket->write(data.toLatin1());
	}
	return 0;
}
