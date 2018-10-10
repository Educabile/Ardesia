/****************************************************************************
** Meta object code from reading C++ file 'UBDesktopPropertyPalette.h'
**
** Created: Mon 20. Nov 11:18:56 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/desktop/UBDesktopPropertyPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDesktopPropertyPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDesktopPropertyPalette[] = {

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

static const char qt_meta_stringdata_UBDesktopPropertyPalette[] = {
    "UBDesktopPropertyPalette\0"
};

void UBDesktopPropertyPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDesktopPropertyPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDesktopPropertyPalette::staticMetaObject = {
    { &UBPropertyPalette::staticMetaObject, qt_meta_stringdata_UBDesktopPropertyPalette,
      qt_meta_data_UBDesktopPropertyPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDesktopPropertyPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDesktopPropertyPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDesktopPropertyPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDesktopPropertyPalette))
        return static_cast<void*>(const_cast< UBDesktopPropertyPalette*>(this));
    return UBPropertyPalette::qt_metacast(_clname);
}

int UBDesktopPropertyPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBPropertyPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBDesktopPenPalette[] = {

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
      21,   20,   20,   20, 0x0a,
      41,   20,   20,   20, 0x0a,
      61,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDesktopPenPalette[] = {
    "UBDesktopPenPalette\0\0onParentMinimized()\0"
    "onParentMaximized()\0onButtonReleased()\0"
};

void UBDesktopPenPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDesktopPenPalette *_t = static_cast<UBDesktopPenPalette *>(_o);
        switch (_id) {
        case 0: _t->onParentMinimized(); break;
        case 1: _t->onParentMaximized(); break;
        case 2: _t->onButtonReleased(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDesktopPenPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDesktopPenPalette::staticMetaObject = {
    { &UBDesktopPropertyPalette::staticMetaObject, qt_meta_stringdata_UBDesktopPenPalette,
      qt_meta_data_UBDesktopPenPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDesktopPenPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDesktopPenPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDesktopPenPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDesktopPenPalette))
        return static_cast<void*>(const_cast< UBDesktopPenPalette*>(this));
    return UBDesktopPropertyPalette::qt_metacast(_clname);
}

int UBDesktopPenPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDesktopPropertyPalette::qt_metacall(_c, _id, _a);
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
