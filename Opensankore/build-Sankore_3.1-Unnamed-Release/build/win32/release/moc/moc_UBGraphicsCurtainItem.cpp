/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsCurtainItem.h'
**
** Created: Fri 4. May 12:32:57 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/tools/UBGraphicsCurtainItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsCurtainItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsCurtainItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsCurtainItem[] = {
    "UBGraphicsCurtainItem\0\0removed()\0"
};

void UBGraphicsCurtainItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsCurtainItem *_t = static_cast<UBGraphicsCurtainItem *>(_o);
        switch (_id) {
        case 0: _t->removed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBGraphicsCurtainItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsCurtainItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBGraphicsCurtainItem,
      qt_meta_data_UBGraphicsCurtainItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsCurtainItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsCurtainItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsCurtainItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsCurtainItem))
        return static_cast<void*>(const_cast< UBGraphicsCurtainItem*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< UBGraphicsCurtainItem*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsCurtainItem*>(this));
    if (!strcmp(_clname, "UBGraphicsItem"))
        return static_cast< UBGraphicsItem*>(const_cast< UBGraphicsCurtainItem*>(this));
    return QObject::qt_metacast(_clname);
}

int UBGraphicsCurtainItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UBGraphicsCurtainItem::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
