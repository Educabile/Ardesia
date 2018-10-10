/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentController.h'
**
** Created: Mon 20. Nov 11:16:25 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/document/UBDocumentController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDocumentReplaceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   25,   24,   24, 0x05,
      54,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   24,   24,   24, 0x08,
      77,   24,   24,   24, 0x08,
      91,   86,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentReplaceDialog[] = {
    "UBDocumentReplaceDialog\0\0str\0"
    "createNewFolder(QString)\0closeDialog()\0"
    "accept()\0reject()\0pStr\0"
    "reactOnTextChanged(QString)\0"
};

void UBDocumentReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentReplaceDialog *_t = static_cast<UBDocumentReplaceDialog *>(_o);
        switch (_id) {
        case 0: _t->createNewFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->closeDialog(); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->reactOnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentReplaceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentReplaceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBDocumentReplaceDialog,
      qt_meta_data_UBDocumentReplaceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentReplaceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentReplaceDialog))
        return static_cast<void*>(const_cast< UBDocumentReplaceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBDocumentReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void UBDocumentReplaceDialog::createNewFolder(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDocumentReplaceDialog::closeDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_UBDocumentTreeModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   21,   20,   20, 0x05,
      95,   77,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentTreeModel[] = {
    "UBDocumentTreeModel\0\0newIndex,oldIndex\0"
    "indexChanged(QModelIndex,QModelIndex)\0"
    "newIndex,previous\0"
    "currentIndexMoved(QModelIndex,QModelIndex)\0"
};

void UBDocumentTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentTreeModel *_t = static_cast<UBDocumentTreeModel *>(_o);
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->currentIndexMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentTreeModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_UBDocumentTreeModel,
      qt_meta_data_UBDocumentTreeModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentTreeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentTreeModel))
        return static_cast<void*>(const_cast< UBDocumentTreeModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int UBDocumentTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void UBDocumentTreeModel::indexChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBDocumentTreeModel::currentIndexMoved(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_UBDocumentTreeMimeData[] = {

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

static const char qt_meta_stringdata_UBDocumentTreeMimeData[] = {
    "UBDocumentTreeMimeData\0"
};

void UBDocumentTreeMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDocumentTreeMimeData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentTreeMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_UBDocumentTreeMimeData,
      qt_meta_data_UBDocumentTreeMimeData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentTreeMimeData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentTreeMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentTreeMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentTreeMimeData))
        return static_cast<void*>(const_cast< UBDocumentTreeMimeData*>(this));
    return QMimeData::qt_metacast(_clname);
}

int UBDocumentTreeMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBDocumentTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   20,   19,   19, 0x0a,
      83,   76,   19,   19, 0x2a,
     139,  119,   19,   19, 0x0a,
     192,  184,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentTreeView[] = {
    "UBDocumentTreeView\0\0pIndex,pExpand\0"
    "setSelectedAndExpanded(QModelIndex,bool)\0"
    "pIndex\0setSelectedAndExpanded(QModelIndex)\0"
    "pNewIndex,pOldIndex\0"
    "onModelIndexChanged(QModelIndex,QModelIndex)\0"
    "min,max\0hSliderRangeChanged(int,int)\0"
};

void UBDocumentTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentTreeView *_t = static_cast<UBDocumentTreeView *>(_o);
        switch (_id) {
        case 0: _t->setSelectedAndExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setSelectedAndExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onModelIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->hSliderRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_UBDocumentTreeView,
      qt_meta_data_UBDocumentTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentTreeView))
        return static_cast<void*>(const_cast< UBDocumentTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int UBDocumentTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_UBDocumentTreeItemDelegate[] = {

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
      28,   27,   27,   27, 0x08,
      55,   51,   27,   27, 0x08,
      88,   51,   83,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentTreeItemDelegate[] = {
    "UBDocumentTreeItemDelegate\0\0"
    "commitAndCloseEditor()\0str\0"
    "processChangedText(QString)\0bool\0"
    "validateString(QString)\0"
};

void UBDocumentTreeItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentTreeItemDelegate *_t = static_cast<UBDocumentTreeItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->commitAndCloseEditor(); break;
        case 1: _t->processChangedText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->validateString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentTreeItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentTreeItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_UBDocumentTreeItemDelegate,
      qt_meta_data_UBDocumentTreeItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentTreeItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentTreeItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentTreeItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentTreeItemDelegate))
        return static_cast<void*>(const_cast< UBDocumentTreeItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int UBDocumentTreeItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_UBDocumentController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   21,   21,   21, 0x0a,
      55,   21,   21,   21, 0x0a,
      91,   21,   21,   21, 0x0a,
     116,   21,   21,   21, 0x0a,
     157,  137,   21,   21, 0x0a,
     201,  195,   21,   21, 0x2a,
     233,  226,   21,   21, 0x0a,
     275,   21,   21,   21, 0x0a,
     296,   21,   21,   21, 0x0a,
     315,   21,   21,   21, 0x0a,
     339,   21,   21,   21, 0x0a,
     372,  352,   21,   21, 0x0a,
     451,  415,   21,   21, 0x0a,
     521,  494,   21,   21, 0x2a,
     565,  559,   21,   21, 0x2a,
     598,   21,   21,   21, 0x0a,
     605,   21,   21,   21, 0x0a,
     638,  612,   21,   21, 0x0a,
     672,  664,   21,   21, 0x2a,
     693,   21,   21,   21, 0x0a,
     707,   21,   21,   21, 0x0a,
     736,   21,   21,   21, 0x0a,
     742,   21,   21,   21, 0x0a,
     749,   21,   21,   21, 0x0a,
     769,  757,   21,   21, 0x0a,
     801,   21,   21,   21, 0x0a,
     831,  817,   21,   21, 0x0a,
     890,  867,   21,   21, 0x0a,
     933,  195,   21,   21, 0x0a,
     956,  195,   21,   21, 0x0a,
     980,   21,   21,   21, 0x0a,
     994,   21,   21,   21, 0x0a,
    1023, 1006,   21,   21, 0x0a,
    1093, 1073,   21,   21, 0x0a,
    1155, 1149,   21,   21, 0x08,
    1204, 1191,   21,   21, 0x08,
    1250,   21,   21,   21, 0x08,
    1267,   21,   21,   21, 0x08,
    1287,   21,   21,   21, 0x08,
    1310,   21,   21,   21, 0x08,
    1351, 1333,   21,   21, 0x08,
    1405, 1394,   21,   21, 0x08,
    1452, 1394,   21,   21, 0x08,
    1484,   21,   21,   21, 0x08,
    1500,   21,   21,   21, 0x08,
    1520,   21,   21,   21, 0x08,
    1540,   21,   21,   21, 0x08,
    1559, 1552,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentController[] = {
    "UBDocumentController\0\0exportDone()\0"
    "createNewDocument()\0"
    "createNewDocumentInUntitledFolder()\0"
    "createNewDocumentGroup()\0deleteSelectedItem()\0"
    "index,pDeletionType\0"
    "emptyFolder(QModelIndex,DeletionType)\0"
    "index\0emptyFolder(QModelIndex)\0pIndex\0"
    "deleteIndexAndAssociatedData(QModelIndex)\0"
    "renameSelectedItem()\0openSelectedItem()\0"
    "duplicateSelectedItem()\0importFile()\0"
    "proxy,source,target\0"
    "moveSceneToIndex(UBDocumentProxy*,int,int)\0"
    "proxy,setAsCurrentDocument,onImport\0"
    "selectDocument(UBDocumentProxy*,bool,bool)\0"
    "proxy,setAsCurrentDocument\0"
    "selectDocument(UBDocumentProxy*,bool)\0"
    "proxy\0selectDocument(UBDocumentProxy*)\0"
    "show()\0hide()\0message,showSpinningWheel\0"
    "showMessage(QString,bool)\0message\0"
    "showMessage(QString)\0hideMessage()\0"
    "toggleDocumentToolsPalette()\0cut()\0"
    "copy()\0paste()\0old,current\0"
    "focusChanged(QWidget*,QWidget*)\0"
    "updateActions()\0selectedIndex\0"
    "updateExportSubActions(QModelIndex)\0"
    "newIndex,PreviousIndex\0"
    "currentIndexMoved(QModelIndex,QModelIndex)\0"
    "onSortKindChanged(int)\0onSortOrderChanged(int)\0"
    "collapseAll()\0expandAll()\0current,previous\0"
    "TreeViewSelectionChanged(QModelIndex,QModelIndex)\0"
    "selected,deselected\0"
    "TreeViewSelectionChanged(QItemSelection,QItemSelection)\0"
    "value\0documentZoomSliderValueChanged(int)\0"
    "newSelection\0itemSelectionChanged(LastSelectedElementType)\0"
    "exportDocument()\0exportDocumentSet()\0"
    "thumbnailViewResized()\0pageSelectionChanged()\0"
    "proxy,pSceneIndex\0"
    "documentSceneChanged(UBDocumentProxy*,int)\0"
    "item,index\0thumbnailPageDoubleClicked(QGraphicsItem*,int)\0"
    "pageClicked(QGraphicsItem*,int)\0"
    "addToDocument()\0addFolderOfImages()\0"
    "addFileToDocument()\0addImages()\0source\0"
    "refreshDocumentThumbnailsView(UBDocumentContainer*)\0"
};

void UBDocumentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentController *_t = static_cast<UBDocumentController *>(_o);
        switch (_id) {
        case 0: _t->exportDone(); break;
        case 1: _t->createNewDocument(); break;
        case 2: _t->createNewDocumentInUntitledFolder(); break;
        case 3: _t->createNewDocumentGroup(); break;
        case 4: _t->deleteSelectedItem(); break;
        case 5: _t->emptyFolder((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< DeletionType(*)>(_a[2]))); break;
        case 6: _t->emptyFolder((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->deleteIndexAndAssociatedData((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->renameSelectedItem(); break;
        case 9: _t->openSelectedItem(); break;
        case 10: _t->duplicateSelectedItem(); break;
        case 11: _t->importFile(); break;
        case 12: _t->moveSceneToIndex((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->selectDocument((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 14: _t->selectDocument((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->selectDocument((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1]))); break;
        case 16: _t->show(); break;
        case 17: _t->hide(); break;
        case 18: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->hideMessage(); break;
        case 21: _t->toggleDocumentToolsPalette(); break;
        case 22: _t->cut(); break;
        case 23: _t->copy(); break;
        case 24: _t->paste(); break;
        case 25: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 26: _t->updateActions(); break;
        case 27: _t->updateExportSubActions((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 28: _t->currentIndexMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 29: _t->onSortKindChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->onSortOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->collapseAll(); break;
        case 32: _t->expandAll(); break;
        case 33: _t->TreeViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 34: _t->TreeViewSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 35: _t->documentZoomSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->itemSelectionChanged((*reinterpret_cast< LastSelectedElementType(*)>(_a[1]))); break;
        case 37: _t->exportDocument(); break;
        case 38: _t->exportDocumentSet(); break;
        case 39: _t->thumbnailViewResized(); break;
        case 40: _t->pageSelectionChanged(); break;
        case 41: _t->documentSceneChanged((*reinterpret_cast< UBDocumentProxy*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->thumbnailPageDoubleClicked((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->pageClicked((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->addToDocument(); break;
        case 45: _t->addFolderOfImages(); break;
        case 46: _t->addFileToDocument(); break;
        case 47: _t->addImages(); break;
        case 48: _t->refreshDocumentThumbnailsView((*reinterpret_cast< UBDocumentContainer*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentController::staticMetaObject = {
    { &UBDocumentContainer::staticMetaObject, qt_meta_stringdata_UBDocumentController,
      qt_meta_data_UBDocumentController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentController))
        return static_cast<void*>(const_cast< UBDocumentController*>(this));
    return UBDocumentContainer::qt_metacast(_clname);
}

int UBDocumentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDocumentContainer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void UBDocumentController::exportDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
