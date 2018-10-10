/****************************************************************************
** Meta object code from reading C++ file 'UBFeaturesWidget.h'
**
** Created: Mon 20. Nov 11:17:37 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBFeaturesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBFeaturesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBFeaturesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x05,
      59,   52,   17,   17, 0x05,
      86,   52,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     193,  110,   17,   17, 0x08,
     267,   17,   17,   17, 0x08,
     296,   17,   17,   17, 0x08,
     319,   17,   17,   17, 0x08,
     337,   17,   17,   17, 0x08,
     379,   17,   17,   17, 0x08,
     420,   17,   17,   17, 0x08,
     466,   17,   17,   17, 0x08,
     518,  507,   17,   17, 0x08,
     585,   17,   17,   17, 0x08,
     609,   17,   17,   17, 0x08,
     638,   17,   17,   17, 0x08,
     663,   17,   17,   17, 0x08,
     683,  677,   17,   17, 0x08,
     716,  696,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesWidget[] = {
    "UBFeaturesWidget\0\0lst\0"
    "sendFileNameList(QStringList)\0pAllow\0"
    "allowNewFolderButton(bool)\0"
    "allowDeleteButton(bool)\0"
    "id,pSuccess,sourceUrl,originalUrl,pContentTypeHeader,pData,pPos,pSize,"
    "isBackground\0"
    "onPreviewLoaded(int,bool,QUrl,QUrl,QString,QByteArray,QPointF,QSize,bo"
    "ol)\0"
    "currentSelected(QModelIndex)\0"
    "searchStarted(QString)\0createNewFolder()\0"
    "deleteElements(const UBFeaturesMimeData*)\0"
    "addToFavorite(const UBFeaturesMimeData*)\0"
    "removeFromFavorite(const UBFeaturesMimeData*)\0"
    "onDisplayMetadata(QMap<QString,QString>)\0"
    ",,,,pTitle\0"
    "onAddDownloadedFileToLibrary(bool,QUrl,QString,QByteArray,QString)\0"
    "addElementsToFavorite()\0"
    "removeElementsFromFavorite()\0"
    "deleteSelectedElements()\0rescanModel()\0"
    "pLock\0lockIt(bool)\0selected,deselected\0"
    "processViewSelectionChanged(QItemSelection,QItemSelection)\0"
};

void UBFeaturesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesWidget *_t = static_cast<UBFeaturesWidget *>(_o);
        switch (_id) {
        case 0: _t->sendFileNameList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->allowNewFolderButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->allowDeleteButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPreviewLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3])),(*reinterpret_cast< QUrl(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< QPointF(*)>(_a[7])),(*reinterpret_cast< QSize(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 4: _t->currentSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->searchStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->createNewFolder(); break;
        case 7: _t->deleteElements((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 8: _t->addToFavorite((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 9: _t->removeFromFavorite((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 10: _t->onDisplayMetadata((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 11: _t->onAddDownloadedFileToLibrary((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 12: _t->addElementsToFavorite(); break;
        case 13: _t->removeElementsFromFavorite(); break;
        case 14: _t->deleteSelectedElements(); break;
        case 15: _t->rescanModel(); break;
        case 16: _t->lockIt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->processViewSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesWidget::staticMetaObject = {
    { &UBDockPaletteWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesWidget,
      qt_meta_data_UBFeaturesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesWidget))
        return static_cast<void*>(const_cast< UBFeaturesWidget*>(this));
    return UBDockPaletteWidget::qt_metacast(_clname);
}

int UBFeaturesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDockPaletteWidget::qt_metacall(_c, _id, _a);
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
void UBFeaturesWidget::sendFileNameList(const QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesWidget::allowNewFolderButton(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBFeaturesWidget::allowDeleteButton(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_UBFeaturesMimeData[] = {

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

static const char qt_meta_stringdata_UBFeaturesMimeData[] = {
    "UBFeaturesMimeData\0"
};

void UBFeaturesMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_UBFeaturesMimeData,
      qt_meta_data_UBFeaturesMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesMimeData))
        return static_cast<void*>(const_cast< UBFeaturesMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int UBFeaturesMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesListView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   19,   19,   19, 0x08,
      90,   19,   19,   19, 0x08,
     109,   19,   19,   19, 0x08,
     130,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesListView[] = {
    "UBFeaturesListView\0\0features\0"
    "restoreFeature(QVector<UBFeature>)\0"
    "thumbnailSizeChanged(int)\0onLongPressEvent()\0"
    "emitRestoreFeature()\0hideContextMenu()\0"
};

void UBFeaturesListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesListView *_t = static_cast<UBFeaturesListView *>(_o);
        switch (_id) {
        case 0: _t->restoreFeature((*reinterpret_cast< const QVector<UBFeature>(*)>(_a[1]))); break;
        case 1: _t->thumbnailSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onLongPressEvent(); break;
        case 3: _t->emitRestoreFeature(); break;
        case 4: _t->hideContextMenu(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_UBFeaturesListView,
      qt_meta_data_UBFeaturesListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesListView))
        return static_cast<void*>(const_cast< UBFeaturesListView*>(this));
    return QListView::qt_metacast(_clname);
}

int UBFeaturesListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesListView::restoreFeature(const QVector<UBFeature> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_UBFeaturesNavigatorWidget[] = {

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

static const char qt_meta_stringdata_UBFeaturesNavigatorWidget[] = {
    "UBFeaturesNavigatorWidget\0"
};

void UBFeaturesNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesNavigatorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesNavigatorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesNavigatorWidget,
      qt_meta_data_UBFeaturesNavigatorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesNavigatorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesNavigatorWidget))
        return static_cast<void*>(const_cast< UBFeaturesNavigatorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesCentralWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   25,   24,   24, 0x05,
      57,   52,   24,   24, 0x05,
      92,   88,   24,   24, 0x05,
     129,  122,   24,   24, 0x05,
     157,   24,   24,   24, 0x05,
     182,   24,   24,   24, 0x05,
     204,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     241,  222,   24,   24, 0x0a,
     298,  286,   24,   24, 0x2a,
     328,   52,   24,   24, 0x08,
     357,   24,   24,   24, 0x08,
     378,   24,   24,   24, 0x08,
     392,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesCentralWidget[] = {
    "UBFeaturesCentralWidget\0\0pLock\0"
    "lockMainWidget(bool)\0pStr\0"
    "createNewFolderSignal(QString)\0lst\0"
    "sendFileNameList(QStringList)\0pValue\0"
    "maxFilesCountEvaluated(int)\0"
    "increaseStatusBarValue()\0scanCategory(QString)\0"
    "scanPath(QString)\0pWidgetType,pState\0"
    "showAdditionalData(AddWidget,AddWidgetState)\0"
    "pWidgetType\0showAdditionalData(AddWidget)\0"
    "createNewFolderSlot(QString)\0"
    "hideAdditionalData()\0scanStarted()\0"
    "scanFinished()\0"
};

void UBFeaturesCentralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesCentralWidget *_t = static_cast<UBFeaturesCentralWidget *>(_o);
        switch (_id) {
        case 0: _t->lockMainWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->createNewFolderSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendFileNameList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->maxFilesCountEvaluated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->increaseStatusBarValue(); break;
        case 5: _t->scanCategory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->scanPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->showAdditionalData((*reinterpret_cast< AddWidget(*)>(_a[1])),(*reinterpret_cast< AddWidgetState(*)>(_a[2]))); break;
        case 8: _t->showAdditionalData((*reinterpret_cast< AddWidget(*)>(_a[1]))); break;
        case 9: _t->createNewFolderSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->hideAdditionalData(); break;
        case 11: _t->scanStarted(); break;
        case 12: _t->scanFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesCentralWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesCentralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesCentralWidget,
      qt_meta_data_UBFeaturesCentralWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesCentralWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesCentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesCentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesCentralWidget))
        return static_cast<void*>(const_cast< UBFeaturesCentralWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesCentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBFeaturesCentralWidget::lockMainWidget(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesCentralWidget::createNewFolderSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBFeaturesCentralWidget::sendFileNameList(const QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBFeaturesCentralWidget::maxFilesCountEvaluated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UBFeaturesCentralWidget::increaseStatusBarValue()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UBFeaturesCentralWidget::scanCategory(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UBFeaturesCentralWidget::scanPath(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_UBFeaturesNewFolderDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   27,   26,   26, 0x05,
      56,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   26,   26,   26, 0x08,
      79,   26,   26,   26, 0x08,
      93,   88,   26,   26, 0x08,
     127,  122,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesNewFolderDialog[] = {
    "UBFeaturesNewFolderDialog\0\0str\0"
    "createNewFolder(QString)\0closeDialog()\0"
    "accept()\0reject()\0pLst\0"
    "setFileNameList(QStringList)\0pStr\0"
    "reactOnTextChanged(QString)\0"
};

void UBFeaturesNewFolderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesNewFolderDialog *_t = static_cast<UBFeaturesNewFolderDialog *>(_o);
        switch (_id) {
        case 0: _t->createNewFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->closeDialog(); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->setFileNameList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->reactOnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesNewFolderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesNewFolderDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesNewFolderDialog,
      qt_meta_data_UBFeaturesNewFolderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesNewFolderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesNewFolderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesNewFolderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesNewFolderDialog))
        return static_cast<void*>(const_cast< UBFeaturesNewFolderDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesNewFolderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesNewFolderDialog::createNewFolder(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesNewFolderDialog::closeDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UBFeaturesProgressInfo[] = {

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
      28,   24,   23,   23, 0x08,
      56,   24,   23,   23, 0x08,
      92,   85,   23,   23, 0x08,
     112,   85,   23,   23, 0x08,
     132,   23,   23,   23, 0x08,
     165,  156,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesProgressInfo[] = {
    "UBFeaturesProgressInfo\0\0str\0"
    "setCommmonInfoText(QString)\0"
    "setDetailedInfoText(QString)\0pValue\0"
    "setProgressMin(int)\0setProgressMax(int)\0"
    "increaseProgressValue()\0pFeature\0"
    "sendFeature(UBFeature)\0"
};

void UBFeaturesProgressInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesProgressInfo *_t = static_cast<UBFeaturesProgressInfo *>(_o);
        switch (_id) {
        case 0: _t->setCommmonInfoText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setDetailedInfoText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setProgressMin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setProgressMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->increaseProgressValue(); break;
        case 5: _t->sendFeature((*reinterpret_cast< UBFeature(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesProgressInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesProgressInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesProgressInfo,
      qt_meta_data_UBFeaturesProgressInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesProgressInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesProgressInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesProgressInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesProgressInfo))
        return static_cast<void*>(const_cast< UBFeaturesProgressInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesProgressInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_UBFeaturesWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   19,   18,   18, 0x08,
      43,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesWebView[] = {
    "UBFeaturesWebView\0\0ok\0onLoadFinished(bool)\0"
    "javaScriptWindowObjectCleared()\0"
};

void UBFeaturesWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesWebView *_t = static_cast<UBFeaturesWebView *>(_o);
        switch (_id) {
        case 0: _t->onLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->javaScriptWindowObjectCleared(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesWebView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesWebView,
      qt_meta_data_UBFeaturesWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesWebView))
        return static_cast<void*>(const_cast< UBFeaturesWebView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_UBFeatureProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      35,   20,   20,   20, 0x08,
      48,   20,   20,   20, 0x08,
      73,   20,   20,   20, 0x08,
      99,   20,   20,   20, 0x08,
     131,   20,   20,   20, 0x08,
     164,   20,   20,   20, 0x08,
     184,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeatureProperties[] = {
    "UBFeatureProperties\0\0onAddToPage()\0"
    "onAddToLib()\0setAsBackgroundPressed()\0"
    "setAsBackgroundReleased()\0"
    "setAsDefaultBackgroundPressed()\0"
    "setAsDefaultBackgroundReleased()\0"
    "onSetAsBackground()\0onSetAsDefaultBackground()\0"
};

void UBFeatureProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeatureProperties *_t = static_cast<UBFeatureProperties *>(_o);
        switch (_id) {
        case 0: _t->onAddToPage(); break;
        case 1: _t->onAddToLib(); break;
        case 2: _t->setAsBackgroundPressed(); break;
        case 3: _t->setAsBackgroundReleased(); break;
        case 4: _t->setAsDefaultBackgroundPressed(); break;
        case 5: _t->setAsDefaultBackgroundReleased(); break;
        case 6: _t->onSetAsBackground(); break;
        case 7: _t->onSetAsDefaultBackground(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeatureProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeatureProperties::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeatureProperties,
      qt_meta_data_UBFeatureProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeatureProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeatureProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeatureProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeatureProperties))
        return static_cast<void*>(const_cast< UBFeatureProperties*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeatureProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_UBFeaturesModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   36,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesModel[] = {
    "UBFeaturesModel\0\0dataRestructured()\0"
    "item\0addItem(UBFeature)\0"
};

void UBFeaturesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesModel *_t = static_cast<UBFeaturesModel *>(_o);
        switch (_id) {
        case 0: _t->dataRestructured(); break;
        case 1: _t->addItem((*reinterpret_cast< const UBFeature(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_UBFeaturesModel,
      qt_meta_data_UBFeaturesModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesModel))
        return static_cast<void*>(const_cast< UBFeaturesModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int UBFeaturesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesModel::dataRestructured()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBFeaturesProxyModel[] = {

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

static const char qt_meta_stringdata_UBFeaturesProxyModel[] = {
    "UBFeaturesProxyModel\0"
};

void UBFeaturesProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_UBFeaturesProxyModel,
      qt_meta_data_UBFeaturesProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesProxyModel))
        return static_cast<void*>(const_cast< UBFeaturesProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int UBFeaturesProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesSearchProxyModel[] = {

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

static const char qt_meta_stringdata_UBFeaturesSearchProxyModel[] = {
    "UBFeaturesSearchProxyModel\0"
};

void UBFeaturesSearchProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesSearchProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesSearchProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_UBFeaturesSearchProxyModel,
      qt_meta_data_UBFeaturesSearchProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesSearchProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesSearchProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesSearchProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesSearchProxyModel))
        return static_cast<void*>(const_cast< UBFeaturesSearchProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int UBFeaturesSearchProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesPathProxyModel[] = {

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

static const char qt_meta_stringdata_UBFeaturesPathProxyModel[] = {
    "UBFeaturesPathProxyModel\0"
};

void UBFeaturesPathProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesPathProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesPathProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_UBFeaturesPathProxyModel,
      qt_meta_data_UBFeaturesPathProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesPathProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesPathProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesPathProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesPathProxyModel))
        return static_cast<void*>(const_cast< UBFeaturesPathProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int UBFeaturesPathProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesItemDelegate[] = {

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

static const char qt_meta_stringdata_UBFeaturesItemDelegate[] = {
    "UBFeaturesItemDelegate\0"
};

void UBFeaturesItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_UBFeaturesItemDelegate,
      qt_meta_data_UBFeaturesItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesItemDelegate))
        return static_cast<void*>(const_cast< UBFeaturesItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int UBFeaturesItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBFeaturesPathItemDelegate[] = {

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

static const char qt_meta_stringdata_UBFeaturesPathItemDelegate[] = {
    "UBFeaturesPathItemDelegate\0"
};

void UBFeaturesPathItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBFeaturesPathItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesPathItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_UBFeaturesPathItemDelegate,
      qt_meta_data_UBFeaturesPathItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesPathItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesPathItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesPathItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesPathItemDelegate))
        return static_cast<void*>(const_cast< UBFeaturesPathItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int UBFeaturesPathItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
