/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsGroupContainerItemDelegate.h'
**
** Created: Mon 20. Nov 11:16:40 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsGroupContainerItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsGroupContainerItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsGroupContainerItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      59,   37,   37,   37, 0x08,
      90,   83,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsGroupContainerItemDelegate[] = {
    "UBGraphicsGroupContainerItemDelegate\0"
    "\0onAddActionClicked()\0onRemoveActionClicked()\0"
    "action\0saveAction(UBGraphicsItemAction*)\0"
};

void UBGraphicsGroupContainerItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsGroupContainerItemDelegate *_t = static_cast<UBGraphicsGroupContainerItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->onAddActionClicked(); break;
        case 1: _t->onRemoveActionClicked(); break;
        case 2: _t->saveAction((*reinterpret_cast< UBGraphicsItemAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsGroupContainerItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsGroupContainerItemDelegate::staticMetaObject = {
    { &UBGraphicsItemDelegate::staticMetaObject, qt_meta_stringdata_UBGraphicsGroupContainerItemDelegate,
      qt_meta_data_UBGraphicsGroupContainerItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsGroupContainerItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsGroupContainerItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsGroupContainerItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsGroupContainerItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsGroupContainerItemDelegate*>(this));
    return UBGraphicsItemDelegate::qt_metacast(_clname);
}

int UBGraphicsGroupContainerItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
