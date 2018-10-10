/****************************************************************************
** Meta object code from reading C++ file 'UBDownloadManager.h'
**
** Created: Mon 20. Nov 11:16:21 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBDownloadManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDownloadHttpFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   20,   19,   19, 0x05,
     155,   73,   19,   19, 0x05,
     233,  230,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     320,  252,   19,   19, 0x08,
     413,  388,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDownloadHttpFile[] = {
    "UBDownloadHttpFile\0\0id,current,total\0"
    "downloadProgress(int,qint64,qint64)\0"
    "id,pSuccess,sourceUrl,contentUrl,pContentTypeHeader,pData,pPos,pSize,i"
    "sBackground\0"
    "downloadFinished(int,bool,QUrl,QUrl,QString,QByteArray,QPointF,QSize,b"
    "ool)\0"
    "id\0downloadError(int)\0"
    "pSuccess,sourceUrl,pContentTypeHeader,pData,pPos,pSize,isBackground\0"
    "onDownloadFinished(bool,QUrl,QString,QByteArray,QPointF,QSize,bool)\0"
    "bytesReceived,bytesTotal\0"
    "onDownloadProgress(qint64,qint64)\0"
};

void UBDownloadHttpFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDownloadHttpFile *_t = static_cast<UBDownloadHttpFile *>(_o);
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: _t->downloadFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 2: _t->downloadError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onDownloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< QSize(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 4: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDownloadHttpFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDownloadHttpFile::staticMetaObject = {
    { &UBHttpGet::staticMetaObject, qt_meta_stringdata_UBDownloadHttpFile,
      qt_meta_data_UBDownloadHttpFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDownloadHttpFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDownloadHttpFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDownloadHttpFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDownloadHttpFile))
        return static_cast<void*>(const_cast< UBDownloadHttpFile*>(this));
    return UBHttpGet::qt_metacast(_clname);
}

int UBDownloadHttpFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBHttpGet::qt_metacall(_c, _id, _a);
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
void UBDownloadHttpFile::downloadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDownloadHttpFile::downloadFinished(int _t1, bool _t2, QUrl _t3, QUrl _t4, QString _t5, QByteArray _t6, QPointF _t7, QSize _t8, bool _t9)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBDownloadHttpFile::downloadError(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_UBAsyncLocalFileDownloader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   28,   27,   27, 0x05,
     150,   68,   27,   27, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBAsyncLocalFileDownloader[] = {
    "UBAsyncLocalFileDownloader\0\0srcUrl,resUrl\0"
    "finished(QString,QString)\0"
    "id,pSuccess,sourceUrl,contentUrl,pContentTypeHeader,pData,pPos,pSize,i"
    "sBackground\0"
    "signal_asyncCopyFinished(int,bool,QUrl,QUrl,QString,QByteArray,QPointF"
    ",QSize,bool)\0"
};

void UBAsyncLocalFileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBAsyncLocalFileDownloader *_t = static_cast<UBAsyncLocalFileDownloader *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signal_asyncCopyFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBAsyncLocalFileDownloader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBAsyncLocalFileDownloader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UBAsyncLocalFileDownloader,
      qt_meta_data_UBAsyncLocalFileDownloader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBAsyncLocalFileDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBAsyncLocalFileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBAsyncLocalFileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBAsyncLocalFileDownloader))
        return static_cast<void*>(const_cast< UBAsyncLocalFileDownloader*>(this));
    return QThread::qt_metacast(_clname);
}

int UBAsyncLocalFileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UBAsyncLocalFileDownloader::finished(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBAsyncLocalFileDownloader::signal_asyncCopyFinished(int _t1, bool _t2, QUrl _t3, QUrl _t4, QString _t5, QByteArray _t6, QPointF _t7, QSize _t8, bool _t9)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_UBDownloadManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      55,   41,   18,   18, 0x05,
      93,   90,   18,   18, 0x05,
     162,  115,   18,   18, 0x05,
     233,  213,   18,   18, 0x05,
     285,   18,   18,   18, 0x05,
     404,  309,   18,   18, 0x05,
     539,  488,   18,   18, 0x05,
     604,   18,   18,   18, 0x05,
     625,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     648,   18,   18,   18, 0x08,
     690,  672,   18,   18, 0x08,
     810,  728,   18,   18, 0x08,
     887,   90,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDownloadManager[] = {
    "UBDownloadManager\0\0fileAddedToDownload()\0"
    "id,crnt,total\0downloadUpdated(int,qint64,qint64)\0"
    "id\0downloadFinished(int)\0"
    "pSuccess,id,sourceUrl,pContentTypeHeader,pData\0"
    "downloadFinished(bool,int,QUrl,QString,QByteArray)\0"
    "pSuccess,desc,pData\0"
    "downloadFinished(bool,sDownloadFileDesc,QByteArray)\0"
    "downloadModalFinished()\0"
    "pSuccess,sourceUrl,contentUrl,pContentTypeHeader,pData,pPos,pSize,isSy"
    "ncOperation,isBackground\0"
    "addDownloadedFileToBoard(bool,QUrl,QUrl,QString,QByteArray,QPointF,QSi"
    "ze,bool,bool)\0"
    "pSuccess,sourceUrl,pContentTypeHeader,pData,pTitle\0"
    "addDownloadedFileToLibrary(bool,QUrl,QString,QByteArray,QString)\0"
    "cancelAllDownloads()\0allDownloadsFinished()\0"
    "onUpdateDownloadLists()\0id,received,total\0"
    "onDownloadProgress(int,qint64,qint64)\0"
    "id,pSuccess,sourceUrl,contentUrl,pContentTypeHeader,pData,pPos,pSize,i"
    "sBackground\0"
    "onDownloadFinished(int,bool,QUrl,QUrl,QString,QByteArray,QPointF,QSize"
    ",bool)\0"
    "onDownloadError(int)\0"
};

void UBDownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDownloadManager *_t = static_cast<UBDownloadManager *>(_o);
        switch (_id) {
        case 0: _t->fileAddedToDownload(); break;
        case 1: _t->downloadUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->downloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 4: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< sDownloadFileDesc(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->downloadModalFinished(); break;
        case 6: _t->addDownloadedFileToBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5])),(*reinterpret_cast< QPointF(*)>(_a[6])),(*reinterpret_cast< QSize(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 7: _t->addDownloadedFileToLibrary((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 8: _t->cancelAllDownloads(); break;
        case 9: _t->allDownloadsFinished(); break;
        case 10: _t->onUpdateDownloadLists(); break;
        case 11: _t->onDownloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 12: _t->onDownloadFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 13: _t->onDownloadError((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDownloadManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDownloadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDownloadManager,
      qt_meta_data_UBDownloadManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDownloadManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDownloadManager))
        return static_cast<void*>(const_cast< UBDownloadManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void UBDownloadManager::fileAddedToDownload()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBDownloadManager::downloadUpdated(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBDownloadManager::downloadFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBDownloadManager::downloadFinished(bool _t1, int _t2, QUrl _t3, QString _t4, QByteArray _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UBDownloadManager::downloadFinished(bool _t1, sDownloadFileDesc _t2, QByteArray _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBDownloadManager::downloadModalFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UBDownloadManager::addDownloadedFileToBoard(bool _t1, QUrl _t2, QUrl _t3, QString _t4, QByteArray _t5, QPointF _t6, QSize _t7, bool _t8, bool _t9)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UBDownloadManager::addDownloadedFileToLibrary(bool _t1, QUrl _t2, QString _t3, QByteArray _t4, QString _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UBDownloadManager::cancelAllDownloads()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void UBDownloadManager::allDownloadsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
