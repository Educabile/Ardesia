/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsTextItem.h'
**
** Created: Mon 20. Nov 11:16:36 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsTextItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsTextItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsTextItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   71,   19,   19, 0x08,
      92,   19,   19,   19, 0x08,
     119,  111,   19,   19, 0x08,
     162,  147,   19,   19, 0x08,
     185,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsTextItem[] = {
    "UBGraphicsTextItem\0\0textItem\0"
    "textUndoCommandAdded(UBGraphicsTextItem*)\0"
    "url\0loadUrl(QString)\0undoCommandAdded()\0"
    "newSize\0documentSizeChanged(QSizeF)\0"
    "currentLinkUrl\0onLinkHovered(QString)\0"
    "changeHTMLMode()\0"
};

void UBGraphicsTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsTextItem *_t = static_cast<UBGraphicsTextItem *>(_o);
        switch (_id) {
        case 0: _t->textUndoCommandAdded((*reinterpret_cast< UBGraphicsTextItem*(*)>(_a[1]))); break;
        case 1: _t->loadUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->undoCommandAdded(); break;
        case 3: _t->documentSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 4: _t->onLinkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->changeHTMLMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsTextItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsTextItem::staticMetaObject = {
    { &QGraphicsTextItem::staticMetaObject, qt_meta_stringdata_UBGraphicsTextItem,
      qt_meta_data_UBGraphicsTextItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsTextItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsTextItem))
        return static_cast<void*>(const_cast< UBGraphicsTextItem*>(this));
    if (!strcmp(_clname, "UBItem"))
        return static_cast< UBItem*>(const_cast< UBGraphicsTextItem*>(this));
    if (!strcmp(_clname, "UBResizableGraphicsItem"))
        return static_cast< UBResizableGraphicsItem*>(const_cast< UBGraphicsTextItem*>(this));
    if (!strcmp(_clname, "UBGraphicsItem"))
        return static_cast< UBGraphicsItem*>(const_cast< UBGraphicsTextItem*>(this));
    return QGraphicsTextItem::qt_metacast(_clname);
}

int UBGraphicsTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UBGraphicsTextItem::textUndoCommandAdded(UBGraphicsTextItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
