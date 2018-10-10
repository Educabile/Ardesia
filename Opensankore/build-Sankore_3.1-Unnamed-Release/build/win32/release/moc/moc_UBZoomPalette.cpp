/****************************************************************************
** Meta object code from reading C++ file 'UBZoomPalette.h'
**
** Created: Fri 4. May 12:30:53 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBZoomPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBZoomPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBZoomPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      22,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      61,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBZoomPalette[] = {
    "UBZoomPalette\0\0hide()\0refreshPalette()\0"
    "showHideExtraButton()\0goHundred()\0"
};

void UBZoomPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBZoomPalette *_t = static_cast<UBZoomPalette *>(_o);
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->refreshPalette(); break;
        case 2: _t->showHideExtraButton(); break;
        case 3: _t->goHundred(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBZoomPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBZoomPalette::staticMetaObject = {
    { &UBFloatingPalette::staticMetaObject, qt_meta_stringdata_UBZoomPalette,
      qt_meta_data_UBZoomPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBZoomPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBZoomPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBZoomPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBZoomPalette))
        return static_cast<void*>(const_cast< UBZoomPalette*>(this));
    return UBFloatingPalette::qt_metacast(_clname);
}

int UBZoomPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBFloatingPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
