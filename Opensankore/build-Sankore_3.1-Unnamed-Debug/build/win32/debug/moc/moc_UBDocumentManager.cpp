/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentManager.h'
**
** Created: Mon 20. Nov 11:16:18 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBDocumentManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDocumentManager[] = {

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
      29,   19,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentManager[] = {
    "UBDocumentManager\0\0pDocument\0"
    "documentUpdated(UBDocumentProxy*)\0"
};

void UBDocumentManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentManager *_t = static_cast<UBDocumentManager *>(_o);
        switch (_id) {
        case 0: _t->documentUpdated((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDocumentManager,
      qt_meta_data_UBDocumentManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentManager))
        return static_cast<void*>(const_cast< UBDocumentManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDocumentManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBDocumentManager::documentUpdated(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE