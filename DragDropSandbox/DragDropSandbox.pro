TEMPLATE = app
TARGET = DragDropSandbox
QT += core \
    gui
HEADERS += PlayBackThread.h \
    aboutdialog.h \
    dragdropsandbox.h \
    logger.h
SOURCES += PlayBackThread.cpp \
    aboutdialog.cpp \
    main.cpp \
    dragdropsandbox.cpp
FORMS += aboutdialog.ui \
    dragdropsandbox.ui
RESOURCES += 
