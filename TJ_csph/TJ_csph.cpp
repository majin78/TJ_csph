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
	QString  str(u8"��������");
	bool ok ;
	QString text = QInputDialog::getText(this,(u8"��֤"), tr("���������֤�ţ�"), QLineEdit::Password, tr(""), &ok);
	// �����֤��������ɣ��û����ȷ�ϼ��󣬴��ͻ������������
	if (ok) { // ������ok��ʱ��ok = true
		QString data = "tell\nvip\n" + text;
		//tcpSocket->write(data.toLatin1());
	}
	return 0;
}
