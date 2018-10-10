/****************************************************************************
** Meta object code from reading C++ file 'UBDesktopAnnotationController.h'
**
** Created: Mon 20. Nov 11:18:42 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/desktop/UBDesktopAnnotationController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDesktopAnnotationController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDesktopAnnotationController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      56,   31,   30,   30, 0x05,
      84,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     102,   30,   30,   30, 0x0a,
     124,   30,   30,   30, 0x0a,
     139,   30,   30,   30, 0x0a,
     155,   30,   30,   30, 0x0a,
     171,   30,   30,   30, 0x0a,
     196,  187,   30,   30, 0x0a,
     222,   30,   30,   30, 0x0a,
     235,  230,   30,   30, 0x0a,
     258,   30,   30,   30, 0x0a,
     285,  277,   30,   30, 0x08,
     315,  277,   30,   30, 0x08,
     348,  277,   30,   30, 0x08,
     381,   30,   30,   30, 0x08,
     407,   30,   30,   30, 0x08,
     426,   30,   30,   30, 0x08,
     448,   30,   30,   30, 0x08,
     470,   30,   30,   30, 0x08,
     490,   30,   30,   30, 0x08,
     513,   30,   30,   30, 0x08,
     536,   30,   30,   30, 0x08,
     560,   30,   30,   30, 0x08,
     585,   30,   30,   30, 0x08,
     608,   30,   30,   30, 0x08,
     632,  230,   30,   30, 0x08,
     650,   30,   30,   30, 0x08,
     678,   30,   30,   30, 0x08,
     705,   30,   30,   30, 0x08,
     734,   30,   30,   30, 0x08,
     748,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDesktopAnnotationController[] = {
    "UBDesktopAnnotationController\0\0"
    "pCapturedPixmap,pageMode\0"
    "imageCaptured(QPixmap,bool)\0"
    "restoreUniboard()\0screenLayoutChanged()\0"
    "goToUniboard()\0customCapture()\0"
    "windowCapture()\0screenCapture()\0"
    "pEnabled\0updateShowHideState(bool)\0"
    "close()\0tool\0stylusToolChanged(int)\0"
    "updateBackground()\0checked\0"
    "desktopPenActionToggled(bool)\0"
    "desktopMarkerActionToggled(bool)\0"
    "desktopEraserActionToggled(bool)\0"
    "eraseDesktopAnnotations()\0penActionPressed()\0"
    "markerActionPressed()\0eraserActionPressed()\0"
    "penActionReleased()\0markerActionReleased()\0"
    "eraserActionReleased()\0selectorActionPressed()\0"
    "selectorActionReleased()\0"
    "pointerActionPressed()\0pointerActionReleased()\0"
    "switchCursor(int)\0onDesktopPaletteMaximized()\0"
    "onDesktopPaletteMinimize()\0"
    "onTransparentWidgetResized()\0refreshMask()\0"
    "onToolClicked()\0"
};

void UBDesktopAnnotationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDesktopAnnotationController *_t = static_cast<UBDesktopAnnotationController *>(_o);
        switch (_id) {
        case 0: _t->imageCaptured((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->restoreUniboard(); break;
        case 2: _t->screenLayoutChanged(); break;
        case 3: _t->goToUniboard(); break;
        case 4: _t->customCapture(); break;
        case 5: _t->windowCapture(); break;
        case 6: _t->screenCapture(); break;
        case 7: _t->updateShowHideState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->close(); break;
        case 9: _t->stylusToolChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateBackground(); break;
        case 11: _t->desktopPenActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->desktopMarkerActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->desktopEraserActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->eraseDesktopAnnotations(); break;
        case 15: _t->penActionPressed(); break;
        case 16: _t->markerActionPressed(); break;
        case 17: _t->eraserActionPressed(); break;
        case 18: _t->penActionReleased(); break;
        case 19: _t->markerActionReleased(); break;
        case 20: _t->eraserActionReleased(); break;
        case 21: _t->selectorActionPressed(); break;
        case 22: _t->selectorActionReleased(); break;
        case 23: _t->pointerActionPressed(); break;
        case 24: _t->pointerActionReleased(); break;
        case 25: _t->switchCursor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->onDesktopPaletteMaximized(); break;
        case 27: _t->onDesktopPaletteMinimize(); break;
        case 28: _t->onTransparentWidgetResized(); break;
        case 29: _t->refreshMask(); break;
        case 30: _t->onToolClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDesktopAnnotationController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDesktopAnnotationController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDesktopAnnotationController,
      qt_meta_data_UBDesktopAnnotationController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDesktopAnnotationController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDesktopAnnotationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDesktopAnnotationController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDesktopAnnotationController))
        return static_cast<void*>(const_cast< UBDesktopAnnotationController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDesktopAnnotationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void UBDesktopAnnotationController::imageCaptured(const QPixmap & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDesktopAnnotationController::restoreUniboard()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
