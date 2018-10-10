/****************************************************************************
** Meta object code from reading C++ file 'UBFloatingPalette.h'
**
** Created: Fri 4. May 12:30:19 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBFloatingPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBFloatingPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBFloatingPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      43,   34,   18,   18, 0x05,
      77,   18,   18,   18, 0x05,
      93,   18,   18,   18, 0x05,
     105,   18,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBFloatingPalette[] = {
    "UBFloatingPalette\0\0mouseEntered()\0"
    "location\0minimizeStart(eMinimizedLocation)\0"
    "maximizeStart()\0maximized()\0moving()\0"
};

void UBFloatingPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFloatingPalette *_t = static_cast<UBFloatingPalette *>(_o);
        switch (_id) {
        case 0: _t->mouseEntered(); break;
        case 1: _t->minimizeStart((*reinterpret_cast< eMinimizedLocation(*)>(_a[1]))); break;
        case 2: _t->maximizeStart(); break;
        case 3: _t->maximized(); break;
        case 4: _t->moving(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFloatingPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFloatingPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFloatingPalette,
      qt_meta_data_UBFloatingPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFloatingPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFloatingPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFloatingPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFloatingPalette))
        return static_cast<void*>(const_cast< UBFloatingPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFloatingPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UBFloatingPalette::mouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBFloatingPalette::minimizeStart(eMinimizedLocation _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBFloatingPalette::maximizeStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBFloatingPalette::maximized()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBFloatingPalette::moving()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
