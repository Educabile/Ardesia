/****************************************************************************
** Meta object code from reading C++ file 'qtlocalpeer.h'
**
** Created: Mon 20. Nov 11:20:03 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-ThirdParty/trolltech/singleapplication/qtlocalpeer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtlocalpeer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtLocalPeer[] = {

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
      21,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QtLocalPeer[] = {
    "QtLocalPeer\0\0message\0messageReceived(QString)\0"
    "receiveConnection()\0"
};

void QtLocalPeer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtLocalPeer *_t = static_cast<QtLocalPeer *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->receiveConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QtLocalPeer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QtLocalPeer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtLocalPeer,
      qt_meta_data_QtLocalPeer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtLocalPeer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtLocalPeer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtLocalPeer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLocalPeer))
        return static_cast<void*>(const_cast< QtLocalPeer*>(this));
    return QObject::qt_metacast(_clname);
}

int QtLocalPeer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtLocalPeer::messageReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE