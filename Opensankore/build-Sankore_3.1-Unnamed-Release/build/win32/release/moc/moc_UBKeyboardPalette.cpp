/****************************************************************************
** Meta object code from reading C++ file 'UBKeyboardPalette.h'
**
** Created: Fri 4. May 12:31:10 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBKeyboardPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBKeyboardPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBKeyboardPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      33,   18,   18,   18, 0x05,
      52,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   76,   18,   18, 0x08,
     109,  101,   18,   18, 0x08,
     130,  125,   18,   18, 0x08,
     175,  173,   18,   18, 0x08,
     193,   18,   18,   18, 0x08,
     214,  209,   18,   18, 0x08,
     233,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBKeyboardPalette[] = {
    "UBKeyboardPalette\0\0moved(QPoint)\0"
    "localeChanged(int)\0keyboardActivated(bool)\0"
    "pos\0syncPosition(QPoint)\0nLocale\0"
    "syncLocale(int)\0size\0"
    "keyboardPaletteButtonSizeChanged(QVariant)\0"
    "b\0onActivated(bool)\0onDeactivated()\0"
    "show\0showKeyboard(bool)\0hideKeyboard()\0"
};

void UBKeyboardPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBKeyboardPalette *_t = static_cast<UBKeyboardPalette *>(_o);
        switch (_id) {
        case 0: _t->moved((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->localeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->keyboardActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->syncPosition((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->syncLocale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->keyboardPaletteButtonSizeChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->onActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onDeactivated(); break;
        case 8: _t->showKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->hideKeyboard(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBKeyboardPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBKeyboardPalette::staticMetaObject = {
    { &UBActionPalette::staticMetaObject, qt_meta_stringdata_UBKeyboardPalette,
      qt_meta_data_UBKeyboardPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBKeyboardPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBKeyboardPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBKeyboardPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBKeyboardPalette))
        return static_cast<void*>(const_cast< UBKeyboardPalette*>(this));
    return UBActionPalette::qt_metacast(_clname);
}

int UBKeyboardPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBActionPalette::qt_metacall(_c, _id, _a);
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
void UBKeyboardPalette::moved(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBKeyboardPalette::localeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBKeyboardPalette::keyboardActivated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_UBKeyboardButton[] = {

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

static const char qt_meta_stringdata_UBKeyboardButton[] = {
    "UBKeyboardButton\0"
};

void UBKeyboardButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBKeyboardButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBKeyboardButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBKeyboardButton,
      qt_meta_data_UBKeyboardButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBKeyboardButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBKeyboardButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBKeyboardButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBKeyboardButton))
        return static_cast<void*>(const_cast< UBKeyboardButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBKeyboardButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBKeyButton[] = {

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

static const char qt_meta_stringdata_UBKeyButton[] = {
    "UBKeyButton\0"
};

void UBKeyButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBKeyButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBKeyButton::staticMetaObject = {
    { &UBKeyboardButton::staticMetaObject, qt_meta_stringdata_UBKeyButton,
      qt_meta_data_UBKeyButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBKeyButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBKeyButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBKeyButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBKeyButton))
        return static_cast<void*>(const_cast< UBKeyButton*>(this));
    return UBKeyboardButton::qt_metacast(_clname);
}

int UBKeyButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBKeyboardButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBCntrlButton[] = {

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

static const char qt_meta_stringdata_UBCntrlButton[] = {
    "UBCntrlButton\0"
};

void UBCntrlButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBCntrlButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCntrlButton::staticMetaObject = {
    { &UBKeyboardButton::staticMetaObject, qt_meta_stringdata_UBCntrlButton,
      qt_meta_data_UBCntrlButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCntrlButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCntrlButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCntrlButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCntrlButton))
        return static_cast<void*>(const_cast< UBCntrlButton*>(this));
    return UBKeyboardButton::qt_metacast(_clname);
}

int UBCntrlButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBKeyboardButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBCapsLockButton[] = {

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

static const char qt_meta_stringdata_UBCapsLockButton[] = {
    "UBCapsLockButton\0"
};

void UBCapsLockButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBCapsLockButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBCapsLockButton::staticMetaObject = {
    { &UBKeyboardButton::staticMetaObject, qt_meta_stringdata_UBCapsLockButton,
      qt_meta_data_UBCapsLockButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBCapsLockButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBCapsLockButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBCapsLockButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBCapsLockButton))
        return static_cast<void*>(const_cast< UBCapsLockButton*>(this));
    return UBKeyboardButton::qt_metacast(_clname);
}

int UBCapsLockButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBKeyboardButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBShiftButton[] = {

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

static const char qt_meta_stringdata_UBShiftButton[] = {
    "UBShiftButton\0"
};

void UBShiftButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBShiftButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBShiftButton::staticMetaObject = {
    { &UBKeyboardButton::staticMetaObject, qt_meta_stringdata_UBShiftButton,
      qt_meta_data_UBShiftButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBShiftButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBShiftButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBShiftButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBShiftButton))
        return static_cast<void*>(const_cast< UBShiftButton*>(this));
    return UBKeyboardButton::qt_metacast(_clname);
}

int UBShiftButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBKeyboardButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBLocaleButton[] = {

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

static const char qt_meta_stringdata_UBLocaleButton[] = {
    "UBLocaleButton\0"
};

void UBLocaleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBLocaleButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBLocaleButton::staticMetaObject = {
    { &UBKeyboardButton::staticMetaObject, qt_meta_stringdata_UBLocaleButton,
      qt_meta_data_UBLocaleButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBLocaleButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBLocaleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBLocaleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBLocaleButton))
        return static_cast<void*>(const_cast< UBLocaleButton*>(this));
    return UBKeyboardButton::qt_metacast(_clname);
}

int UBLocaleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBKeyboardButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
