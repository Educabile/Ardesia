/****************************************************************************
** Meta object code from reading C++ file 'UBAbstractVideoEncoder.h'
**
** Created: Fri 4. May 12:32:24 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/UBAbstractVideoEncoder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBAbstractVideoEncoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBAbstractVideoEncoder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   24,   23,   23, 0x05,
      59,   56,   23,   23, 0x05,
      88,   82,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBAbstractVideoEncoder[] = {
    "UBAbstractVideoEncoder\0\0pStatus\0"
    "encodingStatus(QString)\0ok\0"
    "encodingFinished(bool)\0level\0"
    "audioLevelChanged(quint8)\0"
};

void UBAbstractVideoEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBAbstractVideoEncoder *_t = static_cast<UBAbstractVideoEncoder *>(_o);
        switch (_id) {
        case 0: _t->encodingStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->encodingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->audioLevelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBAbstractVideoEncoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBAbstractVideoEncoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBAbstractVideoEncoder,
      qt_meta_data_UBAbstractVideoEncoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBAbstractVideoEncoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBAbstractVideoEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBAbstractVideoEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBAbstractVideoEncoder))
        return static_cast<void*>(const_cast< UBAbstractVideoEncoder*>(this));
    return QObject::qt_metacast(_clname);
}

int UBAbstractVideoEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UBAbstractVideoEncoder::encodingStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBAbstractVideoEncoder::encodingFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBAbstractVideoEncoder::audioLevelChanged(quint8 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
