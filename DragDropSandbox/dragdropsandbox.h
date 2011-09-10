#ifndef DRAGDROPSANDBOX_H
#define DRAGDROPSANDBOX_H

#include <QtGui/QMainWindow>
#include "ui_dragdropsandbox.h"
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

private slots:
	void aboutClicked();
};

#endif // DRAGDROPSANDBOX_H
