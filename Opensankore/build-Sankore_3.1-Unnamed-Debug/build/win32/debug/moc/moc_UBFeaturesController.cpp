/****************************************************************************
** Meta object code from reading C++ file 'UBFeaturesController.h'
**
** Created: Mon 20. Nov 11:16:04 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/board/UBFeaturesController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBFeaturesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBFeaturesComputingThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   27,   26,   26, 0x05,
      59,   26,   26,   26, 0x05,
      73,   26,   26,   26, 0x05,
      87,   26,   26,   26, 0x05,
     106,  102,   26,   26, 0x05,
     138,  134,   26,   26, 0x05,
     160,  134,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesComputingThread[] = {
    "UBFeaturesComputingThread\0\0pFeature\0"
    "sendFeature(UBFeature)\0featureSent()\0"
    "scanStarted()\0scanFinished()\0max\0"
    "maxFilesCountEvaluated(int)\0str\0"
    "scanCategory(QString)\0scanPath(QString)\0"
};

void UBFeaturesComputingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesComputingThread *_t = static_cast<UBFeaturesComputingThread *>(_o);
        switch (_id) {
        case 0: _t->sendFeature((*reinterpret_cast< UBFeature(*)>(_a[1]))); break;
        case 1: _t->featureSent(); break;
        case 2: _t->scanStarted(); break;
        case 3: _t->scanFinished(); break;
        case 4: _t->maxFilesCountEvaluated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->scanCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->scanPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesComputingThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesComputingThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UBFeaturesComputingThread,
      qt_meta_data_UBFeaturesComputingThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesComputingThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesComputingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesComputingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesComputingThread))
        return static_cast<void*>(const_cast< UBFeaturesComputingThread*>(this));
    return QThread::qt_metacast(_clname);
}

int UBFeaturesComputingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesComputingThread::sendFeature(UBFeature _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesComputingThread::featureSent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBFeaturesComputingThread::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBFeaturesComputingThread::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBFeaturesComputingThread::maxFilesCountEvaluated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBFeaturesComputingThread::scanCategory(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UBFeaturesComputingThread::scanPath(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_UBFeaturesController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,
      57,   21,   21,   21, 0x05,
      71,   21,   21,   21, 0x05,
      86,   21,   21,   21, 0x05,
     111,   21,   21,   21, 0x05,
     133,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,  151,   21,   21, 0x08,
     188,  178,   21,   21, 0x08,
     220,   21,   21,   21, 0x08,
     233,  229,   21,   21, 0x08,
     270,  261,   21,   21, 0x0a,
     324,  310,  305,   21, 0x0a,
     372,  310,  305,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesController[] = {
    "UBFeaturesController\0\0pLimit\0"
    "maxFilesCountEvaluated(int)\0scanStarted()\0"
    "scanFinished()\0featureAddedFromThread()\0"
    "scanCategory(QString)\0scanPath(QString)\0"
    "name\0addNewFolder(QString)\0name,from\0"
    "addNewFolder(QString,UBFeature)\0"
    "scanFS()\0str\0createNpApiFeature(QString)\0"
    "features\0restoreFeature(QVector<UBFeature>)\0"
    "bool\0feature,entry\0"
    "restoreFolderFeature(UBFeature&,RegisteryEntry)\0"
    "restoreFileFeature(UBFeature&,RegisteryEntry)\0"
};

void UBFeaturesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesController *_t = static_cast<UBFeaturesController *>(_o);
        switch (_id) {
        case 0: _t->maxFilesCountEvaluated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->scanStarted(); break;
        case 2: _t->scanFinished(); break;
        case 3: _t->featureAddedFromThread(); break;
        case 4: _t->scanCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->scanPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addNewFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->addNewFolder((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const UBFeature(*)>(_a[2]))); break;
        case 8: _t->scanFS(); break;
        case 9: _t->createNpApiFeature((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->restoreFeature((*reinterpret_cast< const QVector<UBFeature>(*)>(_a[1]))); break;
        case 11: { bool _r = _t->restoreFolderFeature((*reinterpret_cast< UBFeature(*)>(_a[1])),(*reinterpret_cast< RegisteryEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->restoreFileFeature((*reinterpret_cast< UBFeature(*)>(_a[1])),(*reinterpret_cast< RegisteryEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBFeaturesController,
      qt_meta_data_UBFeaturesController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesController))
        return static_cast<void*>(const_cast< UBFeaturesController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBFeaturesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesController::maxFilesCountEvaluated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesController::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBFeaturesController::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBFeaturesController::featureAddedFromThread()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBFeaturesController::scanCategory(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBFeaturesController::scanPath(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
