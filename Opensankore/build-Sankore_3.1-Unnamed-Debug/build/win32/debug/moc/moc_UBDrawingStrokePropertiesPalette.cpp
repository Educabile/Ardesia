/****************************************************************************
** Meta object code from reading C++ file 'UBDrawingStrokePropertiesPalette.h'
**
** Created: Mon 20. Nov 11:17:52 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDrawingStrokePropertiesPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDrawingStrokePropertiesPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDrawingStrokePropertiesPalette[] = {

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
      34,   33,   33,   33, 0x08,
      59,   33,   33,   33, 0x08,
      82,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDrawingStrokePropertiesPalette[] = {
    "UBDrawingStrokePropertiesPalette\0\0"
    "onBtnSelectStrokeColor()\0"
    "onBtnSelectThickness()\0onBtnSelectStyle()\0"
};

void UBDrawingStrokePropertiesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDrawingStrokePropertiesPalette *_t = static_cast<UBDrawingStrokePropertiesPalette *>(_o);
        switch (_id) {
        case 0: _t->onBtnSelectStrokeColor(); break;
        case 1: _t->onBtnSelectThickness(); break;
        case 2: _t->onBtnSelectStyle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDrawingStrokePropertiesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDrawingStrokePropertiesPalette::staticMetaObject = {
    { &UBAbstractSubPalette::staticMetaObject, qt_meta_stringdata_UBDrawingStrokePropertiesPalette,
      qt_meta_data_UBDrawingStrokePropertiesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDrawingStrokePropertiesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDrawingStrokePropertiesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDrawingStrokePropertiesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDrawingStrokePropertiesPalette))
        return static_cast<void*>(const_cast< UBDrawingStrokePropertiesPalette*>(this));
    return UBAbstractSubPalette::qt_metacast(_clname);
}

int UBDrawingStrokePropertiesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractSubPalette::qt_metacall(_c, _id, _a);
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
