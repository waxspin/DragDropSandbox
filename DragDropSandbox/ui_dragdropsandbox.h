/********************************************************************************
** Form generated from reading UI file 'dragdropsandbox.ui'
**
** Created: Tue Sep 13 22:40:05 2011
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DragDropSandboxClass
{
public:
    QAction *actionGenDropContent;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionOpen_File;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidgetDrop;
    QMenuBar *menubar;
    QMenu *menuDrag_n_Drop_Sandbox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DragDropSandboxClass)
    {
        if (DragDropSandboxClass->objectName().isEmpty())
            DragDropSandboxClass->setObjectName(QString::fromUtf8("DragDropSandboxClass"));
        DragDropSandboxClass->resize(800, 600);
        actionGenDropContent = new QAction(DragDropSandboxClass);
        actionGenDropContent->setObjectName(QString::fromUtf8("actionGenDropContent"));
        actionExit = new QAction(DragDropSandboxClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(DragDropSandboxClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpen_File = new QAction(DragDropSandboxClass);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        centralwidget = new QWidget(DragDropSandboxClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 751, 271));
        listWidget->setDragEnabled(true);
        listWidget->setDragDropMode(QAbstractItemView::DragOnly);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 320, 751, 231));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listWidgetDrop = new QListWidget(horizontalLayoutWidget);
        listWidgetDrop->setObjectName(QString::fromUtf8("listWidgetDrop"));
        listWidgetDrop->setDragEnabled(true);
        listWidgetDrop->setDragDropMode(QAbstractItemView::DropOnly);

        horizontalLayout->addWidget(listWidgetDrop);

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
        menuDrag_n_Drop_Sandbox->addAction(actionOpen_File);
        menuDrag_n_Drop_Sandbox->addAction(actionGenDropContent);
        menuDrag_n_Drop_Sandbox->addAction(actionExit);
        menuDrag_n_Drop_Sandbox->addSeparator();
        menuDrag_n_Drop_Sandbox->addAction(actionAbout);

        retranslateUi(DragDropSandboxClass);
        QObject::connect(actionExit, SIGNAL(triggered()), DragDropSandboxClass, SLOT(close()));

        QMetaObject::connectSlotsByName(DragDropSandboxClass);
    } // setupUi

    void retranslateUi(QMainWindow *DragDropSandboxClass)
    {
        DragDropSandboxClass->setWindowTitle(QApplication::translate("DragDropSandboxClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionGenDropContent->setText(QApplication::translate("DragDropSandboxClass", "Generate Drop Content", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("DragDropSandboxClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("DragDropSandboxClass", "About", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("DragDropSandboxClass", "Open File", 0, QApplication::UnicodeUTF8));
        menuDrag_n_Drop_Sandbox->setTitle(QApplication::translate("DragDropSandboxClass", "Drag n Drop Sandbox", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DragDropSandboxClass: public Ui_DragDropSandboxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGDROPSANDBOX_H
