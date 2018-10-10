/****************************************************************************
** Meta object code from reading C++ file 'UBTeacherGuideWidgetsTools.h'
**
** Created: Mon 20. Nov 11:17:40 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBTeacherGuideWidgetsTools.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBTeacherGuideWidgetsTools.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTGActionWidget[] = {

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
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   17,   17,   17, 0x0a,
      44,   17,   17,   17, 0x0a,
      59,   17,   17,   17, 0x0a,
      69,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTGActionWidget[] = {
    "UBTGActionWidget\0\0hasChanged()\0"
    "onUpButton()\0onDownButton()\0onClose()\0"
    "onChange()\0"
};

void UBTGActionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGActionWidget *_t = static_cast<UBTGActionWidget *>(_o);
        switch (_id) {
        case 0: _t->hasChanged(); break;
        case 1: _t->onUpButton(); break;
        case 2: _t->onDownButton(); break;
        case 3: _t->onClose(); break;
        case 4: _t->onChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGActionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGActionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTGActionWidget,
      qt_meta_data_UBTGActionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGActionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGActionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGActionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGActionWidget))
        return static_cast<void*>(const_cast< UBTGActionWidget*>(this));
    if (!strcmp(_clname, "iUBTGSaveData"))
        return static_cast< iUBTGSaveData*>(const_cast< UBTGActionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTGActionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBTGActionWidget::hasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBTGActionColumn[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      49,   17,   17,   17, 0x05,
      77,   17,   17,   17, 0x05,
     107,   17,   17,   17, 0x05,
     122,   17,   17,   17, 0x05,
     134,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   17,   17,   17, 0x08,
     163,   17,   17,   17, 0x08,
     175,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBTGActionColumn[] = {
    "UBTGActionColumn\0\0clickOnClose(QTreeWidgetItem*)\0"
    "clickOnUp(QTreeWidgetItem*)\0"
    "clickOnDown(QTreeWidgetItem*)\0"
    "clickOnClose()\0clickOnUp()\0clickOnDown()\0"
    "onClickClose()\0onClickUp()\0onClickDown()\0"
};

void UBTGActionColumn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGActionColumn *_t = static_cast<UBTGActionColumn *>(_o);
        switch (_id) {
        case 0: _t->clickOnClose((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->clickOnUp((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->clickOnDown((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->clickOnClose(); break;
        case 4: _t->clickOnUp(); break;
        case 5: _t->clickOnDown(); break;
        case 6: _t->onClickClose(); break;
        case 7: _t->onClickUp(); break;
        case 8: _t->onClickDown(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTGActionColumn::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGActionColumn::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTGActionColumn,
      qt_meta_data_UBTGActionColumn, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGActionColumn::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGActionColumn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGActionColumn::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGActionColumn))
        return static_cast<void*>(const_cast< UBTGActionColumn*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTGActionColumn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UBTGActionColumn::clickOnClose(QTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBTGActionColumn::clickOnUp(QTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UBTGActionColumn::clickOnDown(QTreeWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBTGActionColumn::clickOnClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBTGActionColumn::clickOnUp()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void UBTGActionColumn::clickOnDown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
static const uint qt_meta_data_UBTGAdaptableText[] = {

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
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTGAdaptableText[] = {
    "UBTGAdaptableText\0\0onTextChanged()\0"
};

void UBTGAdaptableText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGAdaptableText *_t = static_cast<UBTGAdaptableText *>(_o);
        switch (_id) {
        case 0: _t->onTextChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGAdaptableText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGAdaptableText::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_UBTGAdaptableText,
      qt_meta_data_UBTGAdaptableText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGAdaptableText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGAdaptableText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGAdaptableText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGAdaptableText))
        return static_cast<void*>(const_cast< UBTGAdaptableText*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int UBTGAdaptableText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UBDraggableWeb[] = {

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

static const char qt_meta_stringdata_UBDraggableWeb[] = {
    "UBDraggableWeb\0"
};

void UBDraggableWeb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDraggableWeb::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDraggableWeb::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_UBDraggableWeb,
      qt_meta_data_UBDraggableWeb, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDraggableWeb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDraggableWeb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDraggableWeb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDraggableWeb))
        return static_cast<void*>(const_cast< UBDraggableWeb*>(this));
    return QWebView::qt_metacast(_clname);
}

int UBDraggableWeb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBTGMediaWidget[] = {

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
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x0a,
      45,   16,   16,   16, 0x0a,
      55,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTGMediaWidget[] = {
    "UBTGMediaWidget\0\0onUpButton()\0"
    "onDownButton()\0onClose()\0onTitleChanged()\0"
};

void UBTGMediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGMediaWidget *_t = static_cast<UBTGMediaWidget *>(_o);
        switch (_id) {
        case 0: _t->onUpButton(); break;
        case 1: _t->onDownButton(); break;
        case 2: _t->onClose(); break;
        case 3: _t->onTitleChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGMediaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGMediaWidget::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_UBTGMediaWidget,
      qt_meta_data_UBTGMediaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGMediaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGMediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGMediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGMediaWidget))
        return static_cast<void*>(const_cast< UBTGMediaWidget*>(this));
    if (!strcmp(_clname, "iUBTGSaveData"))
        return static_cast< iUBTGSaveData*>(const_cast< UBTGMediaWidget*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int UBTGMediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_UBTGUrlWidget[] = {

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
      15,   14,   14,   14, 0x0a,
      38,   14,   14,   14, 0x0a,
      53,   14,   14,   14, 0x0a,
      63,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTGUrlWidget[] = {
    "UBTGUrlWidget\0\0onUrlEditionFinished()\0"
    "onDownButton()\0onClose()\0onUpButton()\0"
};

void UBTGUrlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGUrlWidget *_t = static_cast<UBTGUrlWidget *>(_o);
        switch (_id) {
        case 0: _t->onUrlEditionFinished(); break;
        case 1: _t->onDownButton(); break;
        case 2: _t->onClose(); break;
        case 3: _t->onUpButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGUrlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGUrlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTGUrlWidget,
      qt_meta_data_UBTGUrlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGUrlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGUrlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGUrlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGUrlWidget))
        return static_cast<void*>(const_cast< UBTGUrlWidget*>(this));
    if (!strcmp(_clname, "iUBTGSaveData"))
        return static_cast< iUBTGSaveData*>(const_cast< UBTGUrlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTGUrlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_UBTGDraggableTreeItem[] = {

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

static const char qt_meta_stringdata_UBTGDraggableTreeItem[] = {
    "UBTGDraggableTreeItem\0"
};

void UBTGDraggableTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGDraggableTreeItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGDraggableTreeItem::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_UBTGDraggableTreeItem,
      qt_meta_data_UBTGDraggableTreeItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGDraggableTreeItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGDraggableTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGDraggableTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGDraggableTreeItem))
        return static_cast<void*>(const_cast< UBTGDraggableTreeItem*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int UBTGDraggableTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBTGFileWidget[] = {

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
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   15,   15,   15, 0x08,
      49,   15,   15,   15, 0x0a,
      62,   15,   15,   15, 0x0a,
      77,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTGFileWidget[] = {
    "UBTGFileWidget\0\0changed()\0"
    "OnClickBtnSelectFile()\0onUpButton()\0"
    "onDownButton()\0onClose()\0"
};

void UBTGFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTGFileWidget *_t = static_cast<UBTGFileWidget *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->OnClickBtnSelectFile(); break;
        case 2: _t->onUpButton(); break;
        case 3: _t->onDownButton(); break;
        case 4: _t->onClose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTGFileWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTGFileWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTGFileWidget,
      qt_meta_data_UBTGFileWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTGFileWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTGFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTGFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTGFileWidget))
        return static_cast<void*>(const_cast< UBTGFileWidget*>(this));
    if (!strcmp(_clname, "iUBTGSaveData"))
        return static_cast< iUBTGSaveData*>(const_cast< UBTGFileWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTGFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void UBTGFileWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
