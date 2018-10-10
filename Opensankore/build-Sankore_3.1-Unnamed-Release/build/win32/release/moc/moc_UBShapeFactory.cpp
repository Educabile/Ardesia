/****************************************************************************
** Meta object code from reading C++ file 'UBShapeFactory.h'
**
** Created: Fri 4. May 12:30:10 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBShapeFactory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBShapeFactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBShapeFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   16,   15,   15, 0x0a,
      59,   52,   15,   15, 0x0a,
      79,   52,   15,   15, 0x0a,
      99,   52,   15,   15, 0x0a,
     118,   52,   15,   15, 0x0a,
     140,   52,   15,   15, 0x0a,
     159,   52,   15,   15, 0x0a,
     176,   52,   15,   15, 0x0a,
     192,   15,   15,   15, 0x0a,
     216,  212,   15,   15, 0x0a,
     247,  241,   15,   15, 0x0a,
     273,  241,   15,   15, 0x0a,
     300,  241,   15,   15, 0x0a,
     329,   15,   15,   15, 0x0a,
     343,   15,   15,   15, 0x0a,
     369,  360,   15,   15, 0x0a,
     404,  398,   15,   15, 0x0a,
     437,  427,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBShapeFactory[] = {
    "UBShapeFactory\0\0nVertices\0"
    "createRegularPolygon(int)\0create\0"
    "createEllipse(bool)\0createPolygon(bool)\0"
    "createCircle(bool)\0createRectangle(bool)\0"
    "createSquare(bool)\0createLine(bool)\0"
    "createPen(bool)\0prepareChangeFill()\0"
    "pos\0changeFillColor(QPointF)\0event\0"
    "onMouseMove(QMouseEvent*)\0"
    "onMousePress(QMouseEvent*)\0"
    "onMouseRelease(QMouseEvent*)\0desactivate()\0"
    "terminateShape()\0penStyle\0"
    "setStrokeStyle(Qt::PenStyle)\0color\0"
    "setStrokeColor(QColor)\0thickness\0"
    "setThickness(int)\0"
};

void UBShapeFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBShapeFactory *_t = static_cast<UBShapeFactory *>(_o);
        switch (_id) {
        case 0: _t->createRegularPolygon((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->createEllipse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->createPolygon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->createCircle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->createRectangle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->createSquare((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->createLine((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->createPen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->prepareChangeFill(); break;
        case 9: _t->changeFillColor((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 10: _t->onMouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->onMousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->onMouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: _t->desactivate(); break;
        case 14: _t->terminateShape(); break;
        case 15: _t->setStrokeStyle((*reinterpret_cast< Qt::PenStyle(*)>(_a[1]))); break;
        case 16: _t->setStrokeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 17: _t->setThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBShapeFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBShapeFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBShapeFactory,
      qt_meta_data_UBShapeFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBShapeFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBShapeFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBShapeFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBShapeFactory))
        return static_cast<void*>(const_cast< UBShapeFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int UBShapeFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
