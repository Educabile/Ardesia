/****************************************************************************
** Meta object code from reading C++ file 'UBSpinningWheel.h'
**
** Created: Mon 20. Nov 11:17:15 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBSpinningWheel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBSpinningWheel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBSpinningWheel[] = {

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
      17,   16,   16,   16, 0x0a,
      34,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBSpinningWheel[] = {
    "UBSpinningWheel\0\0startAnimation()\0"
    "stopAnimation()\0"
};

void UBSpinningWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBSpinningWheel *_t = static_cast<UBSpinningWheel *>(_o);
        switch (_id) {
        case 0: _t->startAnimation(); break;
        case 1: _t->stopAnimation(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBSpinningWheel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBSpinningWheel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBSpinningWheel,
      qt_meta_data_UBSpinningWheel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBSpinningWheel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBSpinningWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBSpinningWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBSpinningWheel))
        return static_cast<void*>(const_cast< UBSpinningWheel*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBSpinningWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
