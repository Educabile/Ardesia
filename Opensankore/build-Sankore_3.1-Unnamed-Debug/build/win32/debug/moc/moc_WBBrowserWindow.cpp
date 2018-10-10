/****************************************************************************
** Meta object code from reading C++ file 'WBBrowserWindow.h'
**
** Created: Mon 20. Nov 11:19:21 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBBrowserWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBBrowserWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBBrowserWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      41,   16,   16,   16, 0x05,
      76,   68,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   99,   16,   16, 0x0a,
     121,   16,   16,   16, 0x0a,
     132,   99,   16,   16, 0x0a,
     146,   99,   16,   16, 0x0a,
     179,   16,  168,   16, 0x0a,
     194,   16,  168,   16, 0x0a,
     208,   16,   16,   16, 0x0a,
     231,   16,   16,   16, 0x0a,
     243,   16,   16,   16, 0x0a,
     263,  257,   16,   16, 0x0a,
     282,   16,   16,   16, 0x0a,
     304,   16,   16,   16, 0x0a,
     336,  329,   16,   16, 0x0a,
     360,   16,   16,   16, 0x08,
     389,  382,   16,   16, 0x08,
     424,  418,   16,   16, 0x08,
     455,   16,   16,   16, 0x28,
     479,   16,   16,   16, 0x08,
     496,   16,   16,   16, 0x08,
     513,   16,   16,   16, 0x08,
     531,   16,   16,   16, 0x08,
     558,  551,   16,   16, 0x08,
     585,   16,   16,   16, 0x08,
     601,  551,   16,   16, 0x08,
     627,   16,   16,   16, 0x08,
     648,   16,   16,   16, 0x08,
     673,  664,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBBrowserWindow[] = {
    "WBBrowserWindow\0\0activeViewPageChanged()\0"
    "activeViewChange(QWidget*)\0checked\0"
    "mirroringEnabled(bool)\0url\0loadPage(QString)\0"
    "slotHome()\0loadUrl(QUrl)\0loadUrlInNewTab(QUrl)\0"
    "WBWebView*\0createNewTab()\0paintWidget()\0"
    "tabCurrentChanged(int)\0bookmarks()\0"
    "addBookmark()\0attop\0showTabAtTop(bool)\0"
    "aboutToShowBackMenu()\0aboutToShowForwardMenu()\0"
    "action\0openActionUrl(QAction*)\0"
    "slotLoadProgress(int)\0string\0"
    "slotUpdateStatusbar(QString)\0title\0"
    "slotUpdateWindowTitle(QString)\0"
    "slotUpdateWindowTitle()\0slotFileSaveAs()\0"
    "slotViewZoomIn()\0slotViewZoomOut()\0"
    "slotViewResetZoom()\0enable\0"
    "slotViewZoomTextOnly(bool)\0slotWebSearch()\0"
    "slotToggleInspector(bool)\0"
    "slotSelectLineEdit()\0slotSwapFocus()\0"
    "geometry\0geometryChangeRequested(QRect)\0"
};

void WBBrowserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBBrowserWindow *_t = static_cast<WBBrowserWindow *>(_o);
        switch (_id) {
        case 0: _t->activeViewPageChanged(); break;
        case 1: _t->activeViewChange((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->mirroringEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotHome(); break;
        case 5: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->loadUrlInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: { WBWebView* _r = _t->createNewTab();
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = _r; }  break;
        case 8: { WBWebView* _r = _t->paintWidget();
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = _r; }  break;
        case 9: _t->tabCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->bookmarks(); break;
        case 11: _t->addBookmark(); break;
        case 12: _t->showTabAtTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->aboutToShowBackMenu(); break;
        case 14: _t->aboutToShowForwardMenu(); break;
        case 15: _t->openActionUrl((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->slotLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->slotUpdateStatusbar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->slotUpdateWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->slotUpdateWindowTitle(); break;
        case 20: _t->slotFileSaveAs(); break;
        case 21: _t->slotViewZoomIn(); break;
        case 22: _t->slotViewZoomOut(); break;
        case 23: _t->slotViewResetZoom(); break;
        case 24: _t->slotViewZoomTextOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slotWebSearch(); break;
        case 26: _t->slotToggleInspector((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->slotSelectLineEdit(); break;
        case 28: _t->slotSwapFocus(); break;
        case 29: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBBrowserWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBBrowserWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WBBrowserWindow,
      qt_meta_data_WBBrowserWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBBrowserWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBBrowserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBBrowserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBBrowserWindow))
        return static_cast<void*>(const_cast< WBBrowserWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int WBBrowserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void WBBrowserWindow::activeViewPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WBBrowserWindow::activeViewChange(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBBrowserWindow::mirroringEnabled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
