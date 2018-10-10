/****************************************************************************
** Meta object code from reading C++ file 'UBW3CWidgetAPI.h'
**
** Created: Fri 4. May 12:28:48 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/api/UBW3CWidgetAPI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBW3CWidgetAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBW3CWidgetAPI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      23,   15, 0x0a095001,
      26,   15, 0x0a095001,
      31,   15, 0x0a095001,
      43,   15, 0x0a095001,
      50,   15, 0x0a095001,
      62,   15, 0x0a095001,
      73,   15, 0x0a095001,
      85,   81, 0x02095001,
      91,   81, 0x02095001,
     107,   98, 0x88095001,
     119,   15, 0x0a095001,

       0        // eod
};

static const char qt_meta_stringdata_UBW3CWidgetAPI[] = {
    "UBW3CWidgetAPI\0QString\0id\0name\0"
    "description\0author\0authorEmail\0"
    "authorHref\0version\0int\0width\0height\0"
    "QObject*\0preferences\0uuid\0"
};

void UBW3CWidgetAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBW3CWidgetAPI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBW3CWidgetAPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBW3CWidgetAPI,
      qt_meta_data_UBW3CWidgetAPI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBW3CWidgetAPI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBW3CWidgetAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBW3CWidgetAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBW3CWidgetAPI))
        return static_cast<void*>(const_cast< UBW3CWidgetAPI*>(this));
    return QObject::qt_metacast(_clname);
}

int UBW3CWidgetAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = author(); break;
        case 4: *reinterpret_cast< QString*>(_v) = authorEmail(); break;
        case 5: *reinterpret_cast< QString*>(_v) = authorHref(); break;
        case 6: *reinterpret_cast< QString*>(_v) = version(); break;
        case 7: *reinterpret_cast< int*>(_v) = width(); break;
        case 8: *reinterpret_cast< int*>(_v) = height(); break;
        case 9: *reinterpret_cast< QObject**>(_v) = preferences(); break;
        case 10: *reinterpret_cast< QString*>(_v) = uuid(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_UBW3CWebStorage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   25,   17,   16, 0x0a,
      44,   40,   17,   16, 0x0a,
      71,   61,   16,   16, 0x0a,
      96,   40,   16,   16, 0x0a,
     116,   16,   16,   16, 0x0a,

 // properties: name, type, flags
     128,  124, 0x02095001,

       0        // eod
};

static const char qt_meta_stringdata_UBW3CWebStorage[] = {
    "UBW3CWebStorage\0\0QString\0index\0key(int)\0"
    "key\0getItem(QString)\0key,value\0"
    "setItem(QString,QString)\0removeItem(QString)\0"
    "clear()\0int\0length\0"
};

void UBW3CWebStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBW3CWebStorage *_t = static_cast<UBW3CWebStorage *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->key((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->getItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->setItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBW3CWebStorage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBW3CWebStorage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBW3CWebStorage,
      qt_meta_data_UBW3CWebStorage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBW3CWebStorage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBW3CWebStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBW3CWebStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBW3CWebStorage))
        return static_cast<void*>(const_cast< UBW3CWebStorage*>(this));
    return QObject::qt_metacast(_clname);
}

int UBW3CWebStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = length(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
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
static const uint qt_meta_data_UBW3CWidgetPreferenceAPI[] = {

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
      40,   34,   26,   25, 0x0a,
      53,   49,   26,   25, 0x0a,
      80,   70,   25,   25, 0x0a,
     105,   49,   25,   25, 0x0a,
     125,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBW3CWidgetPreferenceAPI[] = {
    "UBW3CWidgetPreferenceAPI\0\0QString\0"
    "index\0key(int)\0key\0getItem(QString)\0"
    "key,value\0setItem(QString,QString)\0"
    "removeItem(QString)\0clear()\0"
};

void UBW3CWidgetPreferenceAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBW3CWidgetPreferenceAPI *_t = static_cast<UBW3CWidgetPreferenceAPI *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->key((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->getItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->setItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->removeItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBW3CWidgetPreferenceAPI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBW3CWidgetPreferenceAPI::staticMetaObject = {
    { &UBW3CWebStorage::staticMetaObject, qt_meta_stringdata_UBW3CWidgetPreferenceAPI,
      qt_meta_data_UBW3CWidgetPreferenceAPI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBW3CWidgetPreferenceAPI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBW3CWidgetPreferenceAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBW3CWidgetPreferenceAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBW3CWidgetPreferenceAPI))
        return static_cast<void*>(const_cast< UBW3CWidgetPreferenceAPI*>(this));
    return UBW3CWebStorage::qt_metacast(_clname);
}

int UBW3CWidgetPreferenceAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBW3CWebStorage::qt_metacall(_c, _id, _a);
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
