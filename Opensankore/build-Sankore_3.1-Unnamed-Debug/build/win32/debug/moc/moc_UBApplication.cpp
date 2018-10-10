/****************************************************************************
** Meta object code from reading C++ file 'UBApplication.h'
**
** Created: Mon 20. Nov 11:16:06 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBApplication.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBApplication[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      27,   14,   14,   14, 0x0a,
      42,   14,   14,   14, 0x0a,
      57,   14,   14,   14, 0x0a,
      71,   14,   14,   14, 0x0a,
      96,   84,   14,   14, 0x0a,
     137,  129,   14,   14, 0x0a,
     179,  173,   14,   14, 0x0a,
     218,  209,  204,   14, 0x0a,
     245,   14,   14,   14, 0x08,
     255,   14,   14,   14, 0x08,
     286,  277,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBApplication[] = {
    "UBApplication\0\0showBoard()\0showInternet()\0"
    "showDocument()\0startScript()\0stopScript()\0"
    "topOrBottom\0toolBarPositionChanged(QVariant)\0"
    "display\0toolBarDisplayTextChanged(QVariant)\0"
    "event\0closeEvent(QCloseEvent*)\0bool\0"
    "pMessage\0handleOpenMessage(QString)\0"
    "closing()\0importUniboardFiles()\0"
    "newCount\0onScreenCountChanged(int)\0"
};

void UBApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBApplication *_t = static_cast<UBApplication *>(_o);
        switch (_id) {
        case 0: _t->showBoard(); break;
        case 1: _t->showInternet(); break;
        case 2: _t->showDocument(); break;
        case 3: _t->startScript(); break;
        case 4: _t->stopScript(); break;
        case 5: _t->toolBarPositionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->toolBarDisplayTextChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->handleOpenMessage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->closing(); break;
        case 10: _t->importUniboardFiles(); break;
        case 11: _t->onScreenCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBApplication::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBApplication::staticMetaObject = {
    { &QtSingleApplication::staticMetaObject, qt_meta_stringdata_UBApplication,
      qt_meta_data_UBApplication, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBApplication::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBApplication))
        return static_cast<void*>(const_cast< UBApplication*>(this));
    return QtSingleApplication::qt_metacast(_clname);
}

int UBApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtSingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
