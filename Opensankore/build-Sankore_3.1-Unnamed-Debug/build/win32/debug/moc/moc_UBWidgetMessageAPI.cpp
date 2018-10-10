/****************************************************************************
** Meta object code from reading C++ file 'UBWidgetMessageAPI.h'
**
** Created: Mon 20. Nov 11:15:57 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/api/UBWidgetMessageAPI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWidgetMessageAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWidgetMessageAPI[] = {

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
      40,   20,   19,   19, 0x0a,
      80,   69,   19,   19, 0x0a,
     106,   69,   19,   19, 0x0a,
     136,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBWidgetMessageAPI[] = {
    "UBWidgetMessageAPI\0\0pTopicName,pMessage\0"
    "sendMessage(QString,QString)\0pTopicName\0"
    "subscribeToTopic(QString)\0"
    "unsubscribeFromTopic(QString)\0"
    "onNewMessage(QString,QString)\0"
};

void UBWidgetMessageAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWidgetMessageAPI *_t = static_cast<UBWidgetMessageAPI *>(_o);
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->subscribeToTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->unsubscribeFromTopic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onNewMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWidgetMessageAPI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWidgetMessageAPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBWidgetMessageAPI,
      qt_meta_data_UBWidgetMessageAPI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWidgetMessageAPI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWidgetMessageAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWidgetMessageAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWidgetMessageAPI))
        return static_cast<void*>(const_cast< UBWidgetMessageAPI*>(this));
    return QObject::qt_metacast(_clname);
}

int UBWidgetMessageAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_UBWidgetAPIMessageBroker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   26,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBWidgetAPIMessageBroker[] = {
    "UBWidgetAPIMessageBroker\0\0pTopicName,pMessage\0"
    "newMessage(QString,QString)\0"
    "sendMessage(QString,QString)\0"
};

void UBWidgetAPIMessageBroker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWidgetAPIMessageBroker *_t = static_cast<UBWidgetAPIMessageBroker *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWidgetAPIMessageBroker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWidgetAPIMessageBroker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBWidgetAPIMessageBroker,
      qt_meta_data_UBWidgetAPIMessageBroker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWidgetAPIMessageBroker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWidgetAPIMessageBroker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWidgetAPIMessageBroker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWidgetAPIMessageBroker))
        return static_cast<void*>(const_cast< UBWidgetAPIMessageBroker*>(this));
    return QObject::qt_metacast(_clname);
}

int UBWidgetAPIMessageBroker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void UBWidgetAPIMessageBroker::newMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
