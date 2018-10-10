/****************************************************************************
** Meta object code from reading C++ file 'UBCellPropertiesPalette.h'
**
** Created: Mon 20. Nov 11:17:59 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBCellPropertiesPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBCellPropertiesPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBCellPropertiesPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBCellPropertiesPalette[] = {
    "UBCellPropertiesPalette\0\0validationRequired()\0"
};

void UBCellPropertiesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBCellPropertiesPalette *_t = static_cast<UBCellPropertiesPalette *>(_o);
        switch (_id) {
        case 0: _t->validationRequired(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBCellPropertiesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCellPropertiesPalette::staticMetaObject = {
    { &UBFloatingPalette::staticMetaObject, qt_meta_stringdata_UBCellPropertiesPalette,
      qt_meta_data_UBCellPropertiesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCellPropertiesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCellPropertiesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCellPropertiesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCellPropertiesPalette))
        return static_cast<void*>(const_cast< UBCellPropertiesPalette*>(this));
    return UBFloatingPalette::qt_metacast(_clname);
}

int UBCellPropertiesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBFloatingPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UBCellPropertiesPalette::validationRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
