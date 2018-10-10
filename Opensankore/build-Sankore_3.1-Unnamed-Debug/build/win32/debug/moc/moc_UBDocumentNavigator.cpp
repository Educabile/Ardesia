/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentNavigator.h'
**
** Created: Mon 20. Nov 11:17:27 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDocumentNavigator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentNavigator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDocumentNavigator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   21,   20,   20, 0x0a,
      62,   55,   20,   20, 0x0a,
     109,  103,   20,   20, 0x0a,
     138,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentNavigator[] = {
    "UBDocumentNavigator\0\0index\0"
    "onScrollToSelectedPage(int)\0source\0"
    "generateThumbnails(UBDocumentContainer*)\0"
    "iPage\0updateSpecificThumbnail(int)\0"
    "activeSceneChanged()\0"
};

void UBDocumentNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentNavigator *_t = static_cast<UBDocumentNavigator *>(_o);
        switch (_id) {
        case 0: _t->onScrollToSelectedPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->generateThumbnails((*reinterpret_cast< UBDocumentContainer*(*)>(_a[1]))); break;
        case 2: _t->updateSpecificThumbnail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activeSceneChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentNavigator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentNavigator::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_UBDocumentNavigator,
      qt_meta_data_UBDocumentNavigator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentNavigator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentNavigator))
        return static_cast<void*>(const_cast< UBDocumentNavigator*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int UBDocumentNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
