/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsPixmapItem.h'
**
** Created: Mon 20. Nov 11:16:33 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsPixmapItem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsPixmapItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsPixmapItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      27,   21, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsPixmapItem[] = {
    "UBGraphicsPixmapItem\0qreal\0opacity\0"
};

void UBGraphicsPixmapItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBGraphicsPixmapItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsPixmapItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBGraphicsPixmapItem,
      qt_meta_data_UBGraphicsPixmapItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsPixmapItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsPixmapItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsPixmapItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsPixmapItem))
        return static_cast<void*>(const_cast< UBGraphicsPixmapItem*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< UBGraphicsPixmapItem*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsPixmapItem*>(this));
    if (!strcmp(_clname, "UBGraphicsItem"))
        return static_cast< UBGraphicsItem*>(const_cast< UBGraphicsPixmapItem*>(this));
    return QObject::qt_metacast(_clname);
}

int UBGraphicsPixmapItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = opacity(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
