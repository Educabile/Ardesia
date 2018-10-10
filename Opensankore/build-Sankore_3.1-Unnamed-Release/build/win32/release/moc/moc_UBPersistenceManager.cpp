/****************************************************************************
** Meta object code from reading C++ file 'UBPersistenceManager.h'
**
** Created: Fri 4. May 12:29:15 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBPersistenceManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBPersistenceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBPersistenceManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      56,   41,   21,   21, 0x05,
      90,   41,   21,   21, 0x05,
     132,   41,   21,   21, 0x05,
     194,  172,   21,   21, 0x05,
     237,  172,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     291,  286,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBPersistenceManager[] = {
    "UBPersistenceManager\0\0proxyListChanged()\0"
    "pDocumentProxy\0documentCreated(UBDocumentProxy*)\0"
    "documentMetadataChanged(UBDocumentProxy*)\0"
    "documentWillBeDeleted(UBDocumentProxy*)\0"
    "pDocumentProxy,pIndex\0"
    "documentSceneCreated(UBDocumentProxy*,int)\0"
    "documentSceneWillBeDeleted(UBDocumentProxy*,int)\0"
    "path\0documentRepositoryChanged(QString)\0"
};

void UBPersistenceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPersistenceManager *_t = static_cast<UBPersistenceManager *>(_o);
        switch (_id) {
        case 0: _t->proxyListChanged(); break;
        case 1: _t->documentCreated((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 2: _t->documentMetadataChanged((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 3: _t->documentWillBeDeleted((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 4: _t->documentSceneCreated((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->documentSceneWillBeDeleted((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->documentRepositoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBPersistenceManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPersistenceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBPersistenceManager,
      qt_meta_data_UBPersistenceManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPersistenceManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPersistenceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPersistenceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPersistenceManager))
        return static_cast<void*>(const_cast< UBPersistenceManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UBPersistenceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UBPersistenceManager::proxyListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBPersistenceManager::documentCreated(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBPersistenceManager::documentMetadataChanged(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBPersistenceManager::documentWillBeDeleted(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UBPersistenceManager::documentSceneCreated(UBDocumentProxy * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBPersistenceManager::documentSceneWillBeDeleted(UBDocumentProxy * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
