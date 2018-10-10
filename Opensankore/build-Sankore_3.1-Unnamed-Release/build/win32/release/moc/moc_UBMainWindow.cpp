/****************************************************************************
** Meta object code from reading C++ file 'UBMainWindow.h'
**
** Created: Fri 4. May 12:30:48 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBMainWindow[] = {
    "UBMainWindow\0\0event\0closeEvent_Signal(QCloseEvent*)\0"
    "onExportDone()\0"
};

void UBMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBMainWindow *_t = static_cast<UBMainWindow *>(_o);
        switch (_id) {
        case 0: _t->closeEvent_Signal((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 1: _t->onExportDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UBMainWindow,
      qt_meta_data_UBMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBMainWindow))
        return static_cast<void*>(const_cast< UBMainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< UBMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UBMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UBMainWindow::closeEvent_Signal(QCloseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
