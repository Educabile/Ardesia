/****************************************************************************
** Meta object code from reading C++ file 'UBDockPalette.h'
**
** Created: Fri 4. May 12:31:16 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDockPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDockPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTabDockPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_UBTabDockPalette[] = {
    "UBTabDockPalette\0"
};

void UBTabDockPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTabDockPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTabDockPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTabDockPalette,
      qt_meta_data_UBTabDockPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTabDockPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTabDockPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTabDockPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTabDockPalette))
        return static_cast<void*>(const_cast< UBTabDockPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTabDockPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBDockPalette[] = {

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
      22,   15,   14,   14, 0x0a,
      60,   15,   14,   14, 0x0a,
      98,   14,   14,   14, 0x0a,
     137,  123,   14,   14, 0x0a,
     169,   14,   14,   14, 0x08,
     197,  191,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDockPalette[] = {
    "UBDockPalette\0\0widget\0"
    "onShowTabWidget(UBDockPaletteWidget*)\0"
    "onHideTabWidget(UBDockPaletteWidget*)\0"
    "onAllDownloadsFinished()\0documentProxy\0"
    "onDocumentSet(UBDocumentProxy*)\0"
    "onToolbarPosUpdated()\0event\0"
    "onResizeRequest(QResizeEvent*)\0"
};

void UBDockPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDockPalette *_t = static_cast<UBDockPalette *>(_o);
        switch (_id) {
        case 0: _t->onShowTabWidget((*reinterpret_cast< UBDockPaletteWidget*(*)>(_a[1]))); break;
        case 1: _t->onHideTabWidget((*reinterpret_cast< UBDockPaletteWidget*(*)>(_a[1]))); break;
        case 2: _t->onAllDownloadsFinished(); break;
        case 3: _t->onDocumentSet((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 4: _t->onToolbarPosUpdated(); break;
        case 5: _t->onResizeRequest((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDockPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDockPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBDockPalette,
      qt_meta_data_UBDockPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDockPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDockPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDockPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDockPalette))
        return static_cast<void*>(const_cast< UBDockPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBDockPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
