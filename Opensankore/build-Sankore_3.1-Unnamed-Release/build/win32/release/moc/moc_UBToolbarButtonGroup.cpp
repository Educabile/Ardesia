/****************************************************************************
** Meta object code from reading C++ file 'UBToolbarButtonGroup.h'
**
** Created: Fri 4. May 12:30:21 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBToolbarButtonGroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBToolbarButtonGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBToolbarButtonGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   21,   21, 0x05,
      43,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   22,   21,   21, 0x0a,
      89,   21,   21,   21, 0x0a,
     119,  111,   21,   21, 0x0a,
     148,  141,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBToolbarButtonGroup[] = {
    "UBToolbarButtonGroup\0\0index\0activated(int)\0"
    "currentIndexChanged(int)\0setCurrentIndex(int)\0"
    "colorPaletteChanged()\0display\0"
    "displayText(QVariant)\0action\0"
    "selected(QAction*)\0"
};

void UBToolbarButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBToolbarButtonGroup *_t = static_cast<UBToolbarButtonGroup *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->colorPaletteChanged(); break;
        case 4: _t->displayText((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->selected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBToolbarButtonGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBToolbarButtonGroup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBToolbarButtonGroup,
      qt_meta_data_UBToolbarButtonGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBToolbarButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBToolbarButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBToolbarButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBToolbarButtonGroup))
        return static_cast<void*>(const_cast< UBToolbarButtonGroup*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBToolbarButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBToolbarButtonGroup::activated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBToolbarButtonGroup::currentIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
