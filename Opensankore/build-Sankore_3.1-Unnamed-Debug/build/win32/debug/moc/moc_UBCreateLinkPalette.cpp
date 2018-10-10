/****************************************************************************
** Meta object code from reading C++ file 'UBCreateLinkPalette.h'
**
** Created: Mon 20. Nov 11:17:57 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBCreateLinkPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBCreateLinkPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBCreateLinkLabel[] = {

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
      24,   19,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBCreateLinkLabel[] = {
    "UBCreateLinkLabel\0\0path\0droppedFile(QString&)\0"
};

void UBCreateLinkLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBCreateLinkLabel *_t = static_cast<UBCreateLinkLabel *>(_o);
        switch (_id) {
        case 0: _t->droppedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBCreateLinkLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCreateLinkLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UBCreateLinkLabel,
      qt_meta_data_UBCreateLinkLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCreateLinkLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCreateLinkLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCreateLinkLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCreateLinkLabel))
        return static_cast<void*>(const_cast< UBCreateLinkLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int UBCreateLinkLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void UBCreateLinkLabel::droppedFile(QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UBCreateLinkPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   20,   20,   20, 0x08,
      87,   20,   20,   20, 0x08,
     108,   20,   20,   20, 0x08,
     133,   20,   20,   20, 0x08,
     157,   20,   20,   20, 0x08,
     176,   20,   20,   20, 0x08,
     200,   20,   20,   20, 0x08,
     231,  223,   20,   20, 0x08,
     270,  265,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBCreateLinkPalette[] = {
    "UBCreateLinkPalette\0\0action\0"
    "definedAction(UBGraphicsItemAction*)\0"
    "onBackButtonClicked()\0onPlayAudioClicked()\0"
    "onAddLinkToPageClicked()\0"
    "onAddLinkToWebClicked()\0onOkAudioClicked()\0"
    "onOkLinkToPageClicked()\0onOkLinkToWebClicked()\0"
    "checked\0onPageNumberCheckBoxClicked(bool)\0"
    "path\0onDroppedAudioFile(QString&)\0"
};

void UBCreateLinkPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBCreateLinkPalette *_t = static_cast<UBCreateLinkPalette *>(_o);
        switch (_id) {
        case 0: _t->definedAction((*reinterpret_cast< UBGraphicsItemAction*(*)>(_a[1]))); break;
        case 1: _t->onBackButtonClicked(); break;
        case 2: _t->onPlayAudioClicked(); break;
        case 3: _t->onAddLinkToPageClicked(); break;
        case 4: _t->onAddLinkToWebClicked(); break;
        case 5: _t->onOkAudioClicked(); break;
        case 6: _t->onOkLinkToPageClicked(); break;
        case 7: _t->onOkLinkToWebClicked(); break;
        case 8: _t->onPageNumberCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onDroppedAudioFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBCreateLinkPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCreateLinkPalette::staticMetaObject = {
    { &UBFloatingPalette::staticMetaObject, qt_meta_stringdata_UBCreateLinkPalette,
      qt_meta_data_UBCreateLinkPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCreateLinkPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCreateLinkPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCreateLinkPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCreateLinkPalette))
        return static_cast<void*>(const_cast< UBCreateLinkPalette*>(this));
    return UBFloatingPalette::qt_metacast(_clname);
}

int UBCreateLinkPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBFloatingPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UBCreateLinkPalette::definedAction(UBGraphicsItemAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
