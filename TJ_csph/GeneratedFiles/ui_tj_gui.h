/********************************************************************************
** Form generated from reading UI file 'tj_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TJ_GUI_H
#define UI_TJ_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TJ_GUI
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *TJ_GUI)
    {
        if (TJ_GUI->objectName().isEmpty())
            TJ_GUI->setObjectName(QStringLiteral("TJ_GUI"));
        TJ_GUI->resize(669, 520);
        gridLayoutWidget = new QWidget(TJ_GUI);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 20, 621, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(TJ_GUI);

        QMetaObject::connectSlotsByName(TJ_GUI);
    } // setupUi

    void retranslateUi(QWidget *TJ_GUI)
    {
        TJ_GUI->setWindowTitle(QApplication::translate("TJ_GUI", "TJ_GUI", nullptr));
        pushButton->setText(QApplication::translate("TJ_GUI", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TJ_GUI: public Ui_TJ_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TJ_GUI_H
