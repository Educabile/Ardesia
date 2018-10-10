/****************************************************************************
** Meta object code from reading C++ file 'UBTeacherGuideResourceEditionWidget.h'
**
** Created: Fri 4. May 12:31:48 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBTeacherGuideResourceEditionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBTeacherGuideResourceEditionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTeacherGuideResourceEditionWidget[] = {

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
      59,   37,   36,   36, 0x0a,
     125,  111,   36,   36, 0x2a,
     164,   36,   36,   36, 0x0a,
     187,   36,   36,   36, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBTeacherGuideResourceEditionWidget[] = {
    "UBTeacherGuideResourceEditionWidget\0"
    "\0widget,column,element\0"
    "onAddItemClicked(QTreeWidgetItem*,int,QDomElement*)\0"
    "widget,column\0onAddItemClicked(QTreeWidgetItem*,int)\0"
    "onActiveSceneChanged()\0onActiveDocumentChanged()\0"
};

void UBTeacherGuideResourceEditionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTeacherGuideResourceEditionWidget *_t = static_cast<UBTeacherGuideResourceEditionWidget *>(_o);
        switch (_id) {
        case 0: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDomElement*(*)>(_a[3]))); break;
        case 1: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onActiveSceneChanged(); break;
        case 3: _t->onActiveDocumentChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTeacherGuideResourceEditionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuideResourceEditionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTeacherGuideResourceEditionWidget,
      qt_meta_data_UBTeacherGuideResourceEditionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuideResourceEditionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuideResourceEditionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuideResourceEditionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuideResourceEditionWidget))
        return static_cast<void*>(const_cast< UBTeacherGuideResourceEditionWidget*>(this));
    if (!strcmp(_clname, "IDataStorage"))
        return static_cast< IDataStorage*>(const_cast< UBTeacherGuideResourceEditionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTeacherGuideResourceEditionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
