/****************************************************************************
** Meta object code from reading C++ file 'UBPodcastController.h'
**
** Created: Fri 4. May 12:32:23 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/podcast/UBPodcastController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBPodcastController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBPodcastController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      83,   80,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,   20,   20,   20, 0x0a,
     124,   20,   20,   20, 0x0a,
     131,   20,   20,   20, 0x0a,
     139,   20,   20,   20, 0x0a,
     157,  149,   20,   20, 0x0a,
     193,  186,   20,   20, 0x0a,
     219,  213,   20,   20, 0x0a,
     238,   20,   20,   20, 0x08,
     264,   20,   20,   20, 0x08,
     296,  289,   20,   20, 0x08,
     324,   20,   20,   20, 0x08,
     349,   20,   20,   20, 0x08,
     376,  370,   20,   20, 0x08,
     448,  438,   20,   20, 0x08,
     486,  477,   20,   20, 0x08,
     530,  522,   20,   20, 0x08,
     557,  554,   20,   20, 0x08,
     580,   20,   20,   20, 0x08,
     605,   20,   20,   20, 0x08,
     636,   20,   20,   20, 0x08,
     656,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBPodcastController[] = {
    "UBPodcastController\0\0"
    "recordingStateChanged(UBPodcastController::RecordingState)\0"
    "ms\0recordingProgressChanged(qint64)\0"
    "start()\0stop()\0pause()\0unpause()\0"
    "visible\0toggleRecordingPalette(bool)\0"
    "record\0recordToggled(bool)\0pause\0"
    "pauseToggled(bool)\0processWidgetPaintEvent()\0"
    "processScenePaintEvent()\0region\0"
    "sceneChanged(QList<QRectF>)\0"
    "sceneBackgroundChanged()\0activeSceneChanged()\0"
    "pMode\0"
    "applicationMainModeChanged(UBApplicationController::MainMode)\0"
    "displayed\0applicationDesktopMode(bool)\0"
    "pWebView\0webActiveWebPageChanged(WBWebView*)\0"
    "pStatus\0encodingStatus(QString)\0ok\0"
    "encodingFinished(bool)\0applicationAboutToQuit()\0"
    "groupActionTriggered(QAction*)\0"
    "actionToggled(bool)\0updateActionState()\0"
};

void UBPodcastController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPodcastController *_t = static_cast<UBPodcastController *>(_o);
        switch (_id) {
        case 0: _t->recordingStateChanged((*reinterpret_cast< UBPodcastController::RecordingState(*)>(_a[1]))); break;
        case 1: _t->recordingProgressChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->pause(); break;
        case 5: _t->unpause(); break;
        case 6: _t->toggleRecordingPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->recordToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->pauseToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->processWidgetPaintEvent(); break;
        case 10: _t->processScenePaintEvent(); break;
        case 11: _t->sceneChanged((*reinterpret_cast< const QList<QRectF>(*)>(_a[1]))); break;
        case 12: _t->sceneBackgroundChanged(); break;
        case 13: _t->activeSceneChanged(); break;
        case 14: _t->applicationMainModeChanged((*reinterpret_cast< UBApplicationController::MainMode(*)>(_a[1]))); break;
        case 15: _t->applicationDesktopMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->webActiveWebPageChanged((*reinterpret_cast< WBWebView*(*)>(_a[1]))); break;
        case 17: _t->encodingStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->encodingFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->applicationAboutToQuit(); break;
        case 20: _t->groupActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: _t->actionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->updateActionState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBPodcastController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPodcastController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBPodcastController,
      qt_meta_data_UBPodcastController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPodcastController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPodcastController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPodcastController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPodcastController))
        return static_cast<void*>(const_cast< UBPodcastController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBPodcastController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void UBPodcastController::recordingStateChanged(UBPodcastController::RecordingState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBPodcastController::recordingProgressChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
