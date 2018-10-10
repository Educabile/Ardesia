/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsCurtainItemDelegate.h'
**
** Created: Fri 4. May 12:32:59 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/tools/UBGraphicsCurtainItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsCurtainItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsCurtainItemDelegate[] = {

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
      47,   31,   30,   30, 0x0a,
      73,   65,   30,   30, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsCurtainItemDelegate[] = {
    "UBGraphicsCurtainItemDelegate\0\0"
    "checked,canUndo\0remove(bool,bool)\0"
    "checked\0remove(bool)\0"
};

void UBGraphicsCurtainItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsCurtainItemDelegate *_t = static_cast<UBGraphicsCurtainItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->remove((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsCurtainItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsCurtainItemDelegate::staticMetaObject = {
    { &UBGraphicsItemDelegate::staticMetaObject, qt_meta_stringdata_UBGraphicsCurtainItemDelegate,
      qt_meta_data_UBGraphicsCurtainItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsCurtainItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsCurtainItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsCurtainItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsCurtainItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsCurtainItemDelegate*>(this));
    return UBGraphicsItemDelegate::qt_metacast(_clname);
}

int UBGraphicsCurtainItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
