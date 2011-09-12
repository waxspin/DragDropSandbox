#ifndef DRAGDROPSANDBOX_H
#define DRAGDROPSANDBOX_H

#include <QtGui/QMainWindow>
#include "ui_dragdropsandbox.h"
#include "aboutdialog.h"
#include "logger.h"
#include "basicconfigurator.h"

class DragDropSandbox : public QMainWindow
{
    Q_OBJECT

public:
    DragDropSandbox(QWidget *parent = 0);
    ~DragDropSandbox();

private:
    Ui::DragDropSandboxClass ui;
    QStringList mockData;
    void setupMockData();

private slots:
	void aboutClicked();
	void generateMockData();
};

#endif // DRAGDROPSANDBOX_H
