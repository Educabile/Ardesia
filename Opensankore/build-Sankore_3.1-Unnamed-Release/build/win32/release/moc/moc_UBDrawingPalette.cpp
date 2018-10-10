/****************************************************************************
** Meta object code from reading C++ file 'UBDrawingPalette.h'
**
** Created: Fri 4. May 12:31:52 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDrawingPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDrawingPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDrawingPalette[] = {

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
      18,   17,   17,   17, 0x08,
      34,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDrawingPalette[] = {
    "UBDrawingPalette\0\0buttonClicked()\0"
    "raise()\0"
};

void UBDrawingPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDrawingPalette *_t = static_cast<UBDrawingPalette *>(_o);
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        case 1: _t->raise(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDrawingPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDrawingPalette::staticMetaObject = {
    { &UBActionPalette::staticMetaObject, qt_meta_stringdata_UBDrawingPalette,
      qt_meta_data_UBDrawingPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDrawingPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDrawingPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDrawingPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDrawingPalette))
        return static_cast<void*>(const_cast< UBDrawingPalette*>(this));
    return UBActionPalette::qt_metacast(_clname);
}

int UBDrawingPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBActionPalette::qt_metacall(_c, _id, _a);
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
