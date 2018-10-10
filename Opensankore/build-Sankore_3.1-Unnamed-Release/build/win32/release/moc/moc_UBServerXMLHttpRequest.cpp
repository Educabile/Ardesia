/****************************************************************************
** Meta object code from reading C++ file 'UBServerXMLHttpRequest.h'
**
** Created: Fri 4. May 12:32:15 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/network/UBServerXMLHttpRequest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBServerXMLHttpRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBServerXMLHttpRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x05,
      73,   52,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,   97,   23,   23, 0x08,
     159,  154,   23,   23, 0x08,
     194,   23,   23,   23, 0x08,
     205,   52,   23,   23, 0x08,
     235,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBServerXMLHttpRequest[] = {
    "UBServerXMLHttpRequest\0\0,\0"
    "finished(bool,QByteArray)\0"
    "bytesSent,bytesTotal\0progress(qint64,qint64)\0"
    "bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0code\0"
    "error(QNetworkReply::NetworkError)\0"
    "finished()\0uploadProgress(qint64,qint64)\0"
    "readyRead()\0"
};

void UBServerXMLHttpRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBServerXMLHttpRequest *_t = static_cast<UBServerXMLHttpRequest *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->finished(); break;
        case 5: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->readyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBServerXMLHttpRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBServerXMLHttpRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBServerXMLHttpRequest,
      qt_meta_data_UBServerXMLHttpRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBServerXMLHttpRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBServerXMLHttpRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBServerXMLHttpRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBServerXMLHttpRequest))
        return static_cast<void*>(const_cast< UBServerXMLHttpRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int UBServerXMLHttpRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBServerXMLHttpRequest::finished(bool _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBServerXMLHttpRequest::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
