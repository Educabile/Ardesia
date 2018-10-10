/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentContainer.h'
**
** Created: Fri 4. May 12:29:32 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/document/UBDocumentContainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDocumentContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x05,
      66,   60,   20,   20, 0x05,
      98,   91,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentContainer[] = {
    "UBDocumentContainer\0\0document\0"
    "documentSet(UBDocumentProxy*)\0index\0"
    "documentPageUpdated(int)\0source\0"
    "documentThumbnailsUpdated(UBDocumentContainer*)\0"
};

void UBDocumentContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentContainer *_t = static_cast<UBDocumentContainer *>(_o);
        switch (_id) {
        case 0: _t->documentSet((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 1: _t->documentPageUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->documentThumbnailsUpdated((*reinterpret_cast< UBDocumentContainer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentContainer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDocumentContainer,
      qt_meta_data_UBDocumentContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentContainer))
        return static_cast<void*>(const_cast< UBDocumentContainer*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDocumentContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UBDocumentContainer::documentSet(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDocumentContainer::documentPageUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBDocumentContainer::documentThumbnailsUpdated(UBDocumentContainer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
