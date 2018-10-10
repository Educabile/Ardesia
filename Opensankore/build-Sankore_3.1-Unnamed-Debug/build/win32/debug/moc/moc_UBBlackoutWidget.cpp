/****************************************************************************
** Meta object code from reading C++ file 'UBBlackoutWidget.h'
**
** Created: Mon 20. Nov 11:17:12 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBBlackoutWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBBlackoutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBBlackoutWidget[] = {

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
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBBlackoutWidget[] = {
    "UBBlackoutWidget\0\0activity()\0doActivity()\0"
};

void UBBlackoutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBBlackoutWidget *_t = static_cast<UBBlackoutWidget *>(_o);
        switch (_id) {
        case 0: _t->activity(); break;
        case 1: _t->doActivity(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBBlackoutWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBBlackoutWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBBlackoutWidget,
      qt_meta_data_UBBlackoutWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBBlackoutWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBBlackoutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBBlackoutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBBlackoutWidget))
        return static_cast<void*>(const_cast< UBBlackoutWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBBlackoutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBBlackoutWidget::activity()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
