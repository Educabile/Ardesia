/****************************************************************************
** Meta object code from reading C++ file 'UBActionableWidget.h'
**
** Created: Mon 20. Nov 11:20:02 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/customWidgets/UBActionableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBActionableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBActionableWidget[] = {

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
      22,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBActionableWidget[] = {
    "UBActionableWidget\0\0w\0close(QWidget*)\0"
    "onCloseClicked()\0"
};

void UBActionableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBActionableWidget *_t = static_cast<UBActionableWidget *>(_o);
        switch (_id) {
        case 0: _t->close((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->onCloseClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBActionableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBActionableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBActionableWidget,
      qt_meta_data_UBActionableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBActionableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBActionableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBActionableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBActionableWidget))
        return static_cast<void*>(const_cast< UBActionableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBActionableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBActionableWidget::close(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE