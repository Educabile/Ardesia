/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsWidgetItem.h'
**
** Created: Fri 4. May 12:29:42 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsWidgetItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsWidgetItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsWidgetItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      31,   21,   21,   21, 0x0a,
      42,   21,   21,   21, 0x0a,
      77,   72,   21,   21, 0x09,
     108,   21,   21,   21, 0x09,
     143,  140,   21,   21, 0x09,
     175,  171,   21,   21, 0x08,
     195,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsWidgetItem[] = {
    "UBGraphicsWidgetItem\0\0freeze()\0"
    "unFreeze()\0sendJSChangeBackgroundEvent()\0"
    "geom\0geometryChangeRequested(QRect)\0"
    "javaScriptWindowObjectCleared()\0ok\0"
    "mainFrameLoadFinished(bool)\0url\0"
    "onLinkClicked(QUrl)\0initialLayoutCompleted()\0"
};

void UBGraphicsWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsWidgetItem *_t = static_cast<UBGraphicsWidgetItem *>(_o);
        switch (_id) {
        case 0: _t->freeze(); break;
        case 1: _t->unFreeze(); break;
        case 2: _t->sendJSChangeBackgroundEvent(); break;
        case 3: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 4: _t->javaScriptWindowObjectCleared(); break;
        case 5: _t->mainFrameLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->initialLayoutCompleted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsWidgetItem::staticMetaObject = {
    { &QGraphicsWebView::staticMetaObject, qt_meta_stringdata_UBGraphicsWidgetItem,
      qt_meta_data_UBGraphicsWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsWidgetItem))
        return static_cast<void*>(const_cast< UBGraphicsWidgetItem*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsWidgetItem*>(this));
    if (!strcmp(_clname, "UBResizableGraphicsItem"))
        return static_cast< UBResizableGraphicsItem*>(const_cast< UBGraphicsWidgetItem*>(this));
    if (!strcmp(_clname, "UBGraphicsItem"))
        return static_cast< UBGraphicsItem*>(const_cast< UBGraphicsWidgetItem*>(this));
    return QGraphicsWebView::qt_metacast(_clname);
}

int UBGraphicsWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_UBGraphicsAppleWidgetItem[] = {

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

static const char qt_meta_stringdata_UBGraphicsAppleWidgetItem[] = {
    "UBGraphicsAppleWidgetItem\0"
};

void UBGraphicsAppleWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBGraphicsAppleWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsAppleWidgetItem::staticMetaObject = {
    { &UBGraphicsWidgetItem::staticMetaObject, qt_meta_stringdata_UBGraphicsAppleWidgetItem,
      qt_meta_data_UBGraphicsAppleWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsAppleWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsAppleWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsAppleWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsAppleWidgetItem))
        return static_cast<void*>(const_cast< UBGraphicsAppleWidgetItem*>(this));
    return UBGraphicsWidgetItem::qt_metacast(_clname);
}

int UBGraphicsAppleWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsWidgetItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBGraphicsW3CWidgetItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsW3CWidgetItem[] = {
    "UBGraphicsW3CWidgetItem\0\0"
    "javaScriptWindowObjectCleared()\0"
};

void UBGraphicsW3CWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsW3CWidgetItem *_t = static_cast<UBGraphicsW3CWidgetItem *>(_o);
        switch (_id) {
        case 0: _t->javaScriptWindowObjectCleared(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBGraphicsW3CWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsW3CWidgetItem::staticMetaObject = {
    { &UBGraphicsWidgetItem::staticMetaObject, qt_meta_stringdata_UBGraphicsW3CWidgetItem,
      qt_meta_data_UBGraphicsW3CWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsW3CWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsW3CWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsW3CWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsW3CWidgetItem))
        return static_cast<void*>(const_cast< UBGraphicsW3CWidgetItem*>(this));
    return UBGraphicsWidgetItem::qt_metacast(_clname);
}

int UBGraphicsW3CWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsWidgetItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
