/****************************************************************************
** Meta object code from reading C++ file 'UBApplicationController.h'
**
** Created: Mon 20. Nov 11:16:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBApplicationController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBApplicationController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBApplicationController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   25,   24,   24, 0x05,
      92,   82,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,  110,   24,   24, 0x0a,
     191,  174,   24,   24, 0x2a,
     233,  223,   24,   24, 0x0a,
     263,   24,   24,   24, 0x0a,
     308,  285,   24,   24, 0x0a,
     326,   24,   24,   24, 0x2a,
     340,   24,   24,   24, 0x0a,
     358,  354,   24,   24, 0x0a,
     379,   24,   24,   24, 0x0a,
     391,   24,   24,   24, 0x0a,
     404,   24,   24,   24, 0x0a,
     418,   24,   24,   24, 0x0a,
     433,   24,   24,   24, 0x0a,
     453,   24,   24,   24, 0x0a,
     474,   24,   24,   24, 0x0a,
     505,  496,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBApplicationController[] = {
    "UBApplicationController\0\0pMode\0"
    "mainModeChanged(UBApplicationController::MainMode)\0"
    "displayed\0desktopMode(bool)\0"
    "pPixmap,pageMode,sourceUrl\0"
    "addCapturedPixmap(QPixmap,bool,QUrl)\0"
    "pPixmap,pageMode\0addCapturedPixmap(QPixmap,bool)\0"
    "embedCode\0addCapturedEmbedCode(QString)\0"
    "screenLayoutChanged()\0dontSwitchFrontProcess\0"
    "showDesktop(bool)\0showDesktop()\0"
    "hideDesktop()\0use\0useMultiScreen(bool)\0"
    "actionCut()\0actionCopy()\0actionPaste()\0"
    "showTutorial()\0showSankoreEditor()\0"
    "checkUpdateRequest()\0checkUpdateAtLaunch()\0"
    "id,error\0updateRequestFinished(int,bool)\0"
};

void UBApplicationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBApplicationController *_t = static_cast<UBApplicationController *>(_o);
        switch (_id) {
        case 0: _t->mainModeChanged((*reinterpret_cast< UBApplicationController::MainMode(*)>(_a[1]))); break;
        case 1: _t->desktopMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->addCapturedPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 3: _t->addCapturedPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->addCapturedEmbedCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->screenLayoutChanged(); break;
        case 6: _t->showDesktop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showDesktop(); break;
        case 8: _t->hideDesktop(); break;
        case 9: _t->useMultiScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->actionCut(); break;
        case 11: _t->actionCopy(); break;
        case 12: _t->actionPaste(); break;
        case 13: _t->showTutorial(); break;
        case 14: _t->showSankoreEditor(); break;
        case 15: _t->checkUpdateRequest(); break;
        case 16: _t->checkUpdateAtLaunch(); break;
        case 17: _t->updateRequestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBApplicationController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBApplicationController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBApplicationController,
      qt_meta_data_UBApplicationController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBApplicationController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBApplicationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBApplicationController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBApplicationController))
        return static_cast<void*>(const_cast< UBApplicationController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBApplicationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void UBApplicationController::mainModeChanged(UBApplicationController::MainMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBApplicationController::desktopMode(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
