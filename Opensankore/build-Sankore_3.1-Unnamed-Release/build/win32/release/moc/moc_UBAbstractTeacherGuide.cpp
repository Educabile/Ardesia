/****************************************************************************
** Meta object code from reading C++ file 'UBAbstractTeacherGuide.h'
**
** Created: Fri 4. May 12:31:49 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBAbstractTeacherGuide.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBAbstractTeacherGuide.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBAbstractTeacherGuide[] = {

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
      24,   23,   23,   23, 0x0a,
      37,   23,   23,   23, 0x0a,
      60,   23,   23,   23, 0x0a,
      85,   23,   23,   23, 0x0a,
     116,  108,   23,   23, 0x08,
     148,  108,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBAbstractTeacherGuide[] = {
    "UBAbstractTeacherGuide\0\0changeMode()\0"
    "showPresentationMode()\0connectToStylusPalette()\0"
    "onActiveSceneChanged()\0checked\0"
    "onTriggeredKeyboardAction(bool)\0"
    "onTriggeredAction(bool)\0"
};

void UBAbstractTeacherGuide::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBAbstractTeacherGuide *_t = static_cast<UBAbstractTeacherGuide *>(_o);
        switch (_id) {
        case 0: _t->changeMode(); break;
        case 1: _t->showPresentationMode(); break;
        case 2: _t->connectToStylusPalette(); break;
        case 3: _t->onActiveSceneChanged(); break;
        case 4: _t->onTriggeredKeyboardAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onTriggeredAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBAbstractTeacherGuide::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBAbstractTeacherGuide::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_UBAbstractTeacherGuide,
      qt_meta_data_UBAbstractTeacherGuide, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBAbstractTeacherGuide::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBAbstractTeacherGuide::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBAbstractTeacherGuide::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBAbstractTeacherGuide))
        return static_cast<void*>(const_cast< UBAbstractTeacherGuide*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int UBAbstractTeacherGuide::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
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
