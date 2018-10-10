/****************************************************************************
** Meta object code from reading C++ file 'UBStartupHintsPalette.h'
**
** Created: Fri 4. May 12:31:44 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBStartupHintsPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBStartupHintsPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBStartupHintsPalette[] = {

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
      29,   23,   22,   22, 0x08,
      61,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBStartupHintsPalette[] = {
    "UBStartupHintsPalette\0\0state\0"
    "onShowNextTimeStateChanged(int)\0"
    "javaScriptWindowObjectCleared()\0"
};

void UBStartupHintsPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBStartupHintsPalette *_t = static_cast<UBStartupHintsPalette *>(_o);
        switch (_id) {
        case 0: _t->onShowNextTimeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->javaScriptWindowObjectCleared(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBStartupHintsPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBStartupHintsPalette::staticMetaObject = {
    { &UBFloatingPalette::staticMetaObject, qt_meta_stringdata_UBStartupHintsPalette,
      qt_meta_data_UBStartupHintsPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBStartupHintsPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBStartupHintsPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBStartupHintsPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBStartupHintsPalette))
        return static_cast<void*>(const_cast< UBStartupHintsPalette*>(this));
    return UBFloatingPalette::qt_metacast(_clname);
}

int UBStartupHintsPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBFloatingPalette::qt_metacall(_c, _id, _a);
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
