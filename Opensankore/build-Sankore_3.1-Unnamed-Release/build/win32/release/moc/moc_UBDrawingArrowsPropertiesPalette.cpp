/****************************************************************************
** Meta object code from reading C++ file 'UBDrawingArrowsPropertiesPalette.h'
**
** Created: Fri 4. May 12:32:09 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDrawingArrowsPropertiesPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDrawingArrowsPropertiesPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDrawingArrowsPropertiesPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      61,   33,   33,   33, 0x08,
      89,   33,   33,   33, 0x08,
     117,   33,   33,   33, 0x08,
     142,   33,   33,   33, 0x08,
     168,   33,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDrawingArrowsPropertiesPalette[] = {
    "UBDrawingArrowsPropertiesPalette\0\0"
    "onBtnStartArrowStyleNone()\0"
    "onBtnStartArrowStyleArrow()\0"
    "onBtnStartArrowStyleRound()\0"
    "onBtnEndArrowStyleNone()\0"
    "onBtnEndArrowStyleArrow()\0"
    "onBtnEndArrowStyleRound()\0"
};

void UBDrawingArrowsPropertiesPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDrawingArrowsPropertiesPalette *_t = static_cast<UBDrawingArrowsPropertiesPalette *>(_o);
        switch (_id) {
        case 0: _t->onBtnStartArrowStyleNone(); break;
        case 1: _t->onBtnStartArrowStyleArrow(); break;
        case 2: _t->onBtnStartArrowStyleRound(); break;
        case 3: _t->onBtnEndArrowStyleNone(); break;
        case 4: _t->onBtnEndArrowStyleArrow(); break;
        case 5: _t->onBtnEndArrowStyleRound(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDrawingArrowsPropertiesPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDrawingArrowsPropertiesPalette::staticMetaObject = {
    { &UBAbstractSubPalette::staticMetaObject, qt_meta_stringdata_UBDrawingArrowsPropertiesPalette,
      qt_meta_data_UBDrawingArrowsPropertiesPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDrawingArrowsPropertiesPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDrawingArrowsPropertiesPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDrawingArrowsPropertiesPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDrawingArrowsPropertiesPalette))
        return static_cast<void*>(const_cast< UBDrawingArrowsPropertiesPalette*>(this));
    return UBAbstractSubPalette::qt_metacast(_clname);
}

int UBDrawingArrowsPropertiesPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractSubPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
