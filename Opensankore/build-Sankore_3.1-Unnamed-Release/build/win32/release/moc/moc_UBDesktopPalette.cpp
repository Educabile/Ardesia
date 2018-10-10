/****************************************************************************
** Meta object code from reading C++ file 'UBDesktopPalette.h'
**
** Created: Fri 4. May 12:33:05 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/desktop/UBDesktopPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDesktopPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDesktopPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      34,   17,   17,   17, 0x05,
      48,   17,   17,   17, 0x05,
      62,   17,   17,   17, 0x05,
      81,   76,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,  104,   17,   17, 0x0a,
     145,  132,   17,   17, 0x0a,
     179,  171,   17,   17, 0x0a,
     215,  210,   17,   17, 0x0a,
     260,  251,   17,   17, 0x0a,
     291,   17,   17,   17, 0x0a,
     304,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDesktopPalette[] = {
    "UBDesktopPalette\0\0uniboardClick()\0"
    "customClick()\0windowClick()\0screenClick()\0"
    "tool\0stylusToolChanged(int)\0checked\0"
    "showHideClick(bool)\0pShowEnabled\0"
    "updateShowHideState(bool)\0visible\0"
    "setShowHideButtonVisible(bool)\0show\0"
    "setDisplaySelectButtonVisible(bool)\0"
    "location\0minimizeMe(eMinimizedLocation)\0"
    "maximizeMe()\0parentResized()\0"
};

void UBDesktopPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDesktopPalette *_t = static_cast<UBDesktopPalette *>(_o);
        switch (_id) {
        case 0: _t->uniboardClick(); break;
        case 1: _t->customClick(); break;
        case 2: _t->windowClick(); break;
        case 3: _t->screenClick(); break;
        case 4: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showHideClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateShowHideState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setShowHideButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDisplaySelectButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->minimizeMe((*reinterpret_cast< eMinimizedLocation(*)>(_a[1]))); break;
        case 10: _t->maximizeMe(); break;
        case 11: _t->parentResized(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDesktopPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDesktopPalette::staticMetaObject = {
    { &UBActionPalette::staticMetaObject, qt_meta_stringdata_UBDesktopPalette,
      qt_meta_data_UBDesktopPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDesktopPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDesktopPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDesktopPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDesktopPalette))
        return static_cast<void*>(const_cast< UBDesktopPalette*>(this));
    return UBActionPalette::qt_metacast(_clname);
}

int UBDesktopPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UBDesktopPalette::uniboardClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBDesktopPalette::customClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBDesktopPalette::windowClick()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBDesktopPalette::screenClick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBDesktopPalette::stylusToolChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
