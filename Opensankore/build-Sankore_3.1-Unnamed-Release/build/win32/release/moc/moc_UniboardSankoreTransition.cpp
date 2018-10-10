/****************************************************************************
** Meta object code from reading C++ file 'UniboardSankoreTransition.h'
**
** Created: Fri 4. May 12:34:07 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/transition/UniboardSankoreTransition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UniboardSankoreTransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UniboardSankoreThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UniboardSankoreThread[] = {
    "UniboardSankoreThread\0"
};

void UniboardSankoreThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UniboardSankoreThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UniboardSankoreThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UniboardSankoreThread,
      qt_meta_data_UniboardSankoreThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UniboardSankoreThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UniboardSankoreThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UniboardSankoreThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UniboardSankoreThread))
        return static_cast<void*>(const_cast< UniboardSankoreThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UniboardSankoreThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UniboardSankoreTransition[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   27,   26,   26, 0x05,
      63,   59,   26,   26, 0x05,
     103,   90,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UniboardSankoreTransition[] = {
    "UniboardSankoreTransition\0\0result\0"
    "transitionFinished(bool)\0doc\0"
    "docAdded(UBDocumentProxy*)\0documentName\0"
    "transitioningFile(QString)\0"
    "startDocumentTransition()\0"
};

void UniboardSankoreTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UniboardSankoreTransition *_t = static_cast<UniboardSankoreTransition *>(_o);
        switch (_id) {
        case 0: _t->transitionFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->docAdded((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 2: _t->transitioningFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->startDocumentTransition(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UniboardSankoreTransition::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UniboardSankoreTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UniboardSankoreTransition,
      qt_meta_data_UniboardSankoreTransition, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UniboardSankoreTransition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UniboardSankoreTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UniboardSankoreTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UniboardSankoreTransition))
        return static_cast<void*>(const_cast< UniboardSankoreTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int UniboardSankoreTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UniboardSankoreTransition::transitionFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UniboardSankoreTransition::docAdded(UBDocumentProxy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UniboardSankoreTransition::transitioningFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
