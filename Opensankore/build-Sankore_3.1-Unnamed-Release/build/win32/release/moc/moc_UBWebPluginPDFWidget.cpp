/****************************************************************************
** Meta object code from reading C++ file 'UBWebPluginPDFWidget.h'
**
** Created: Fri 4. May 12:32:21 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/pdf/UBWebPluginPDFWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWebPluginPDFWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWebPluginPDFWidget[] = {

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
      22,   21,   21,   21, 0x0a,
      31,   21,   21,   21, 0x0a,
      46,   21,   41,   21, 0x09,
      61,   21,   41,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UBWebPluginPDFWidget[] = {
    "UBWebPluginPDFWidget\0\0zoomIn()\0zoomOut()\0"
    "bool\0previousPage()\0nextPage()\0"
};

void UBWebPluginPDFWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWebPluginPDFWidget *_t = static_cast<UBWebPluginPDFWidget *>(_o);
        switch (_id) {
        case 0: _t->zoomIn(); break;
        case 1: _t->zoomOut(); break;
        case 2: { bool _r = _t->previousPage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->nextPage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWebPluginPDFWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWebPluginPDFWidget::staticMetaObject = {
    { &UBWebPluginWidget::staticMetaObject, qt_meta_stringdata_UBWebPluginPDFWidget,
      qt_meta_data_UBWebPluginPDFWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWebPluginPDFWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWebPluginPDFWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWebPluginPDFWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWebPluginPDFWidget))
        return static_cast<void*>(const_cast< UBWebPluginPDFWidget*>(this));
    return UBWebPluginWidget::qt_metacast(_clname);
}

int UBWebPluginPDFWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBWebPluginWidget::qt_metacall(_c, _id, _a);
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
