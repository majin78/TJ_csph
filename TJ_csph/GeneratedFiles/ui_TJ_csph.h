/********************************************************************************
** Form generated from reading UI file 'TJ_csph.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TJ_CSPH_H
#define UI_TJ_CSPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TJ_csphClass
{
public:
    QAction *actioninput;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TJ_csphClass)
    {
        if (TJ_csphClass->objectName().isEmpty())
            TJ_csphClass->setObjectName(QStringLiteral("TJ_csphClass"));
        TJ_csphClass->resize(642, 429);
        actioninput = new QAction(TJ_csphClass);
        actioninput->setObjectName(QStringLiteral("actioninput"));
        centralWidget = new QWidget(TJ_csphClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 300, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(141, 301, 75, 23));
        TJ_csphClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TJ_csphClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 642, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        TJ_csphClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TJ_csphClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TJ_csphClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TJ_csphClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TJ_csphClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actioninput);

        retranslateUi(TJ_csphClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), TJ_csphClass, SLOT(on_refleshslot()));
        QObject::connect(pushButton, SIGNAL(clicked()), TJ_csphClass, SLOT(on_exitslot()));

        QMetaObject::connectSlotsByName(TJ_csphClass);
    } // setupUi

    void retranslateUi(QMainWindow *TJ_csphClass)
    {
        TJ_csphClass->setWindowTitle(QApplication::translate("TJ_csphClass", "TJ_csph", nullptr));
        actioninput->setText(QApplication::translate("TJ_csphClass", "input", nullptr));
        pushButton->setText(QApplication::translate("TJ_csphClass", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QApplication::translate("TJ_csphClass", "\345\210\267\346\226\260", nullptr));
        menu->setTitle(QApplication::translate("TJ_csphClass", "\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TJ_csphClass: public Ui_TJ_csphClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TJ_CSPH_H
