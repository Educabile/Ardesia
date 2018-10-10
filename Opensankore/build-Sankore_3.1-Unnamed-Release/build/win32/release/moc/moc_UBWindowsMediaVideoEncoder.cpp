/****************************************************************************
** Meta object code from reading C++ file 'UBWindowsMediaVideoEncoder.h'
**
** Created: Fri 4. May 12:32:33 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/windowsmedia/UBWindowsMediaVideoEncoder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWindowsMediaVideoEncoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWindowsMediaVideoEncoder[] = {

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
      30,   28,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBWindowsMediaVideoEncoder[] = {
    "UBWindowsMediaVideoEncoder\0\0,\0"
    "processAudioBuffer(WAVEHDR*,long)\0"
};

void UBWindowsMediaVideoEncoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWindowsMediaVideoEncoder *_t = static_cast<UBWindowsMediaVideoEncoder *>(_o);
        switch (_id) {
        case 0: _t->processAudioBuffer((*reinterpret_cast< WAVEHDR*(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWindowsMediaVideoEncoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWindowsMediaVideoEncoder::staticMetaObject = {
    { &UBAbstractVideoEncoder::staticMetaObject, qt_meta_stringdata_UBWindowsMediaVideoEncoder,
      qt_meta_data_UBWindowsMediaVideoEncoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWindowsMediaVideoEncoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWindowsMediaVideoEncoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWindowsMediaVideoEncoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWindowsMediaVideoEncoder))
        return static_cast<void*>(const_cast< UBWindowsMediaVideoEncoder*>(this));
    return UBAbstractVideoEncoder::qt_metacast(_clname);
}

int UBWindowsMediaVideoEncoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractVideoEncoder::qt_metacall(_c, _id, _a);
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
