/****************************************************************************
** Meta object code from reading C++ file 'UBDrawingController.h'
**
** Created: Mon 20. Nov 11:16:03 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/board/UBDrawingController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDrawingController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDrawingController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x05,
      49,   20,   20,   20, 0x05,
      77,   71,   20,   20, 0x05,
     104,   71,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   20,   20,   20, 0x0a,
     172,   21,   20,   20, 0x0a,
     191,   71,   20,   20, 0x0a,
     214,   71,   20,   20, 0x0a,
     233,   71,   20,   20, 0x0a,
     258,   20,   20,   20, 0x0a,
     289,  281,   20,   20, 0x08,
     311,  281,   20,   20, 0x08,
     336,  281,   20,   20, 0x08,
     361,  281,   20,   20, 0x08,
     388,  281,   20,   20, 0x08,
     411,  281,   20,   20, 0x08,
     434,  281,   20,   20, 0x08,
     459,  281,   20,   20, 0x08,
     485,  281,   20,   20, 0x08,
     511,  281,   20,   20, 0x08,
     534,  281,   20,   20, 0x08,
     557,  281,   20,   20, 0x08,
     584,  281,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDrawingController[] = {
    "UBDrawingController\0\0tool\0"
    "stylusToolChanged(int)\0colorPaletteChanged()\0"
    "index\0lineWidthIndexChanged(int)\0"
    "colorIndexChanged(int)\0"
    "deactivateCreationModeForGraphicsPathItems()\0"
    "setStylusTool(int)\0setLineWidthIndex(int)\0"
    "setColorIndex(int)\0setEraserWidthIndex(int)\0"
    "onActiveSceneChanged()\0checked\0"
    "penToolSelected(bool)\0eraserToolSelected(bool)\0"
    "markerToolSelected(bool)\0"
    "selectorToolSelected(bool)\0"
    "playToolSelected(bool)\0handToolSelected(bool)\0"
    "zoomInToolSelected(bool)\0"
    "zoomOutToolSelected(bool)\0"
    "pointerToolSelected(bool)\0"
    "lineToolSelected(bool)\0textToolSelected(bool)\0"
    "richTextToolSelected(bool)\0"
    "captureToolSelected(bool)\0"
};

void UBDrawingController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDrawingController *_t = static_cast<UBDrawingController *>(_o);
        switch (_id) {
        case 0: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorPaletteChanged(); break;
        case 2: _t->lineWidthIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->colorIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deactivateCreationModeForGraphicsPathItems(); break;
        case 5: _t->setStylusTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setLineWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setEraserWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onActiveSceneChanged(); break;
        case 10: _t->penToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->eraserToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->markerToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->selectorToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->playToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->handToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->zoomInToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->zoomOutToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->pointerToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->lineToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->textToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->richTextToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->captureToolSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDrawingController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDrawingController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDrawingController,
      qt_meta_data_UBDrawingController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDrawingController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDrawingController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDrawingController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDrawingController))
        return static_cast<void*>(const_cast< UBDrawingController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDrawingController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void UBDrawingController::stylusToolChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDrawingController::colorPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBDrawingController::lineWidthIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBDrawingController::colorIndexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
