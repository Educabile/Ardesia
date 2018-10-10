/****************************************************************************
** Meta object code from reading C++ file 'UBAutoSaver.h'
**
** Created: Fri 4. May 12:32:18 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/network/UBAutoSaver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBAutoSaver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBAutoSaver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBAutoSaver[] = {
    "UBAutoSaver\0\0changeOccurred()\0"
};

void UBAutoSaver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBAutoSaver *_t = static_cast<UBAutoSaver *>(_o);
        switch (_id) {
        case 0: _t->changeOccurred(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBAutoSaver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBAutoSaver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBAutoSaver,
      qt_meta_data_UBAutoSaver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBAutoSaver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBAutoSaver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBAutoSaver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBAutoSaver))
        return static_cast<void*>(const_cast< UBAutoSaver*>(this));
    return QObject::qt_metacast(_clname);
}

int UBAutoSaver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
