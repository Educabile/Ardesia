/****************************************************************************
** Meta object code from reading C++ file 'UBDownloadThread.h'
**
** Created: Mon 20. Nov 11:16:21 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBDownloadThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDownloadThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDownloadThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   18,   17,   17, 0x05,
      59,   42,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   95,   17,   17, 0x08,
     144,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDownloadThread[] = {
    "UBDownloadThread\0\0id\0downloadFinised(int)\0"
    "id,current,total\0downloadProgress(int,qint64,qint64)\0"
    "received,total\0onDownloadProgress(qint64,qint64)\0"
    "onDownloadFinished()\0"
};

void UBDownloadThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDownloadThread *_t = static_cast<UBDownloadThread *>(_o);
        switch (_id) {
        case 0: _t->downloadFinised((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->onDownloadFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDownloadThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDownloadThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UBDownloadThread,
      qt_meta_data_UBDownloadThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDownloadThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDownloadThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDownloadThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDownloadThread))
        return static_cast<void*>(const_cast< UBDownloadThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UBDownloadThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void UBDownloadThread::downloadFinised(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDownloadThread::downloadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
