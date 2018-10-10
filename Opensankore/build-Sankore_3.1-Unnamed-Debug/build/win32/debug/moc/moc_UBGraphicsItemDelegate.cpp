/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsItemDelegate.h'
**
** Created: Mon 20. Nov 11:16:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DelegateButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,
      38,   15,   15,   15, 0x25,
      48,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DelegateButton[] = {
    "DelegateButton\0\0checked\0clicked(bool)\0"
    "clicked()\0longClicked()\0startShowProgress()\0"
};

void DelegateButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DelegateButton *_t = static_cast<DelegateButton *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->longClicked(); break;
        case 3: _t->startShowProgress(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DelegateButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DelegateButton::staticMetaObject = {
    { &QGraphicsSvgItem::staticMetaObject, qt_meta_stringdata_DelegateButton,
      qt_meta_data_DelegateButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DelegateButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DelegateButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DelegateButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateButton))
        return static_cast<void*>(const_cast< DelegateButton*>(this));
    return QGraphicsSvgItem::qt_metacast(_clname);
}

int DelegateButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSvgItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DelegateButton::clicked(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void DelegateButton::longClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_DelegateSpacer[] = {

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

static const char qt_meta_stringdata_DelegateSpacer[] = {
    "DelegateSpacer\0"
};

void DelegateSpacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DelegateSpacer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DelegateSpacer::staticMetaObject = {
    { &DelegateButton::staticMetaObject, qt_meta_stringdata_DelegateSpacer,
      qt_meta_data_DelegateSpacer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DelegateSpacer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DelegateSpacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DelegateSpacer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateSpacer))
        return static_cast<void*>(const_cast< DelegateSpacer*>(this));
    return DelegateButton::qt_metacast(_clname);
}

int DelegateSpacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DelegateButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DelegateMediaControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_DelegateMediaControl[] = {
    "DelegateMediaControl\0\0used()\0"
};

void DelegateMediaControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DelegateMediaControl *_t = static_cast<DelegateMediaControl *>(_o);
        switch (_id) {
        case 0: _t->used(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DelegateMediaControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DelegateMediaControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DelegateMediaControl,
      qt_meta_data_DelegateMediaControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DelegateMediaControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DelegateMediaControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DelegateMediaControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DelegateMediaControl))
        return static_cast<void*>(const_cast< DelegateMediaControl*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< DelegateMediaControl*>(this));
    return QObject::qt_metacast(_clname);
}

int DelegateMediaControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DelegateMediaControl::used()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBGraphicsItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x05,
      64,   57,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   82,   23,   23, 0x0a,
     103,   23,   23,   23, 0x2a,
     112,   23,   23,   23, 0x0a,
     128,  123,   23,   23, 0x0a,
     148,  143,   23,   23, 0x0a,
     159,   23,   23,   23, 0x0a,
     171,   23,   23,   23, 0x0a,
     190,   23,   23,   23, 0x0a,
     211,   23,   23,   23, 0x0a,
     231,   23,   23,   23, 0x0a,
     254,   23,   23,   23, 0x0a,
     270,   23,   23,   23, 0x0a,
     289,   23,   23,   23, 0x0a,
     306,   23,   23,   23, 0x09,
     326,   23,   23,   23, 0x08,
     347,   23,   23,   23, 0x08,
     379,   23,   23,   23, 0x08,
     410,  403,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsItemDelegate[] = {
    "UBGraphicsItemDelegate\0\0shown\0"
    "showOnDisplayChanged(bool)\0locked\0"
    "lockChanged(bool)\0canUndo\0remove(bool)\0"
    "remove()\0showMenu()\0show\0showHide(bool)\0"
    "lock\0lock(bool)\0duplicate()\0"
    "increaseZLevelUp()\0increaseZLevelDown()\0"
    "increaseZlevelTop()\0increaseZlevelBottom()\0"
    "onZoomChanged()\0flipHorizontally()\0"
    "flipVertically()\0gotoContentSource()\0"
    "onAddActionClicked()\0"
    "onReturnToCreationModeClicked()\0"
    "onRemoveActionClicked()\0action\0"
    "saveAction(UBGraphicsItemAction*)\0"
};

void UBGraphicsItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsItemDelegate *_t = static_cast<UBGraphicsItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->showOnDisplayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->lockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->remove(); break;
        case 4: _t->showMenu(); break;
        case 5: _t->showHide((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->lock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->duplicate(); break;
        case 8: _t->increaseZLevelUp(); break;
        case 9: _t->increaseZLevelDown(); break;
        case 10: _t->increaseZlevelTop(); break;
        case 11: _t->increaseZlevelBottom(); break;
        case 12: _t->onZoomChanged(); break;
        case 13: _t->flipHorizontally(); break;
        case 14: _t->flipVertically(); break;
        case 15: _t->gotoContentSource(); break;
        case 16: _t->onAddActionClicked(); break;
        case 17: _t->onReturnToCreationModeClicked(); break;
        case 18: _t->onRemoveActionClicked(); break;
        case 19: _t->saveAction((*reinterpret_cast< UBGraphicsItemAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsItemDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBGraphicsItemDelegate,
      qt_meta_data_UBGraphicsItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsItemDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int UBGraphicsItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void UBGraphicsItemDelegate::showOnDisplayChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBGraphicsItemDelegate::lockChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
