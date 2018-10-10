/****************************************************************************
** Meta object code from reading C++ file 'UBDockPaletteWidget.h'
**
** Created: Mon 20. Nov 11:17:29 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDockPaletteWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDockPaletteWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDockPaletteWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   21,   20,   20, 0x05,
      58,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   88,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDockPaletteWidget[] = {
    "UBDockPaletteWidget\0\0widget\0"
    "hideTab(UBDockPaletteWidget*)\0"
    "showTab(UBDockPaletteWidget*)\0newMode\0"
    "slot_changeMode(eUBDockPaletteWidgetMode)\0"
};

void UBDockPaletteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDockPaletteWidget *_t = static_cast<UBDockPaletteWidget *>(_o);
        switch (_id) {
        case 0: _t->hideTab((*reinterpret_cast< UBDockPaletteWidget*(*)>(_a[1]))); break;
        case 1: _t->showTab((*reinterpret_cast< UBDockPaletteWidget*(*)>(_a[1]))); break;
        case 2: _t->slot_changeMode((*reinterpret_cast< eUBDockPaletteWidgetMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDockPaletteWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDockPaletteWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBDockPaletteWidget,
      qt_meta_data_UBDockPaletteWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDockPaletteWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDockPaletteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDockPaletteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDockPaletteWidget))
        return static_cast<void*>(const_cast< UBDockPaletteWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBDockPaletteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBDockPaletteWidget::hideTab(UBDockPaletteWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDockPaletteWidget::showTab(UBDockPaletteWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
