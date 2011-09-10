/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Sat Sep 10 18:15:48 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AboutDialogClass
{
public:

    void setupUi(QDialog *AboutDialogClass)
    {
        if (AboutDialogClass->objectName().isEmpty())
            AboutDialogClass->setObjectName(QString::fromUtf8("AboutDialogClass"));
        AboutDialogClass->resize(400, 300);

        retranslateUi(AboutDialogClass);

        QMetaObject::connectSlotsByName(AboutDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AboutDialogClass)
    {
        AboutDialogClass->setWindowTitle(QApplication::translate("AboutDialogClass", "AboutDialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialogClass: public Ui_AboutDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
