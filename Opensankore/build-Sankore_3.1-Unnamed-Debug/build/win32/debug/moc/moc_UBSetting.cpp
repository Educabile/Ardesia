/****************************************************************************
** Meta object code from reading C++ file 'UBSetting.h'
**
** Created: Mon 20. Nov 11:16:09 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBSetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBSetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBSetting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   38,   10,   10, 0x0a,
      59,   38,   10,   10, 0x0a,
      78,   38,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBSetting[] = {
    "UBSetting\0\0newValue\0changed(QVariant)\0"
    "pValue\0setBool(bool)\0setString(QString)\0"
    "setInt(int)\0"
};

void UBSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBSetting *_t = static_cast<UBSetting *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->setBool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBSetting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBSetting::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBSetting,
      qt_meta_data_UBSetting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBSetting))
        return static_cast<void*>(const_cast< UBSetting*>(this));
    return QObject::qt_metacast(_clname);
}

int UBSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UBSetting::changed(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UBColorListSetting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UBColorListSetting[] = {
    "UBColorListSetting\0"
};

void UBColorListSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBColorListSetting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBColorListSetting::staticMetaObject = {
    { &UBSetting::staticMetaObject, qt_meta_stringdata_UBColorListSetting,
      qt_meta_data_UBColorListSetting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBColorListSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBColorListSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBColorListSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBColorListSetting))
        return static_cast<void*>(const_cast< UBColorListSetting*>(this));
    return UBSetting::qt_metacast(_clname);
}

int UBColorListSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBSetting::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
