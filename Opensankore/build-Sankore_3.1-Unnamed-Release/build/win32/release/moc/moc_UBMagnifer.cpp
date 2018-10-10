/****************************************************************************
** Meta object code from reading C++ file 'UBMagnifer.h'
**
** Created: Fri 4. May 12:31:25 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBMagnifer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBMagnifer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBMagnifier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,
      50,   12,   12,   12, 0x05,
      74,   12,   12,   12, 0x05,
      99,   12,   12,   12, 0x05,
     140,  125,   12,   12, 0x05,
     176,  171,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     215,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBMagnifier[] = {
    "UBMagnifier\0\0newPos\0magnifierMoved_Signal(QPoint)\0"
    "magnifierClose_Signal()\0"
    "magnifierZoomIn_Signal()\0"
    "magnifierZoomOut_Signal()\0newPercentSize\0"
    "magnifierResized_Signal(qreal)\0mode\0"
    "magnifierDrawingModeChange_Signal(int)\0"
    "slot_refresh()\0"
};

void UBMagnifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBMagnifier *_t = static_cast<UBMagnifier *>(_o);
        switch (_id) {
        case 0: _t->magnifierMoved_Signal((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->magnifierClose_Signal(); break;
        case 2: _t->magnifierZoomIn_Signal(); break;
        case 3: _t->magnifierZoomOut_Signal(); break;
        case 4: _t->magnifierResized_Signal((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->magnifierDrawingModeChange_Signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBMagnifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBMagnifier::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBMagnifier,
      qt_meta_data_UBMagnifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBMagnifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBMagnifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBMagnifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBMagnifier))
        return static_cast<void*>(const_cast< UBMagnifier*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBMagnifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UBMagnifier::magnifierMoved_Signal(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBMagnifier::magnifierClose_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBMagnifier::magnifierZoomIn_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBMagnifier::magnifierZoomOut_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBMagnifier::magnifierResized_Signal(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBMagnifier::magnifierDrawingModeChange_Signal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
