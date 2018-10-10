/****************************************************************************
** Meta object code from reading C++ file 'UBThumbnailWidget.h'
**
** Created: Fri 4. May 12:30:27 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBThumbnailWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBThumbnailWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBThumbnailWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      29,   18,   18,   18, 0x05,
      59,   48,   18,   18, 0x05,
      96,   48,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     143,  127,   18,   18, 0x0a,
     177,  168,   18,   18, 0x0a,
     239,  195,   18,   18, 0x0a,
     345,  311,   18,   18, 0x2a,
     435,  409,   18,   18, 0x2a,
     487,   18,   18,   18, 0x0a,
     502,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBThumbnailWidget[] = {
    "UBThumbnailWidget\0\0resized()\0"
    "selectionChanged()\0item,index\0"
    "mouseDoubleClick(QGraphicsItem*,int)\0"
    "mouseClick(QGraphicsItem*,int)\0"
    "pThumbnailWidth\0setThumbnailWidth(qreal)\0"
    "pSpacing\0setSpacing(qreal)\0"
    "pGraphicsItems,pItemPaths,pLabels,pMimeType\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>,QStringList,QString"
    ")\0"
    "pGraphicsItems,pItemPaths,pLabels\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>,QStringList)\0"
    "pGraphicsItems,pItemPaths\0"
    "setGraphicsItems(QList<QGraphicsItem*>,QList<QUrl>)\0"
    "refreshScene()\0sceneSelectionChanged()\0"
};

void UBThumbnailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBThumbnailWidget *_t = static_cast<UBThumbnailWidget *>(_o);
        switch (_id) {
        case 0: _t->resized(); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->mouseDoubleClick((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->mouseClick((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setThumbnailWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setSpacing((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 7: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 8: _t->setGraphicsItems((*reinterpret_cast< const QList<QGraphicsItem*>(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 9: _t->refreshScene(); break;
        case 10: _t->sceneSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBThumbnailWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBThumbnailWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_UBThumbnailWidget,
      qt_meta_data_UBThumbnailWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBThumbnailWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBThumbnailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBThumbnailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBThumbnailWidget))
        return static_cast<void*>(const_cast< UBThumbnailWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int UBThumbnailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void UBThumbnailWidget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UBThumbnailWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBThumbnailWidget::mouseDoubleClick(QGraphicsItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBThumbnailWidget::mouseClick(QGraphicsItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
