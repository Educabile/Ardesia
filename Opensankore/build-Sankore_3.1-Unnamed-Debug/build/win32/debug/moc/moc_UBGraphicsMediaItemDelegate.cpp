/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsMediaItemDelegate.h'
**
** Created: Mon 20. Nov 11:16:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsMediaItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsMediaItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsMediaItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      47,   42,   28,   28, 0x0a,
      76,   68,   28,   28, 0x09,
      89,   28,   28,   28, 0x29,
      98,   28,   28,   28, 0x09,
     134,  116,   28,   28, 0x09,
     181,   28,   28,   28, 0x09,
     217,  204,   28,   28, 0x09,
     242,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsMediaItemDelegate[] = {
    "UBGraphicsMediaItemDelegate\0\0toggleMute()\0"
    "time\0updateTicker(qint64)\0canUndo\0"
    "remove(bool)\0remove()\0togglePlayPause()\0"
    "newstate,oldstate\0"
    "mediaStateChanged(Phonon::State,Phonon::State)\0"
    "updatePlayPauseState()\0newTotalTime\0"
    "totalTimeChanged(qint64)\0hideToolBar()\0"
};

void UBGraphicsMediaItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsMediaItemDelegate *_t = static_cast<UBGraphicsMediaItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->toggleMute(); break;
        case 1: _t->updateTicker((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->remove(); break;
        case 4: _t->togglePlayPause(); break;
        case 5: _t->mediaStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 6: _t->updatePlayPauseState(); break;
        case 7: _t->totalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->hideToolBar(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsMediaItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsMediaItemDelegate::staticMetaObject = {
    { &UBGraphicsItemDelegate::staticMetaObject, qt_meta_stringdata_UBGraphicsMediaItemDelegate,
      qt_meta_data_UBGraphicsMediaItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsMediaItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsMediaItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsMediaItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsMediaItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsMediaItemDelegate*>(this));
    return UBGraphicsItemDelegate::qt_metacast(_clname);
}

int UBGraphicsMediaItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
