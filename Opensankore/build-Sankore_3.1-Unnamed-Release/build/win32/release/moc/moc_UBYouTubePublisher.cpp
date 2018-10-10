/****************************************************************************
** Meta object code from reading C++ file 'UBYouTubePublisher.h'
**
** Created: Fri 4. May 12:32:28 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/youtube/UBYouTubePublisher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBYouTubePublisher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBYouTubePublisher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   83,   19,   19, 0x0a,
     136,  118,   19,   19, 0x08,
     193,  176,   19,   19, 0x08,
     234,   19,   19,   19, 0x08,
     259,  176,   19,   19, 0x08,
     321,  300,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBYouTubePublisher[] = {
    "UBYouTubePublisher\0\0success,authToken\0"
    "postClientLoginRequestFinished(bool,QString)\0"
    "videoFilePath\0uploadVideo(QString)\0"
    "userName,password\0"
    "postClientLoginRequest(QString,QString)\0"
    "success,pPayload\0"
    "postClientLoginResponse(bool,QByteArray)\0"
    "postVideoUploadRequest()\0"
    "postVideoUploadResponse(bool,QByteArray)\0"
    "bytesSent,bytesTotal\0progress(qint64,qint64)\0"
};

void UBYouTubePublisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBYouTubePublisher *_t = static_cast<UBYouTubePublisher *>(_o);
        switch (_id) {
        case 0: _t->postClientLoginRequestFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->uploadVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->postClientLoginRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->postClientLoginResponse((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 4: _t->postVideoUploadRequest(); break;
        case 5: _t->postVideoUploadResponse((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBYouTubePublisher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBYouTubePublisher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBYouTubePublisher,
      qt_meta_data_UBYouTubePublisher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBYouTubePublisher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBYouTubePublisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBYouTubePublisher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBYouTubePublisher))
        return static_cast<void*>(const_cast< UBYouTubePublisher*>(this));
    return QObject::qt_metacast(_clname);
}

int UBYouTubePublisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBYouTubePublisher::postClientLoginRequestFinished(bool _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UBYouTubePublishingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      50,   26,   26,   26, 0x28,
      66,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBYouTubePublishingDialog[] = {
    "UBYouTubePublishingDialog\0\0"
    "updateUIState(QString)\0updateUIState()\0"
    "updateCredentialPersistenceState()\0"
};

void UBYouTubePublishingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBYouTubePublishingDialog *_t = static_cast<UBYouTubePublishingDialog *>(_o);
        switch (_id) {
        case 0: _t->updateUIState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateUIState(); break;
        case 2: _t->updateCredentialPersistenceState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBYouTubePublishingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBYouTubePublishingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBYouTubePublishingDialog,
      qt_meta_data_UBYouTubePublishingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBYouTubePublishingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBYouTubePublishingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBYouTubePublishingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBYouTubePublishingDialog))
        return static_cast<void*>(const_cast< UBYouTubePublishingDialog*>(this));
    if (!strcmp(_clname, "Ui::YouTubePublishingDialog"))
        return static_cast< Ui::YouTubePublishingDialog*>(const_cast< UBYouTubePublishingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBYouTubePublishingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
