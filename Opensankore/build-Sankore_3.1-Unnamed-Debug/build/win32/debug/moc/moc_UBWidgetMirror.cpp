/****************************************************************************
** Meta object code from reading C++ file 'UBWidgetMirror.h'
**
** Created: Mon 20. Nov 11:17:04 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBWidgetMirror.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWidgetMirror.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWidgetMirror[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   16,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBWidgetMirror[] = {
    "UBWidgetMirror\0\0sourceWidget\0"
    "setSourceWidget(QWidget*)\0"
};

void UBWidgetMirror::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWidgetMirror *_t = static_cast<UBWidgetMirror *>(_o);
        switch (_id) {
        case 0: _t->setSourceWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWidgetMirror::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWidgetMirror::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBWidgetMirror,
      qt_meta_data_UBWidgetMirror, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWidgetMirror::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWidgetMirror::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWidgetMirror::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWidgetMirror))
        return static_cast<void*>(const_cast< UBWidgetMirror*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBWidgetMirror::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
