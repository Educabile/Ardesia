/****************************************************************************
** Meta object code from reading C++ file 'UBDisplayManager.h'
**
** Created: Mon 20. Nov 11:16:17 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBDisplayManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDisplayManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDisplayManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   40,   17,   17, 0x0a,
      73,   66,   17,   17, 0x0a,
      92,   17,   17,   17, 0x0a,
     103,   17,   17,   17, 0x0a,
     133,  116,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDisplayManager[] = {
    "UBDisplayManager\0\0screenLayoutChanged()\0"
    "bswap\0reinitScreens(bool)\0screen\0"
    "adjustScreens(int)\0blackout()\0"
    "unBlackout()\0role,screenIndex\0"
    "setRoleToScreen(DisplayRole,int)\0"
};

void UBDisplayManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDisplayManager *_t = static_cast<UBDisplayManager *>(_o);
        switch (_id) {
        case 0: _t->screenLayoutChanged(); break;
        case 1: _t->reinitScreens((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->adjustScreens((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->blackout(); break;
        case 4: _t->unBlackout(); break;
        case 5: _t->setRoleToScreen((*reinterpret_cast< DisplayRole(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDisplayManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDisplayManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDisplayManager,
      qt_meta_data_UBDisplayManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDisplayManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDisplayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDisplayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDisplayManager))
        return static_cast<void*>(const_cast< UBDisplayManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDisplayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UBDisplayManager::screenLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
