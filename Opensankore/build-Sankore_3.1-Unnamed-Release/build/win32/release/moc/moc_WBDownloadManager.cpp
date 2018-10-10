/****************************************************************************
** Meta object code from reading C++ file 'WBDownloadManager.h'
**
** Created: Fri 4. May 12:33:36 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBDownloadManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBDownloadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBDownloadItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   15,   15,   15, 0x08,
      39,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,
      57,   15,   15,   15, 0x08,
      82,   77,   15,   15, 0x08,
     142,  117,   15,   15, 0x08,
     174,   15,   15,   15, 0x08,
     192,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBDownloadItem[] = {
    "WBDownloadItem\0\0statusChanged()\0stop()\0"
    "tryAgain()\0open()\0downloadReadyRead()\0"
    "code\0error(QNetworkReply::NetworkError)\0"
    "bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0"
    "metaDataChanged()\0finished()\0"
};

void WBDownloadItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBDownloadItem *_t = static_cast<WBDownloadItem *>(_o);
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->stop(); break;
        case 2: _t->tryAgain(); break;
        case 3: _t->open(); break;
        case 4: _t->downloadReadyRead(); break;
        case 5: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->metaDataChanged(); break;
        case 8: _t->finished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBDownloadItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBDownloadItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WBDownloadItem,
      qt_meta_data_WBDownloadItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBDownloadItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBDownloadItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBDownloadItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadItem))
        return static_cast<void*>(const_cast< WBDownloadItem*>(this));
    if (!strcmp(_clname, "Ui_DownloadItem"))
        return static_cast< Ui_DownloadItem*>(const_cast< WBDownloadItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int WBDownloadItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WBDownloadItem::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_WBDownloadManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,   74, // properties
       1,   77, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   19,   18,   18, 0x0a,
      82,   74,   18,   18, 0x2a,
     128,  108,   18,   18, 0x0a,
     152,  148,   18,   18, 0x2a,
     208,  167,   18,   18, 0x0a,
     284,  262,   18,   18, 0x2a,
     336,  330,   18,   18, 0x2a,
     377,   18,   18,   18, 0x0a,
     387,   18,   18,   18, 0x08,
     394,   18,   18,   18, 0x08,
     406,  167,   18,   18, 0x08,
     460,  262,   18,   18, 0x28,

 // properties: name, type, flags
     519,  506, 0x0009510b,

 // enums: name, flags, count, data
     506, 0x0,    3,   81,

 // enum data: key, value
     532, uint(WBDownloadManager::Never),
     538, uint(WBDownloadManager::Exit),
     543, uint(WBDownloadManager::SuccessFullDownload),

       0        // eod
};

static const char qt_meta_stringdata_WBDownloadManager[] = {
    "WBDownloadManager\0\0request,requestFileName\0"
    "download(QNetworkRequest,bool)\0request\0"
    "download(QNetworkRequest)\0url,requestFileName\0"
    "download(QUrl,bool)\0url\0download(QUrl)\0"
    "reply,requestFileName,customDownloadPath\0"
    "handleUnsupportedContent(QNetworkReply*,bool,QString)\0"
    "reply,requestFileName\0"
    "handleUnsupportedContent(QNetworkReply*,bool)\0"
    "reply\0handleUnsupportedContent(QNetworkReply*)\0"
    "cleanup()\0save()\0updateRow()\0"
    "processDownloadedContent(QNetworkReply*,bool,QString)\0"
    "processDownloadedContent(QNetworkReply*,bool)\0"
    "RemovePolicy\0removePolicy\0Never\0Exit\0"
    "SuccessFullDownload\0"
};

void WBDownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBDownloadManager *_t = static_cast<WBDownloadManager *>(_o);
        switch (_id) {
        case 0: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->download((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 2: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->download((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->cleanup(); break;
        case 8: _t->save(); break;
        case 9: _t->updateRow(); break;
        case 10: _t->processDownloadedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->processDownloadedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBDownloadManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBDownloadManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WBDownloadManager,
      qt_meta_data_WBDownloadManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBDownloadManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadManager))
        return static_cast<void*>(const_cast< WBDownloadManager*>(this));
    if (!strcmp(_clname, "Ui_DownloadDialog"))
        return static_cast< Ui_DownloadDialog*>(const_cast< WBDownloadManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int WBDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RemovePolicy*>(_v) = removePolicy(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRemovePolicy(*reinterpret_cast< RemovePolicy*>(_v)); break;
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
static const uint qt_meta_data_WBDownloadModel[] = {

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

static const char qt_meta_stringdata_WBDownloadModel[] = {
    "WBDownloadModel\0"
};

void WBDownloadModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBDownloadModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBDownloadModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_WBDownloadModel,
      qt_meta_data_WBDownloadModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBDownloadModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBDownloadModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBDownloadModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBDownloadModel))
        return static_cast<void*>(const_cast< WBDownloadModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int WBDownloadModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
