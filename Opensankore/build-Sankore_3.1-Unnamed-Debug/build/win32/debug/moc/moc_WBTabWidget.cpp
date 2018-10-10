/****************************************************************************
** Meta object code from reading C++ file 'WBTabWidget.h'
**
** Created: Mon 20. Nov 11:19:40 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBTabWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBTabBar[] = {

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
      10,    9,    9,    9, 0x05,
      25,   19,    9,    9, 0x05,
      39,   19,    9,    9, 0x05,
      53,   19,    9,    9, 0x05,
      73,   19,    9,    9, 0x05,
      88,    9,    9,    9, 0x05,
     122,  104,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,    9,    9,    9, 0x08,
     166,    9,    9,    9, 0x08,
     177,    9,    9,    9, 0x08,
     188,    9,    9,    9, 0x08,
     205,    9,    9,    9, 0x08,
     226,  217,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBTabBar[] = {
    "WBTabBar\0\0newTab()\0index\0cloneTab(int)\0"
    "closeTab(int)\0closeOtherTabs(int)\0"
    "reloadTab(int)\0reloadAllTabs()\0"
    "fromIndex,toIndex\0tabMoveRequested(int,int)\0"
    "selectTabAction()\0cloneTab()\0closeTab()\0"
    "closeOtherTabs()\0reloadTab()\0position\0"
    "contextMenuRequested(QPoint)\0"
};

void WBTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBTabBar *_t = static_cast<WBTabBar *>(_o);
        switch (_id) {
        case 0: _t->newTab(); break;
        case 1: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->reloadAllTabs(); break;
        case 6: _t->tabMoveRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->selectTabAction(); break;
        case 8: _t->cloneTab(); break;
        case 9: _t->closeTab(); break;
        case 10: _t->closeOtherTabs(); break;
        case 11: _t->reloadTab(); break;
        case 12: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBTabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_WBTabBar,
      qt_meta_data_WBTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBTabBar))
        return static_cast<void*>(const_cast< WBTabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int WBTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
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
void WBTabBar::newTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WBTabBar::cloneTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBTabBar::closeTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBTabBar::closeOtherTabs(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBTabBar::reloadTab(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBTabBar::reloadAllTabs()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void WBTabBar::tabMoveRequested(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
static const uint qt_meta_data_WBWebActionMapper[] = {

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
      19,   18,   18,   18, 0x08,
      35,   18,   18,   18, 0x08,
      50,   18,   18,   18, 0x08,
      66,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBWebActionMapper[] = {
    "WBWebActionMapper\0\0rootTriggered()\0"
    "childChanged()\0rootDestroyed()\0"
    "currentDestroyed()\0"
};

void WBWebActionMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBWebActionMapper *_t = static_cast<WBWebActionMapper *>(_o);
        switch (_id) {
        case 0: _t->rootTriggered(); break;
        case 1: _t->childChanged(); break;
        case 2: _t->rootDestroyed(); break;
        case 3: _t->currentDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBWebActionMapper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBWebActionMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WBWebActionMapper,
      qt_meta_data_WBWebActionMapper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBWebActionMapper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBWebActionMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBWebActionMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBWebActionMapper))
        return static_cast<void*>(const_cast< WBWebActionMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int WBWebActionMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_WBTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x05,
      35,   13,   12,   12, 0x05,
      68,   60,   12,   12, 0x05,
     103,   98,   12,   12, 0x05,
     133,  124,   12,   12, 0x05,
     155,  151,   12,   12, 0x05,
     183,  174,   12,   12, 0x05,
     222,  214,   12,   12, 0x05,
     261,  214,   12,   12, 0x05,
     302,  214,   12,   12, 0x05,
     347,  341,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     374,   13,   12,   12, 0x0a,
     423,  411,  400,   12, 0x0a,
     436,   12,  400,   12, 0x2a,
     451,  445,   12,   12, 0x0a,
     465,   12,   12,   12, 0x2a,
     476,  445,   12,   12, 0x0a,
     490,   12,   12,   12, 0x2a,
     501,  445,   12,   12, 0x0a,
     521,  445,   12,   12, 0x0a,
     536,   12,   12,   12, 0x2a,
     548,   12,   12,   12, 0x0a,
     564,   12,   12,   12, 0x0a,
     574,   12,   12,   12, 0x0a,
     588,  445,   12,   12, 0x08,
     608,   12,   12,   12, 0x08,
     643,  636,   12,   12, 0x08,
     686,   12,   12,   12, 0x08,
     707,   12,   12,   12, 0x08,
     734,  728,   12,   12, 0x08,
     763,   13,   12,   12, 0x08,
     787,   12,   12,   12, 0x08,
     811,   12,   12,   12, 0x08,
     852,  834,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBTabWidget[] = {
    "WBTabWidget\0\0url\0loadPage(QString)\0"
    "setCurrentTitle(QString)\0message\0"
    "showStatusBarMessage(QString)\0link\0"
    "linkHovered(QString)\0progress\0"
    "loadProgress(int)\0pOk\0loadFinished(bool)\0"
    "geometry\0geometryChangeRequested(QRect)\0"
    "visible\0menuBarVisibilityChangeRequested(bool)\0"
    "statusBarVisibilityChangeRequested(bool)\0"
    "toolBarVisibilityChangeRequested(bool)\0"
    "frame\0printRequested(QWebFrame*)\0"
    "loadUrlInCurrentTab(QUrl)\0WBWebView*\0"
    "makeCurrent\0newTab(bool)\0newTab()\0"
    "index\0cloneTab(int)\0cloneTab()\0"
    "closeTab(int)\0closeTab()\0closeOtherTabs(int)\0"
    "reloadTab(int)\0reloadTab()\0reloadAllTabs()\0"
    "nextTab()\0previousTab()\0currentChanged(int)\0"
    "aboutToShowRecentTabsMenu()\0action\0"
    "aboutToShowRecentTriggeredAction(QAction*)\0"
    "webViewLoadStarted()\0webViewIconChanged()\0"
    "title\0webViewTitleChanged(QString)\0"
    "webViewUrlChanged(QUrl)\0lineEditReturnPressed()\0"
    "windowCloseRequested()\0fromIndex,toIndex\0"
    "moveTab(int,int)\0"
};

void WBTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBTabWidget *_t = static_cast<WBTabWidget *>(_o);
        switch (_id) {
        case 0: _t->loadPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCurrentTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showStatusBarMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->linkHovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->geometryChangeRequested((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 7: _t->menuBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->statusBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toolBarVisibilityChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->printRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 11: _t->loadUrlInCurrentTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: { WBWebView* _r = _t->newTab((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = _r; }  break;
        case 13: { WBWebView* _r = _t->newTab();
            if (_a[0]) *reinterpret_cast< WBWebView**>(_a[0]) = _r; }  break;
        case 14: _t->cloneTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->cloneTab(); break;
        case 16: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->closeTab(); break;
        case 18: _t->closeOtherTabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->reloadTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->reloadTab(); break;
        case 21: _t->reloadAllTabs(); break;
        case 22: _t->nextTab(); break;
        case 23: _t->previousTab(); break;
        case 24: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->aboutToShowRecentTabsMenu(); break;
        case 26: _t->aboutToShowRecentTriggeredAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 27: _t->webViewLoadStarted(); break;
        case 28: _t->webViewIconChanged(); break;
        case 29: _t->webViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 31: _t->lineEditReturnPressed(); break;
        case 32: _t->windowCloseRequested(); break;
        case 33: _t->moveTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_WBTabWidget,
      qt_meta_data_WBTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBTabWidget))
        return static_cast<void*>(const_cast< WBTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int WBTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void WBTabWidget::loadPage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBTabWidget::setCurrentTitle(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WBTabWidget::showStatusBarMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WBTabWidget::linkHovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WBTabWidget::loadProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WBTabWidget::loadFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WBTabWidget::geometryChangeRequested(const QRect & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WBTabWidget::menuBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WBTabWidget::statusBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WBTabWidget::toolBarVisibilityChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WBTabWidget::printRequested(QWebFrame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
