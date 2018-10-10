/****************************************************************************
** Meta object code from reading C++ file 'UBActionPalette.h'
**
** Created: Fri 4. May 12:31:04 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBActionPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBActionPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBActionPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      29,   26,   16,   16, 0x05,
      53,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   16,   16,   16, 0x0a,
      83,   16,   16,   16, 0x08,
      99,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBActionPalette[] = {
    "UBActionPalette\0\0closed()\0id\0"
    "buttonGroupClicked(int)\0customMouseReleased()\0"
    "close()\0buttonClicked()\0actionChanged()\0"
};

void UBActionPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBActionPalette *_t = static_cast<UBActionPalette *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->buttonGroupClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->customMouseReleased(); break;
        case 3: _t->close(); break;
        case 4: _t->buttonClicked(); break;
        case 5: _t->actionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBActionPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBActionPalette::staticMetaObject = {
    { &UBFloatingPalette::staticMetaObject, qt_meta_stringdata_UBActionPalette,
      qt_meta_data_UBActionPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBActionPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBActionPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBActionPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBActionPalette))
        return static_cast<void*>(const_cast< UBActionPalette*>(this));
    return UBFloatingPalette::qt_metacast(_clname);
}

int UBActionPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBFloatingPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UBActionPalette::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBActionPalette::buttonGroupClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBActionPalette::customMouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_UBActionPaletteButton[] = {

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
      23,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBActionPaletteButton[] = {
    "UBActionPaletteButton\0\0doubleClicked()\0"
};

void UBActionPaletteButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBActionPaletteButton *_t = static_cast<UBActionPaletteButton *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBActionPaletteButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBActionPaletteButton::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_UBActionPaletteButton,
      qt_meta_data_UBActionPaletteButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBActionPaletteButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBActionPaletteButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBActionPaletteButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBActionPaletteButton))
        return static_cast<void*>(const_cast< UBActionPaletteButton*>(this));
    return QToolButton::qt_metacast(_clname);
}

int UBActionPaletteButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
void UBActionPaletteButton::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
