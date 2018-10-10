/****************************************************************************
** Meta object code from reading C++ file 'WBHistory.h'
**
** Created: Mon 20. Nov 11:19:53 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBHistory.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBHistoryManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      38,   33,   17,   17, 0x05,
      64,   33,   17,   17, 0x05,
      99,   92,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   17,   17,   17, 0x0a,
     125,   17,   17,   17, 0x0a,
     140,   17,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,

 // properties: name, type, flags
     169,  165, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryManager[] = {
    "WBHistoryManager\0\0historyReset()\0item\0"
    "entryAdded(WBHistoryItem)\0"
    "entryRemoved(WBHistoryItem)\0offset\0"
    "entryUpdated(int)\0clear()\0loadSettings()\0"
    "save()\0checkForExpired()\0int\0historyLimit\0"
};

void WBHistoryManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryManager *_t = static_cast<WBHistoryManager *>(_o);
        switch (_id) {
        case 0: _t->historyReset(); break;
        case 1: _t->entryAdded((*reinterpret_cast< const WBHistoryItem(*)>(_a[1]))); break;
        case 2: _t->entryRemoved((*reinterpret_cast< const WBHistoryItem(*)>(_a[1]))); break;
        case 3: _t->entryUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->loadSettings(); break;
        case 6: _t->save(); break;
        case 7: _t->checkForExpired(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBHistoryManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryManager::staticMetaObject = {
    { &QWebHistoryInterface::staticMetaObject, qt_meta_stringdata_WBHistoryManager,
      qt_meta_data_WBHistoryManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryManager))
        return static_cast<void*>(const_cast< WBHistoryManager*>(this));
    return QWebHistoryInterface::qt_metacast(_clname);
}

int WBHistoryManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebHistoryInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = historyLimit(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHistoryLimit(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WBHistoryManager::historyReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WBHistoryManager::entryAdded(const WBHistoryItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBHistoryManager::entryRemoved(const WBHistoryItem & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBHistoryManager::entryUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_WBHistoryModel[] = {

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
      16,   15,   15,   15, 0x0a,
      31,   15,   15,   15, 0x0a,
      51,   44,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryModel[] = {
    "WBHistoryModel\0\0historyReset()\0"
    "entryAdded()\0offset\0entryUpdated(int)\0"
};

void WBHistoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryModel *_t = static_cast<WBHistoryModel *>(_o);
        switch (_id) {
        case 0: _t->historyReset(); break;
        case 1: _t->entryAdded(); break;
        case 2: _t->entryUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBHistoryModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_WBHistoryModel,
      qt_meta_data_WBHistoryModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryModel))
        return static_cast<void*>(const_cast< WBHistoryModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int WBHistoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_WBHistoryFilterModel[] = {

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
      22,   21,   21,   21, 0x08,
      56,   36,   21,   21, 0x08,
     116,   99,   21,   21, 0x08,
     159,  156,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryFilterModel[] = {
    "WBHistoryFilterModel\0\0sourceReset()\0"
    "topLeft,bottomRight\0"
    "sourceDataChanged(QModelIndex,QModelIndex)\0"
    "parent,start,end\0"
    "sourceRowsInserted(QModelIndex,int,int)\0"
    ",,\0sourceRowsRemoved(QModelIndex,int,int)\0"
};

void WBHistoryFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryFilterModel *_t = static_cast<WBHistoryFilterModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        case 1: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBHistoryFilterModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryFilterModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_WBHistoryFilterModel,
      qt_meta_data_WBHistoryFilterModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryFilterModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryFilterModel))
        return static_cast<void*>(const_cast< WBHistoryFilterModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int WBHistoryFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_WBHistoryMenuModel[] = {

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

static const char qt_meta_stringdata_WBHistoryMenuModel[] = {
    "WBHistoryMenuModel\0"
};

void WBHistoryMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBHistoryMenuModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryMenuModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_WBHistoryMenuModel,
      qt_meta_data_WBHistoryMenuModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryMenuModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryMenuModel))
        return static_cast<void*>(const_cast< WBHistoryMenuModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int WBHistoryMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_WBHistoryMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   33,   14,   14, 0x08,
      62,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryMenu[] = {
    "WBHistoryMenu\0\0url\0openUrl(QUrl)\0index\0"
    "activated(QModelIndex)\0showHistoryDialog()\0"
};

void WBHistoryMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryMenu *_t = static_cast<WBHistoryMenu *>(_o);
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->showHistoryDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBHistoryMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryMenu::staticMetaObject = {
    { &WBModelMenu::staticMetaObject, qt_meta_stringdata_WBHistoryMenu,
      qt_meta_data_WBHistoryMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryMenu))
        return static_cast<void*>(const_cast< WBHistoryMenu*>(this));
    return WBModelMenu::qt_metacast(_clname);
}

int WBHistoryMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBModelMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WBHistoryMenu::openUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_WBHistoryCompletionModel[] = {

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
      26,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryCompletionModel[] = {
    "WBHistoryCompletionModel\0\0sourceReset()\0"
};

void WBHistoryCompletionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryCompletionModel *_t = static_cast<WBHistoryCompletionModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBHistoryCompletionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryCompletionModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_WBHistoryCompletionModel,
      qt_meta_data_WBHistoryCompletionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryCompletionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryCompletionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryCompletionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryCompletionModel))
        return static_cast<void*>(const_cast< WBHistoryCompletionModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int WBHistoryCompletionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_WBHistoryTreeModel[] = {

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
      20,   19,   19,   19, 0x08,
      51,   34,   19,   19, 0x08,
      91,   34,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBHistoryTreeModel[] = {
    "WBHistoryTreeModel\0\0sourceReset()\0"
    "parent,start,end\0"
    "sourceRowsInserted(QModelIndex,int,int)\0"
    "sourceRowsRemoved(QModelIndex,int,int)\0"
};

void WBHistoryTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBHistoryTreeModel *_t = static_cast<WBHistoryTreeModel *>(_o);
        switch (_id) {
        case 0: _t->sourceReset(); break;
        case 1: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBHistoryTreeModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBHistoryTreeModel::staticMetaObject = {
    { &QAbstractProxyModel::staticMetaObject, qt_meta_stringdata_WBHistoryTreeModel,
      qt_meta_data_WBHistoryTreeModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBHistoryTreeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBHistoryTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBHistoryTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBHistoryTreeModel))
        return static_cast<void*>(const_cast< WBHistoryTreeModel*>(this));
    return QAbstractProxyModel::qt_metacast(_clname);
}

int WBHistoryTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_WBTreeProxyModel[] = {

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

static const char qt_meta_stringdata_WBTreeProxyModel[] = {
    "WBTreeProxyModel\0"
};

void WBTreeProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBTreeProxyModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBTreeProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_WBTreeProxyModel,
      qt_meta_data_WBTreeProxyModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBTreeProxyModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBTreeProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBTreeProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBTreeProxyModel))
        return static_cast<void*>(const_cast< WBTreeProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int WBTreeProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
