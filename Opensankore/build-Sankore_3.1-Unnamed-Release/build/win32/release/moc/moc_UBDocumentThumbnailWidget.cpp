/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentThumbnailWidget.h'
**
** Created: Fri 4. May 12:30:44 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDocumentThumbnailWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentThumbnailWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDocumentThumbnailWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   86,   26,   26, 0x0a,
     236,  202,   26,   26, 0x2a,
     326,  300,   26,   26, 0x2a,
     378,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentThumbnailWidget[] = {
    "UBDocumentThumbnailWidget\0\0"
    "proxy,source,target\0"
    "sceneDropped(UBDocumentProxy*,int,int)\0"
    "pGraphicsItems,pItemPaths,pLabels,pMimeType\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>,QStringList,QString"
    ")\0"
    "pGraphicsItems,pItemPaths,pLabels\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>,QStringList)\0"
    "pGraphicsItems,pItemPaths\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>)\0"
    "autoScroll()\0"
};

void UBDocumentThumbnailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentThumbnailWidget *_t = static_cast<UBDocumentThumbnailWidget *>(_o);
        switch (_id) {
        case 0: _t->sceneDropped((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 3: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 4: _t->autoScroll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentThumbnailWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentThumbnailWidget::staticMetaObject = {
    { &UBThumbnailWidget::staticMetaObject, qt_meta_stringdata_UBDocumentThumbnailWidget,
      qt_meta_data_UBDocumentThumbnailWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentThumbnailWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentThumbnailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentThumbnailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentThumbnailWidget))
        return static_cast<void*>(const_cast< UBDocumentThumbnailWidget*>(this));
    return UBThumbnailWidget::qt_metacast(_clname);
}

int UBDocumentThumbnailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBThumbnailWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UBDocumentThumbnailWidget::sceneDropped(UBDocumentProxy * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
