/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Tue Sep 13 23:46:06 2011
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
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutDialogClass
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *AboutDialogClass)
    {
        if (AboutDialogClass->objectName().isEmpty())
            AboutDialogClass->setObjectName(QString::fromUtf8("AboutDialogClass"));
        AboutDialogClass->resize(400, 214);
        textBrowser = new QTextBrowser(AboutDialogClass);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 381, 141));
        pushButton = new QPushButton(AboutDialogClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 170, 141, 24));

        retranslateUi(AboutDialogClass);
        QObject::connect(pushButton, SIGNAL(clicked()), AboutDialogClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AboutDialogClass)
    {
        AboutDialogClass->setWindowTitle(QApplication::translate("AboutDialogClass", "AboutDialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("AboutDialogClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">About Demo</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fo"
                        "nt-size:12pt;\">This is a demo written by Ben Bryan, for the purposes of exploring Qt4 drag and drop functionality</span><span style=\" font-size:12pt;\">, file </span><span style=\" font-size:12pt;\">I/O, and other things.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Hope you li</span><span style=\" font-size:12pt;\">ke it! :)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AboutDialogClass", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialogClass: public Ui_AboutDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
