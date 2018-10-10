/****************************************************************************
** Meta object code from reading C++ file 'UBPageNavigationWidget.h'
**
** Created: Fri 4. May 12:31:22 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBPageNavigationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBPageNavigationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBPageNavigationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   59,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBPageNavigationWidget[] = {
    "UBPageNavigationWidget\0\0event\0"
    "resizeRequest(QResizeEvent*)\0current,total\0"
    "setPageNumber(int,int)\0"
};

void UBPageNavigationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPageNavigationWidget *_t = static_cast<UBPageNavigationWidget *>(_o);
        switch (_id) {
        case 0: _t->resizeRequest((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->setPageNumber((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBPageNavigationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPageNavigationWidget::staticMetaObject = {
    { &UBDockPaletteWidget::staticMetaObject, qt_meta_stringdata_UBPageNavigationWidget,
      qt_meta_data_UBPageNavigationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPageNavigationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPageNavigationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPageNavigationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPageNavigationWidget))
        return static_cast<void*>(const_cast< UBPageNavigationWidget*>(this));
    return UBDockPaletteWidget::qt_metacast(_clname);
}

int UBPageNavigationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDockPaletteWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UBPageNavigationWidget::resizeRequest(QResizeEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
