/****************************************************************************
** Meta object code from reading C++ file 'WBWebTrapWebView.h'
**
** Created: Mon 20. Nov 11:19:55 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBWebTrapWebView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBWebTrapWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBWebTrapWebView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   18,   17,   17, 0x05,
      93,   63,   17,   17, 0x05,
     140,  130,   17,   17, 0x05,
     178,  167,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     214,  211,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBWebTrapWebView[] = {
    "WBWebTrapWebView\0\0pixmap,pageMode\0"
    "pixmapCaptured(QPixmap,bool)\0"
    "pUrl,pMimeType,pWidth,pHeight\0"
    "objectCaptured(QUrl,QString,int,int)\0"
    "embedCode\0embedCodeCaptured(QString)\0"
    "pUrl,query\0webElementCaptured(QUrl,QString)\0"
    "ok\0viewLoadFinished(bool)\0"
};

void WBWebTrapWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBWebTrapWebView *_t = static_cast<WBWebTrapWebView *>(_o);
        switch (_id) {
        case 0: _t->pixmapCaptured((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->objectCaptured((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->embedCodeCaptured((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->webElementCaptured((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->viewLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBWebTrapWebView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBWebTrapWebView::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_WBWebTrapWebView,
      qt_meta_data_WBWebTrapWebView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBWebTrapWebView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBWebTrapWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBWebTrapWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebTrapWebView))
        return static_cast<void*>(const_cast< WBWebTrapWebView*>(this));
    return QWebView::qt_metacast(_clname);
}

int WBWebTrapWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
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
void WBWebTrapWebView::pixmapCaptured(const QPixmap & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBWebTrapWebView::objectCaptured(const QUrl & _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBWebTrapWebView::embedCodeCaptured(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBWebTrapWebView::webElementCaptured(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
