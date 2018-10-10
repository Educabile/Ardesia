/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsCompass.h'
**
** Created: Mon 20. Nov 11:18:21 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/tools/UBGraphicsCompass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsCompass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsCompass[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   18,   18,   18, 0x08,
      46,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsCompass[] = {
    "UBGraphicsCompass\0\0hidden()\0"
    "penColorChanged()\0lineWidthChanged()\0"
};

void UBGraphicsCompass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsCompass *_t = static_cast<UBGraphicsCompass *>(_o);
        switch (_id) {
        case 0: _t->hidden(); break;
        case 1: _t->penColorChanged(); break;
        case 2: _t->lineWidthChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBGraphicsCompass::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsCompass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBGraphicsCompass,
      qt_meta_data_UBGraphicsCompass, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsCompass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsCompass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsCompass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsCompass))
        return static_cast<void*>(const_cast< UBGraphicsCompass*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< UBGraphicsCompass*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsCompass*>(this));
    return QObject::qt_metacast(_clname);
}

int UBGraphicsCompass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UBGraphicsCompass::hidden()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
