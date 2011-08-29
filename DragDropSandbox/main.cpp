#include "dragdropsandbox.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DragDropSandbox w;
    w.show();
    return a.exec();
}
