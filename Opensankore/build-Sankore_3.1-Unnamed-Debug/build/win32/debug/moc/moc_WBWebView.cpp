/****************************************************************************
** Meta object code from reading C++ file 'WBWebView.h'
**
** Created: Mon 20. Nov 11:19:50 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBWebView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBWebPage[] = {

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
      15,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   32,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBWebPage[] = {
    "WBWebPage\0\0url\0loadingUrl(QUrl)\0reply\0"
    "handleUnsupportedContent(QNetworkReply*)\0"
};

void WBWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBWebPage *_t = static_cast<WBWebPage *>(_o);
        switch (_id) {
        case 0: _t->loadingUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->handleUnsupportedContent((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBWebPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBWebPage::staticMetaObject = {
    { &UBWebPage::staticMetaObject, qt_meta_stringdata_WBWebPage,
      qt_meta_data_WBWebPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBWebPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebPage))
        return static_cast<void*>(const_cast< WBWebPage*>(this));
    return UBWebPage::qt_metacast(_clname);
}

int WBWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBWebPage::qt_metacall(_c, _id, _a);
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
void WBWebPage::loadingUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_WBWebView[] = {

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
      20,   11,   10,   10, 0x08,
      40,   37,   10,   10, 0x08,
      59,   10,   10,   10, 0x08,
      80,   73,   10,   10, 0x08,
     114,  106,   10,   10, 0x08,
     149,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBWebView[] = {
    "WBWebView\0\0progress\0setProgress(int)\0"
    "ok\0loadFinished(bool)\0loadStarted()\0"
    "string\0setStatusBarText(QString)\0"
    "request\0downloadRequested(QNetworkRequest)\0"
    "openLinkInNewTab()\0"
};

void WBWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBWebView *_t = static_cast<WBWebView *>(_o);
        switch (_id) {
        case 0: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadStarted(); break;
        case 3: _t->setStatusBarText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->downloadRequested((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 5: _t->openLinkInNewTab(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBWebView::staticMetaObject = {
    { &WBWebTrapWebView::staticMetaObject, qt_meta_stringdata_WBWebView,
      qt_meta_data_WBWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebView))
        return static_cast<void*>(const_cast< WBWebView*>(this));
    return WBWebTrapWebView::qt_metacast(_clname);
}

int WBWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBWebTrapWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
