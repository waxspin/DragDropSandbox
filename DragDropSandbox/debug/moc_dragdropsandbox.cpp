/****************************************************************************
** Meta object code from reading C++ file 'dragdropsandbox.h'
**
** Created: Mon Sep 19 15:51:47 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dragdropsandbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragdropsandbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DragDropSandbox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      43,   38,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   16,   16,   16, 0x08,
      93,   16,   16,   16, 0x08,
     112,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DragDropSandbox[] = {
    "DragDropSandbox\0\0stopPlaybackThread()\0"
    "path\0dispatchByteArrayFromFile(QString)\0"
    "aboutClicked()\0generateMockData()\0"
    "openFile()\0"
};

const QMetaObject DragDropSandbox::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DragDropSandbox,
      qt_meta_data_DragDropSandbox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DragDropSandbox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DragDropSandbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DragDropSandbox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DragDropSandbox))
        return static_cast<void*>(const_cast< DragDropSandbox*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DragDropSandbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stopPlaybackThread(); break;
        case 1: dispatchByteArrayFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: aboutClicked(); break;
        case 3: generateMockData(); break;
        case 4: openFile(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DragDropSandbox::stopPlaybackThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DragDropSandbox::dispatchByteArrayFromFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
