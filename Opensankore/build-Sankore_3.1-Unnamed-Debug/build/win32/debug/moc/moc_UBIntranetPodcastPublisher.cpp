/****************************************************************************
** Meta object code from reading C++ file 'UBIntranetPodcastPublisher.h'
**
** Created: Mon 20. Nov 11:18:12 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/intranet/UBIntranetPodcastPublisher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBIntranetPodcastPublisher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBIntranetPodcastPublisher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      55,   28,   27,   27, 0x0a,
      82,   27,   27,   27, 0x0a,
     128,  111,   27,   27, 0x0a,
     194,  173,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBIntranetPodcastPublisher[] = {
    "UBIntranetPodcastPublisher\0\0"
    "videoFilePath,durationInMs\0"
    "publishVideo(QString,long)\0"
    "postVideoPublishingRequest()\0"
    "success,pPayload\0"
    "postVideoPublishingResponse(bool,QByteArray)\0"
    "bytesSent,bytesTotal\0progress(qint64,qint64)\0"
};

void UBIntranetPodcastPublisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBIntranetPodcastPublisher *_t = static_cast<UBIntranetPodcastPublisher *>(_o);
        switch (_id) {
        case 0: _t->publishVideo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 1: _t->postVideoPublishingRequest(); break;
        case 2: _t->postVideoPublishingResponse((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBIntranetPodcastPublisher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBIntranetPodcastPublisher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBIntranetPodcastPublisher,
      qt_meta_data_UBIntranetPodcastPublisher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBIntranetPodcastPublisher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBIntranetPodcastPublisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBIntranetPodcastPublisher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBIntranetPodcastPublisher))
        return static_cast<void*>(const_cast< UBIntranetPodcastPublisher*>(this));
    return QObject::qt_metacast(_clname);
}

int UBIntranetPodcastPublisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_UBIntranetPodcastPublishingDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x08,
      58,   34,   34,   34, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_UBIntranetPodcastPublishingDialog[] = {
    "UBIntranetPodcastPublishingDialog\0\0"
    "updateUIState(QString)\0updateUIState()\0"
};

void UBIntranetPodcastPublishingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBIntranetPodcastPublishingDialog *_t = static_cast<UBIntranetPodcastPublishingDialog *>(_o);
        switch (_id) {
        case 0: _t->updateUIState((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateUIState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBIntranetPodcastPublishingDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBIntranetPodcastPublishingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBIntranetPodcastPublishingDialog,
      qt_meta_data_UBIntranetPodcastPublishingDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBIntranetPodcastPublishingDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBIntranetPodcastPublishingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBIntranetPodcastPublishingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBIntranetPodcastPublishingDialog))
        return static_cast<void*>(const_cast< UBIntranetPodcastPublishingDialog*>(this));
    if (!strcmp(_clname, "Ui::IntranetPodcastPublishingDialog"))
        return static_cast< Ui::IntranetPodcastPublishingDialog*>(const_cast< UBIntranetPodcastPublishingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBIntranetPodcastPublishingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
