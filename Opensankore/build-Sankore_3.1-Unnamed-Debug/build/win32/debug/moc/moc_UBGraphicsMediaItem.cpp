/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsMediaItem.h'
**
** Created: Mon 20. Nov 11:16:38 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsMediaItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsMediaItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsMediaItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      40,   34,   20,   20, 0x0a,
      54,   20,   20,   20, 0x0a,
      84,   75,   20,   20, 0x0a,
     112,  106,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsMediaItem[] = {
    "UBGraphicsMediaItem\0\0toggleMute()\0"
    "bMute\0setMute(bool)\0activeSceneChanged()\0"
    "hasMedia\0hasMediaChanged(bool)\0shown\0"
    "showOnDisplayChanged(bool)\0"
};

void UBGraphicsMediaItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsMediaItem *_t = static_cast<UBGraphicsMediaItem *>(_o);
        switch (_id) {
        case 0: _t->toggleMute(); break;
        case 1: _t->setMute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->activeSceneChanged(); break;
        case 3: _t->hasMediaChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showOnDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsMediaItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsMediaItem::staticMetaObject = {
    { &UBAbstractGraphicsProxyWidget::staticMetaObject, qt_meta_stringdata_UBGraphicsMediaItem,
      qt_meta_data_UBGraphicsMediaItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsMediaItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsMediaItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsMediaItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsMediaItem))
        return static_cast<void*>(const_cast< UBGraphicsMediaItem*>(this));
    return UBAbstractGraphicsProxyWidget::qt_metacast(_clname);
}

int UBGraphicsMediaItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractGraphicsProxyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
