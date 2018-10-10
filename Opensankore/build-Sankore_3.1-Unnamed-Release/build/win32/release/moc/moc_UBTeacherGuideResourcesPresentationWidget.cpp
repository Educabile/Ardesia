/****************************************************************************
** Meta object code from reading C++ file 'UBTeacherGuideResourcesPresentationWidget.h'
**
** Created: Fri 4. May 12:31:49 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBTeacherGuideResourcesPresentationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBTeacherGuideResourcesPresentationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTeacherGuideResourcesPresentationWidget[] = {

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
      43,   42,   42,   42, 0x0a,
      80,   66,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBTeacherGuideResourcesPresentationWidget[] = {
    "UBTeacherGuideResourcesPresentationWidget\0"
    "\0onActiveSceneChanged()\0widget,column\0"
    "onAddItemClicked(QTreeWidgetItem*,int)\0"
};

void UBTeacherGuideResourcesPresentationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTeacherGuideResourcesPresentationWidget *_t = static_cast<UBTeacherGuideResourcesPresentationWidget *>(_o);
        switch (_id) {
        case 0: _t->onActiveSceneChanged(); break;
        case 1: _t->onAddItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTeacherGuideResourcesPresentationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTeacherGuideResourcesPresentationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBTeacherGuideResourcesPresentationWidget,
      qt_meta_data_UBTeacherGuideResourcesPresentationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTeacherGuideResourcesPresentationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTeacherGuideResourcesPresentationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTeacherGuideResourcesPresentationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTeacherGuideResourcesPresentationWidget))
        return static_cast<void*>(const_cast< UBTeacherGuideResourcesPresentationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBTeacherGuideResourcesPresentationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
