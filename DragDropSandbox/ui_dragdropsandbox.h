/********************************************************************************
** Form generated from reading UI file 'dragdropsandbox.ui'
**
** Created: Mon Aug 29 22:46:11 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAGDROPSANDBOX_H
#define UI_DRAGDROPSANDBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DragDropSandboxClass
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionAbout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuDrag_n_Drop_Sandbox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DragDropSandboxClass)
    {
        if (DragDropSandboxClass->objectName().isEmpty())
            DragDropSandboxClass->setObjectName(QString::fromUtf8("DragDropSandboxClass"));
        DragDropSandboxClass->resize(800, 600);
        actionExit = new QAction(DragDropSandboxClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit_2 = new QAction(DragDropSandboxClass);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        actionAbout = new QAction(DragDropSandboxClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(DragDropSandboxClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DragDropSandboxClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DragDropSandboxClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuDrag_n_Drop_Sandbox = new QMenu(menubar);
        menuDrag_n_Drop_Sandbox->setObjectName(QString::fromUtf8("menuDrag_n_Drop_Sandbox"));
        DragDropSandboxClass->setMenuBar(menubar);
        statusbar = new QStatusBar(DragDropSandboxClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DragDropSandboxClass->setStatusBar(statusbar);

        menubar->addAction(menuDrag_n_Drop_Sandbox->menuAction());
        menuDrag_n_Drop_Sandbox->addAction(actionExit);
        menuDrag_n_Drop_Sandbox->addAction(actionExit_2);
        menuDrag_n_Drop_Sandbox->addSeparator();
        menuDrag_n_Drop_Sandbox->addAction(actionAbout);

        retranslateUi(DragDropSandboxClass);

        QMetaObject::connectSlotsByName(DragDropSandboxClass);
    } // setupUi

    void retranslateUi(QMainWindow *DragDropSandboxClass)
    {
        DragDropSandboxClass->setWindowTitle(QApplication::translate("DragDropSandboxClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("DragDropSandboxClass", "Generate Drop Content", 0, QApplication::UnicodeUTF8));
        actionExit_2->setText(QApplication::translate("DragDropSandboxClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("DragDropSandboxClass", "About", 0, QApplication::UnicodeUTF8));
        menuDrag_n_Drop_Sandbox->setTitle(QApplication::translate("DragDropSandboxClass", "Drag n Drop Sandbox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DragDropSandboxClass: public Ui_DragDropSandboxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGDROPSANDBOX_H
