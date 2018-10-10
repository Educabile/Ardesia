/****************************************************************************
** Meta object code from reading C++ file 'UBCookieJar.h'
**
** Created: Fri 4. May 12:32:18 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/network/UBCookieJar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBCookieJar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBCookieJar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   34, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   12,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,
      53,   12,   12,   12, 0x08,

 // properties: name, type, flags
      73,   60, 0x0009510b,
      97,   86, 0x0009510b,
     120,  108, 0x0b095103,
     135,  108, 0x0b095103,
     150,  108, 0x0b095103,

 // enums: name, flags, count, data
      60, 0x0,    3,   57,
      86, 0x0,    3,   63,

 // enum data: key, value
     173, uint(UBCookieJar::AcceptAlways),
     186, uint(UBCookieJar::AcceptNever),
     198, uint(UBCookieJar::AcceptOnlyFromSitesNavigatedTo),
     229, uint(UBCookieJar::KeepUntilExpire),
     245, uint(UBCookieJar::KeepUntilExit),
     259, uint(UBCookieJar::KeepUntilTimeLimit),

       0        // eod
};

static const char qt_meta_stringdata_UBCookieJar[] = {
    "UBCookieJar\0\0cookiesChanged()\0clear()\0"
    "loadSettings()\0save()\0AcceptPolicy\0"
    "acceptPolicy\0KeepPolicy\0keepPolicy\0"
    "QStringList\0blockedCookies\0allowedCookies\0"
    "allowForSessionCookies\0AcceptAlways\0"
    "AcceptNever\0AcceptOnlyFromSitesNavigatedTo\0"
    "KeepUntilExpire\0KeepUntilExit\0"
    "KeepUntilTimeLimit\0"
};

void UBCookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBCookieJar *_t = static_cast<UBCookieJar *>(_o);
        switch (_id) {
        case 0: _t->cookiesChanged(); break;
        case 1: _t->clear(); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->save(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBCookieJar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCookieJar::staticMetaObject = {
    { &QNetworkCookieJar::staticMetaObject, qt_meta_stringdata_UBCookieJar,
      qt_meta_data_UBCookieJar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCookieJar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCookieJar))
        return static_cast<void*>(const_cast< UBCookieJar*>(this));
    return QNetworkCookieJar::qt_metacast(_clname);
}

int UBCookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AcceptPolicy*>(_v) = acceptPolicy(); break;
        case 1: *reinterpret_cast< KeepPolicy*>(_v) = keepPolicy(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = blockedCookies(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = allowedCookies(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = allowForSessionCookies(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAcceptPolicy(*reinterpret_cast< AcceptPolicy*>(_v)); break;
        case 1: setKeepPolicy(*reinterpret_cast< KeepPolicy*>(_v)); break;
        case 2: setBlockedCookies(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: setAllowedCookies(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: setAllowForSessionCookies(*reinterpret_cast< QStringList*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UBCookieJar::cookiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
