/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsScene.h'
**
** Created: Fri 4. May 12:29:36 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBZLayerController[] = {

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

static const char qt_meta_stringdata_UBZLayerController[] = {
    "UBZLayerController\0"
};

void UBZLayerController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBZLayerController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBZLayerController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBZLayerController,
      qt_meta_data_UBZLayerController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBZLayerController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBZLayerController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBZLayerController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBZLayerController))
        return static_cast<void*>(const_cast< UBZLayerController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBZLayerController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBGraphicsScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   16,   16,   16, 0x0a,
      48,   16,   16,   16, 0x0a,
      80,   61,   16,   16, 0x0a,
     110,  105,   16,   16, 0x0a,
     154,  141,   16,   16, 0x0a,
     175,   16,   16,   16, 0x0a,
     266,  216,  194,   16, 0x0a,
     355,  319,  194,   16, 0x2a,
     427,  403,  194,   16, 0x2a,
     488,  469,  194,   16, 0x2a,
     531,  522,   16,   16, 0x0a,
     578,  573,   16,   16, 0x0a,
     597,   16,   16,   16, 0x0a,
     626,   16,   16,   16, 0x0a,
     651,   16,   16,   16, 0x0a,
     684,  667,   16,   16, 0x0a,
     718,  711,   16,   16, 0x2a,
     740,   16,   16,   16, 0x0a,
     757,   16,   16,   16, 0x0a,
     775,   16,   16,   16, 0x0a,
     799,  794,   16,   16, 0x0a,
     835,  824,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsScene[] = {
    "UBGraphicsScene\0\0pageSizeChanged()\0"
    "initStroke()\0hideEraser()\0pIsDark,pIsCrossed\0"
    "setBackground(bool,bool)\0zoom\0"
    "setBackgroundZoomFactor(qreal)\0"
    "bModeDesktop\0setDrawingMode(bool)\0"
    "deselectAllItems()\0UBGraphicsPixmapItem*\0"
    "pPixmap,replaceFor,pPos,scaleFactor,pUseAnimation\0"
    "addPixmap(QPixmap,QGraphicsItem*,QPointF,qreal,bool)\0"
    "pPixmap,replaceFor,pPos,scaleFactor\0"
    "addPixmap(QPixmap,QGraphicsItem*,QPointF,qreal)\0"
    "pPixmap,replaceFor,pPos\0"
    "addPixmap(QPixmap,QGraphicsItem*,QPointF)\0"
    "pPixmap,replaceFor\0addPixmap(QPixmap,QGraphicsItem*)\0"
    "textItem\0textUndoCommandAdded(UBGraphicsTextItem*)\0"
    "tool\0setToolCursor(int)\0"
    "selectionChangedProcessing()\0"
    "updateGroupButtonState()\0moveMagnifier()\0"
    "newPos,forceGrab\0moveMagnifier(QPoint,bool)\0"
    "newPos\0moveMagnifier(QPoint)\0"
    "closeMagnifier()\0zoomInMagnifier()\0"
    "zoomOutMagnifier()\0mode\0"
    "changeMagnifierMode(int)\0newPercent\0"
    "resizedMagnifier(qreal)\0"
};

void UBGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsScene *_t = static_cast<UBGraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->pageSizeChanged(); break;
        case 1: _t->initStroke(); break;
        case 2: _t->hideEraser(); break;
        case 3: _t->setBackground((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setBackgroundZoomFactor((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setDrawingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->deselectAllItems(); break;
        case 7: { UBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< UBGraphicsPixmapItem**>(_a[0]) = _r; }  break;
        case 8: { UBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< UBGraphicsPixmapItem**>(_a[0]) = _r; }  break;
        case 9: { UBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< UBGraphicsPixmapItem**>(_a[0]) = _r; }  break;
        case 10: { UBGraphicsPixmapItem* _r = _t->addPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< UBGraphicsPixmapItem**>(_a[0]) = _r; }  break;
        case 11: _t->textUndoCommandAdded((*reinterpret_cast< UBGraphicsTextItem*(*)>(_a[1]))); break;
        case 12: _t->setToolCursor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->selectionChangedProcessing(); break;
        case 14: _t->updateGroupButtonState(); break;
        case 15: _t->moveMagnifier(); break;
        case 16: _t->moveMagnifier((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->moveMagnifier((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 18: _t->closeMagnifier(); break;
        case 19: _t->zoomInMagnifier(); break;
        case 20: _t->zoomOutMagnifier(); break;
        case 21: _t->changeMagnifierMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->resizedMagnifier((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsScene::staticMetaObject = {
    { &UBCoreGraphicsScene::staticMetaObject, qt_meta_stringdata_UBGraphicsScene,
      qt_meta_data_UBGraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsScene))
        return static_cast<void*>(const_cast< UBGraphicsScene*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsScene*>(this));
    return UBCoreGraphicsScene::qt_metacast(_clname);
}

int UBGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBCoreGraphicsScene::qt_metacall(_c, _id, _a);
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
void UBGraphicsScene::pageSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
