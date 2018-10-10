/****************************************************************************
** Meta object code from reading C++ file 'UBAlignObjectPalette.h'
**
** Created: Mon 20. Nov 11:17:56 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBAlignObjectPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBAlignObjectPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBAlignObjectPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      41,   21,   21,   21, 0x08,
      68,   21,   21,   21, 0x08,
      88,   21,   21,   21, 0x08,
     106,   21,   21,   21, 0x08,
     135,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBAlignObjectPalette[] = {
    "UBAlignObjectPalette\0\0onBtnAlignToLeft()\0"
    "onBtnAlignVerticalCenter()\0"
    "onBtnAlignToRight()\0onBtnAlignToTop()\0"
    "onBtnAlignHorizontalCenter()\0"
    "onBtnAlignToBottom()\0"
};

void UBAlignObjectPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBAlignObjectPalette *_t = static_cast<UBAlignObjectPalette *>(_o);
        switch (_id) {
        case 0: _t->onBtnAlignToLeft(); break;
        case 1: _t->onBtnAlignVerticalCenter(); break;
        case 2: _t->onBtnAlignToRight(); break;
        case 3: _t->onBtnAlignToTop(); break;
        case 4: _t->onBtnAlignHorizontalCenter(); break;
        case 5: _t->onBtnAlignToBottom(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBAlignObjectPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBAlignObjectPalette::staticMetaObject = {
    { &UBAbstractSubPalette::staticMetaObject, qt_meta_stringdata_UBAlignObjectPalette,
      qt_meta_data_UBAlignObjectPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBAlignObjectPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBAlignObjectPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBAlignObjectPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBAlignObjectPalette))
        return static_cast<void*>(const_cast< UBAlignObjectPalette*>(this));
    return UBAbstractSubPalette::qt_metacast(_clname);
}

int UBAlignObjectPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractSubPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
