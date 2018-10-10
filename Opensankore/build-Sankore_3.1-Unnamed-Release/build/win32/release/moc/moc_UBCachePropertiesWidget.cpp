/****************************************************************************
** Meta object code from reading C++ file 'UBCachePropertiesWidget.h'
**
** Created: Fri 4. May 12:31:28 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBCachePropertiesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBCachePropertiesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBCachePropertiesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   24,   24,   24, 0x0a,
      63,   24,   24,   24, 0x08,
      86,   80,   24,   24, 0x08,
     109,   24,   24,   24, 0x08,
     126,   24,   24,   24, 0x08,
     155,  147,   24,   24, 0x08,
     175,  147,   24,   24, 0x08,
     202,  196,   24,   24, 0x08,
     232,   24,   24,   24, 0x08,
     254,  249,   24,   24, 0x08,
     279,  273,   24,   24, 0x08,
     305,  299,   24,   24, 0x08,
     349,  341,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBCachePropertiesWidget[] = {
    "UBCachePropertiesWidget\0\0cacheListEmpty()\0"
    "updateCurrentCache()\0onCloseClicked()\0"
    "color\0syncCacheColor(QColor)\0"
    "onColorClicked()\0updateShapeButtons()\0"
    "newSize\0onWidthChanged(int)\0"
    "onHeightChanged(int)\0state\0"
    "onKeepAspectRatioChanged(int)\0"
    "onCacheEnabled()\0mode\0onModeChanged(int)\0"
    "alpha\0onAlphaChanged(int)\0event\0"
    "onControlViewResized(QResizeEvent*)\0"
    "newZoom\0onZoomChanged(qreal)\0"
};

void UBCachePropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBCachePropertiesWidget *_t = static_cast<UBCachePropertiesWidget *>(_o);
        switch (_id) {
        case 0: _t->cacheListEmpty(); break;
        case 1: _t->updateCurrentCache(); break;
        case 2: _t->onCloseClicked(); break;
        case 3: _t->syncCacheColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->onColorClicked(); break;
        case 5: _t->updateShapeButtons(); break;
        case 6: _t->onWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onKeepAspectRatioChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onCacheEnabled(); break;
        case 10: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onAlphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onControlViewResized((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 13: _t->onZoomChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBCachePropertiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCachePropertiesWidget::staticMetaObject = {
    { &UBDockPaletteWidget::staticMetaObject, qt_meta_stringdata_UBCachePropertiesWidget,
      qt_meta_data_UBCachePropertiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCachePropertiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCachePropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCachePropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCachePropertiesWidget))
        return static_cast<void*>(const_cast< UBCachePropertiesWidget*>(this));
    return UBDockPaletteWidget::qt_metacast(_clname);
}

int UBCachePropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDockPaletteWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void UBCachePropertiesWidget::cacheListEmpty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
