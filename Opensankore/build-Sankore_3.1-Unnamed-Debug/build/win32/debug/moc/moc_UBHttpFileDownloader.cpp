/****************************************************************************
** Meta object code from reading C++ file 'UBHttpFileDownloader.h'
**
** Created: Mon 20. Nov 11:17:59 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/network/UBHttpFileDownloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBHttpFileDownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBHttpFileDownloader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   45,   21,   21, 0x08,
     107,  102,   21,   21, 0x08,
     142,   21,   21,   21, 0x08,
     153,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBHttpFileDownloader[] = {
    "UBHttpFileDownloader\0\0success\0"
    "finished(bool)\0bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0code\0"
    "error(QNetworkReply::NetworkError)\0"
    "finished()\0readyRead()\0"
};

void UBHttpFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBHttpFileDownloader *_t = static_cast<UBHttpFileDownloader *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 3: _t->finished(); break;
        case 4: _t->readyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBHttpFileDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBHttpFileDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBHttpFileDownloader,
      qt_meta_data_UBHttpFileDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBHttpFileDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBHttpFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBHttpFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBHttpFileDownloader))
        return static_cast<void*>(const_cast< UBHttpFileDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int UBHttpFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UBHttpFileDownloader::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
