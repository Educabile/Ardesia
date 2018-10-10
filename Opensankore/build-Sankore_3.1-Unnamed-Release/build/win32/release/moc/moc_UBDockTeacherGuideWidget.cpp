/****************************************************************************
** Meta object code from reading C++ file 'UBDockTeacherGuideWidget.h'
**
** Created: Fri 4. May 12:31:38 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDockTeacherGuideWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDockTeacherGuideWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDockTeacherGuideWidget[] = {

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

static const char qt_meta_stringdata_UBDockTeacherGuideWidget[] = {
    "UBDockTeacherGuideWidget\0"
};

void UBDockTeacherGuideWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDockTeacherGuideWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDockTeacherGuideWidget::staticMetaObject = {
    { &UBDockPaletteWidget::staticMetaObject, qt_meta_stringdata_UBDockTeacherGuideWidget,
      qt_meta_data_UBDockTeacherGuideWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDockTeacherGuideWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDockTeacherGuideWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDockTeacherGuideWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDockTeacherGuideWidget))
        return static_cast<void*>(const_cast< UBDockTeacherGuideWidget*>(this));
    return UBDockPaletteWidget::qt_metacast(_clname);
}

int UBDockTeacherGuideWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBDockPaletteWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
