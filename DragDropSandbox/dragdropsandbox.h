#ifndef DRAGDROPSANDBOX_H
#define DRAGDROPSANDBOX_H

#include <QtGui/QMainWindow>
#include "ui_dragdropsandbox.h"

class DragDropSandbox : public QMainWindow
{
    Q_OBJECT

public:
    DragDropSandbox(QWidget *parent = 0);
    ~DragDropSandbox();

private:
    Ui::DragDropSandboxClass ui;
};

#endif // DRAGDROPSANDBOX_H
