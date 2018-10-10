/****************************************************************************
** Meta object code from reading C++ file 'UBScreenMirror.h'
**
** Created: Mon 20. Nov 11:17:06 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBScreenMirror.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBScreenMirror.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBScreenMirror[] = {

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
      29,   16,   15,   15, 0x0a,
      61,   55,   15,   15, 0x0a,
      82,   15,   15,   15, 0x0a,
      90,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBScreenMirror[] = {
    "UBScreenMirror\0\0sourceWidget\0"
    "setSourceWidget(QWidget*)\0pRect\0"
    "setSourceRect(QRect)\0start()\0stop()\0"
};

void UBScreenMirror::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBScreenMirror *_t = static_cast<UBScreenMirror *>(_o);
        switch (_id) {
        case 0: _t->setSourceWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->setSourceRect((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBScreenMirror::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBScreenMirror::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBScreenMirror,
      qt_meta_data_UBScreenMirror, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBScreenMirror::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBScreenMirror::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBScreenMirror::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBScreenMirror))
        return static_cast<void*>(const_cast< UBScreenMirror*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBScreenMirror::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
