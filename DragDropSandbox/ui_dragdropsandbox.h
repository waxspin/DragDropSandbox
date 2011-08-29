/********************************************************************************
** Form generated from reading UI file 'dragdropsandbox.ui'
**
** Created: Mon Aug 29 17:29:32 2011
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
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DragDropSandboxClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DragDropSandboxClass)
    {
        if (DragDropSandboxClass->objectName().isEmpty())
            DragDropSandboxClass->setObjectName(QString::fromUtf8("DragDropSandboxClass"));
        DragDropSandboxClass->resize(800, 600);
        centralwidget = new QWidget(DragDropSandboxClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DragDropSandboxClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DragDropSandboxClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        DragDropSandboxClass->setMenuBar(menubar);
        statusbar = new QStatusBar(DragDropSandboxClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DragDropSandboxClass->setStatusBar(statusbar);

        retranslateUi(DragDropSandboxClass);

        QMetaObject::connectSlotsByName(DragDropSandboxClass);
    } // setupUi

    void retranslateUi(QMainWindow *DragDropSandboxClass)
    {
        DragDropSandboxClass->setWindowTitle(QApplication::translate("DragDropSandboxClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DragDropSandboxClass: public Ui_DragDropSandboxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGDROPSANDBOX_H
