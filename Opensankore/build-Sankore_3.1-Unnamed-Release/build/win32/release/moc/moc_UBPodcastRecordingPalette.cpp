/****************************************************************************
** Meta object code from reading C++ file 'UBPodcastRecordingPalette.h'
**
** Created: Fri 4. May 12:32:26 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/UBPodcastRecordingPalette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBPodcastRecordingPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBPodcastRecordingPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      89,   86,   26,   26, 0x0a,
     128,  122,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBPodcastRecordingPalette[] = {
    "UBPodcastRecordingPalette\0\0"
    "recordingStateChanged(UBPodcastController::RecordingState)\0"
    "ms\0recordingProgressChanged(qint64)\0"
    "level\0audioLevelChanged(quint8)\0"
};

void UBPodcastRecordingPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPodcastRecordingPalette *_t = static_cast<UBPodcastRecordingPalette *>(_o);
        switch (_id) {
        case 0: _t->recordingStateChanged((*reinterpret_cast< UBPodcastController::RecordingState(*)>(_a[1]))); break;
        case 1: _t->recordingProgressChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->audioLevelChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBPodcastRecordingPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPodcastRecordingPalette::staticMetaObject = {
    { &UBActionPalette::staticMetaObject, qt_meta_stringdata_UBPodcastRecordingPalette,
      qt_meta_data_UBPodcastRecordingPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPodcastRecordingPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPodcastRecordingPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPodcastRecordingPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPodcastRecordingPalette))
        return static_cast<void*>(const_cast< UBPodcastRecordingPalette*>(this));
    return UBActionPalette::qt_metacast(_clname);
}

int UBPodcastRecordingPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBActionPalette::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
