/****************************************************************************
** Meta object code from reading C++ file 'UBDrawingFillPropertiesPalette.h'
**
** Created: Fri 4. May 12:32:03 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDrawingFillPropertiesPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDrawingFillPropertiesPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDrawingFillPropertiesPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      60,   31,   31,   31, 0x08,
      89,   31,   31,   31, 0x08,
     113,   31,   31,   31, 0x08,
     130,   31,   31,   31, 0x08,
     151,   31,   31,   31, 0x08,
     173,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDrawingFillPropertiesPalette[] = {
    "UBDrawingFillPropertiesPalette\0\0"
    "onBtnSelectFillFirstColor()\0"
    "onBtnSelectFillSecondColor()\0"
    "onBtnColorTransparent()\0onBtnColorFull()\0"
    "onBtnColorGradient()\0onBtnFillStyleDense()\0"
    "onBtnFillStyleDiag()\0"
};

void UBDrawingFillPropertiesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDrawingFillPropertiesPalette *_t = static_cast<UBDrawingFillPropertiesPalette *>(_o);
        switch (_id) {
        case 0: _t->onBtnSelectFillFirstColor(); break;
        case 1: _t->onBtnSelectFillSecondColor(); break;
        case 2: _t->onBtnColorTransparent(); break;
        case 3: _t->onBtnColorFull(); break;
        case 4: _t->onBtnColorGradient(); break;
        case 5: _t->onBtnFillStyleDense(); break;
        case 6: _t->onBtnFillStyleDiag(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDrawingFillPropertiesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDrawingFillPropertiesPalette::staticMetaObject = {
    { &UBAbstractSubPalette::staticMetaObject, qt_meta_stringdata_UBDrawingFillPropertiesPalette,
      qt_meta_data_UBDrawingFillPropertiesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDrawingFillPropertiesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDrawingFillPropertiesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDrawingFillPropertiesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDrawingFillPropertiesPalette))
        return static_cast<void*>(const_cast< UBDrawingFillPropertiesPalette*>(this));
    return UBAbstractSubPalette::qt_metacast(_clname);
}

int UBDrawingFillPropertiesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractSubPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
