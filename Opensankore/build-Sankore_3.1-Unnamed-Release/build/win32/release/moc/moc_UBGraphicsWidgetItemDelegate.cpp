/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsWidgetItemDelegate.h'
**
** Created: Fri 4. May 12:30:03 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsWidgetItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsWidgetItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsWidgetItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   30,   29,   29, 0x08,
      51,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsWidgetItemDelegate[] = {
    "UBGraphicsWidgetItemDelegate\0\0frozeon\0"
    "freeze(bool)\0pin()\0"
};

void UBGraphicsWidgetItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsWidgetItemDelegate *_t = static_cast<UBGraphicsWidgetItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->freeze((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pin(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsWidgetItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsWidgetItemDelegate::staticMetaObject = {
    { &UBGraphicsItemDelegate::staticMetaObject, qt_meta_stringdata_UBGraphicsWidgetItemDelegate,
      qt_meta_data_UBGraphicsWidgetItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsWidgetItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsWidgetItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsWidgetItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsWidgetItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsWidgetItemDelegate*>(this));
    return UBGraphicsItemDelegate::qt_metacast(_clname);
}

int UBGraphicsWidgetItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
