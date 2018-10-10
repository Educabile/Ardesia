/****************************************************************************
** Meta object code from reading C++ file 'UBMediaWidget.h'
**
** Created: Mon 20. Nov 11:20:01 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/customWidgets/UBMediaWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBMediaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBMediaButton[] = {

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
      15,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBMediaButton[] = {
    "UBMediaButton\0\0clicked()\0"
};

void UBMediaButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBMediaButton *_t = static_cast<UBMediaButton *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBMediaButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBMediaButton::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UBMediaButton,
      qt_meta_data_UBMediaButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBMediaButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBMediaButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBMediaButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBMediaButton))
        return static_cast<void*>(const_cast< UBMediaButton*>(this));
    return QLabel::qt_metacast(_clname);
}

int UBMediaButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBMediaButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBMediaWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      35,   14,   14,   14, 0x08,
      70,   52,   14,   14, 0x08,
     120,  114,   14,   14, 0x08,
     159,  147,   14,   14, 0x08,
     180,  174,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBMediaWidget[] = {
    "UBMediaWidget\0\0onPlayStopClicked()\0"
    "onPauseClicked()\0newState,oldState\0"
    "onStateChanged(Phonon::State,Phonon::State)\0"
    "total\0onTotalTimeChanged(qint64)\0"
    "currentTime\0onTick(qint64)\0value\0"
    "onSliderChanged(int)\0"
};

void UBMediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBMediaWidget *_t = static_cast<UBMediaWidget *>(_o);
        switch (_id) {
        case 0: _t->onPlayStopClicked(); break;
        case 1: _t->onPauseClicked(); break;
        case 2: _t->onStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 3: _t->onTotalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->onTick((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->onSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBMediaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBMediaWidget::staticMetaObject = {
    { &UBActionableWidget::staticMetaObject, qt_meta_stringdata_UBMediaWidget,
      qt_meta_data_UBMediaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBMediaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBMediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBMediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBMediaWidget))
        return static_cast<void*>(const_cast< UBMediaWidget*>(this));
    return UBActionableWidget::qt_metacast(_clname);
}

int UBMediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBActionableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
