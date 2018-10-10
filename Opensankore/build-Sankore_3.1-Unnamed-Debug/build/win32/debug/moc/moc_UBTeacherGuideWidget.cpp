/****************************************************************************
** Meta object code from reading C++ file 'UBTeacherGuideWidget.h'
**
** Created: Mon 20. Nov 11:17:40 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBTeacherGuideWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBTeacherGuideWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTeacherGuideEditionWidget[] = {

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
      51,   29,   28,   28, 0x0a,
     117,  103,   28,   28, 0x2a,
     156,   28,   28,   28, 0x0a,
     185,  179,   28,   28, 0x0a,
     208,   28,   28,   28, 0x0a,
     241,  230,   28,   28, 0x08,
     261,   28,   28,   28, 0x28,
     277,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBTeacherGuideEditionWidget[] = {
    "UBTeacherGuideEditionWidget\0\0"
    "widget,column,element\0"
    "onAddItemClicked(QTreeWidgetItem*,int,QDomElement*)\0"
    "widget,column\0onAddItemClicked(QTreeWidgetItem*,int)\0"
    "onActiveSceneChanged()\0event\0"
    "showEvent(QShowEvent*)\0teacherGuideChanged()\0"
    "isModified\0setIsModified(bool)\0"
    "setIsModified()\0onActiveDocumentChanged()\0"
};

void UBTeacherGuideEditionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTeacherGuideEditionWidget *_t = static_cast<UBTeacherGuideEditionWidget *>(_o);
        switch (_id) {
        case 0: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDomElement*(*)>(_a[3]))); break;
        case 1: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onActiveSceneChanged(); break;
        case 3: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: _t->teacherGuideChanged(); break;
        case 5: _t->setIsModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setIsModified(); break;
        case 7: _t->onActiveDocumentChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTeacherGuideEditionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuideEditionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTeacherGuideEditionWidget,
      qt_meta_data_UBTeacherGuideEditionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuideEditionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuideEditionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuideEditionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuideEditionWidget))
        return static_cast<void*>(const_cast< UBTeacherGuideEditionWidget*>(this));
    if (!strcmp(_clname, "IDataStorage"))
        return static_cast< IDataStorage*>(const_cast< UBTeacherGuideEditionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTeacherGuideEditionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_UBTeacherGuidePresentationWidget[] = {

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
      48,   34,   33,   33, 0x0a,
      87,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTeacherGuidePresentationWidget[] = {
    "UBTeacherGuidePresentationWidget\0\0"
    "widget,column\0onAddItemClicked(QTreeWidgetItem*,int)\0"
    "onActiveSceneChanged()\0"
};

void UBTeacherGuidePresentationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTeacherGuidePresentationWidget *_t = static_cast<UBTeacherGuidePresentationWidget *>(_o);
        switch (_id) {
        case 0: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onActiveSceneChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTeacherGuidePresentationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuidePresentationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTeacherGuidePresentationWidget,
      qt_meta_data_UBTeacherGuidePresentationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuidePresentationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuidePresentationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuidePresentationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuidePresentationWidget))
        return static_cast<void*>(const_cast< UBTeacherGuidePresentationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTeacherGuidePresentationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_UBTeacherGuidePageZeroWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   29,   29,   29, 0x0a,
      68,   63,   29,   29, 0x0a,
     100,   29,   29,   29, 0x2a,
     115,   29,   29,   29, 0x0a,
     144,  132,   29,   29, 0x08,
     174,   29,   29,   29, 0x08,
     210,  188,   29,   29, 0x08,
     276,  262,   29,   29, 0x28,
     315,   29,   29,   29, 0x08,
     333,   29,   29,   29, 0x08,
     367,  359,   29,   29, 0x08,
     412,  401,   29,   29, 0x08,
     432,   29,   29,   29, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_UBTeacherGuidePageZeroWidget[] = {
    "UBTeacherGuidePageZeroWidget\0\0resized()\0"
    "onActiveSceneChanged()\0mode\0"
    "switchToMode(tUBTGZeroPageMode)\0"
    "switchToMode()\0onClickLicence()\0"
    "schoolLevel\0onSchoolLevelChanged(QString)\0"
    "persistData()\0widget,column,element\0"
    "onAddItemClicked(QTreeWidgetItem*,int,QDomElement*)\0"
    "widget,column\0onAddItemClicked(QTreeWidgetItem*,int)\0"
    "setFilesChanged()\0onActiveDocumentChanged()\0"
    "min,max\0onScrollAreaRangeChanged(int,int)\0"
    "isModified\0setIsModified(bool)\0"
    "setIsModified()\0"
};

void UBTeacherGuidePageZeroWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTeacherGuidePageZeroWidget *_t = static_cast<UBTeacherGuidePageZeroWidget *>(_o);
        switch (_id) {
        case 0: _t->resized(); break;
        case 1: _t->onActiveSceneChanged(); break;
        case 2: _t->switchToMode((*reinterpret_cast< tUBTGZeroPageMode(*)>(_a[1]))); break;
        case 3: _t->switchToMode(); break;
        case 4: _t->onClickLicence(); break;
        case 5: _t->onSchoolLevelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->persistData(); break;
        case 7: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDomElement*(*)>(_a[3]))); break;
        case 8: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setFilesChanged(); break;
        case 10: _t->onActiveDocumentChanged(); break;
        case 11: _t->onScrollAreaRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setIsModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setIsModified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTeacherGuidePageZeroWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuidePageZeroWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTeacherGuidePageZeroWidget,
      qt_meta_data_UBTeacherGuidePageZeroWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuidePageZeroWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuidePageZeroWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuidePageZeroWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuidePageZeroWidget))
        return static_cast<void*>(const_cast< UBTeacherGuidePageZeroWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTeacherGuidePageZeroWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void UBTeacherGuidePageZeroWidget::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBClickableLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_UBClickableLabel[] = {
    "UBClickableLabel\0\0clicked()\0"
};

void UBClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBClickableLabel *_t = static_cast<UBClickableLabel *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBClickableLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBClickableLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UBClickableLabel,
      qt_meta_data_UBClickableLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBClickableLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBClickableLabel))
        return static_cast<void*>(const_cast< UBClickableLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int UBClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UBClickableLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_UBTeacherGuideWidget[] = {

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

static const char qt_meta_stringdata_UBTeacherGuideWidget[] = {
    "UBTeacherGuideWidget\0"
};

void UBTeacherGuideWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTeacherGuideWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuideWidget::staticMetaObject = {
    { &UBAbstractTeacherGuide::staticMetaObject, qt_meta_stringdata_UBTeacherGuideWidget,
      qt_meta_data_UBTeacherGuideWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuideWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuideWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuideWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuideWidget))
        return static_cast<void*>(const_cast< UBTeacherGuideWidget*>(this));
    return UBAbstractTeacherGuide::qt_metacast(_clname);
}

int UBTeacherGuideWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractTeacherGuide::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBTeacherResources[] = {

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

static const char qt_meta_stringdata_UBTeacherResources[] = {
    "UBTeacherResources\0"
};

void UBTeacherResources::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBTeacherResources::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherResources::staticMetaObject = {
    { &UBAbstractTeacherGuide::staticMetaObject, qt_meta_stringdata_UBTeacherResources,
      qt_meta_data_UBTeacherResources, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherResources::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherResources::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherResources::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherResources))
        return static_cast<void*>(const_cast< UBTeacherResources*>(this));
    return UBAbstractTeacherGuide::qt_metacast(_clname);
}

int UBTeacherResources::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBAbstractTeacherGuide::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
