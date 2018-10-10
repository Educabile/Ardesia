/****************************************************************************
** Meta object code from reading C++ file 'UBPreferencesController.h'
**
** Created: Mon 20. Nov 11:16:12 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBPreferencesController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBPreferencesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBPreferencesDialog[] = {

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

static const char qt_meta_stringdata_UBPreferencesDialog[] = {
    "UBPreferencesDialog\0"
};

void UBPreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBPreferencesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBPreferencesDialog,
      qt_meta_data_UBPreferencesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPreferencesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPreferencesDialog))
        return static_cast<void*>(const_cast< UBPreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBPreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBPreferencesController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      32,   24,   24,   24, 0x09,
      40,   24,   24,   24, 0x09,
      64,   58,   24,   24, 0x09,
      88,   58,   24,   24, 0x09,
     114,   24,   24,   24, 0x09,
     144,  136,   24,   24, 0x09,
     173,  136,   24,   24, 0x09,
     206,  136,   24,   24, 0x09,
     241,   24,   24,   24, 0x09,
     270,   24,   24,   24, 0x09,
     299,   24,   24,   24, 0x09,
     343,  331,   24,   24, 0x09,
     378,  370,   24,   24, 0x09,
     412,  405,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBPreferencesController[] = {
    "UBPreferencesController\0\0show()\0close()\0"
    "defaultSettings()\0value\0widthSliderChanged(int)\0"
    "opacitySliderChanged(int)\0"
    "colorSelected(QColor)\0checked\0"
    "toolbarPositionChanged(bool)\0"
    "toolbarOrientationVertical(bool)\0"
    "toolbarOrientationHorizontal(bool)\0"
    "onCommunityUsernameChanged()\0"
    "onCommunityPasswordChanged()\0"
    "onCommunityPersistenceChanged()\0"
    "currentItem\0onLanguageChanged(QString)\0"
    "clicked\0onStartupTipsClicked(bool)\0"
    "screen\0adjustScreens(int)\0"
};

void UBPreferencesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPreferencesController *_t = static_cast<UBPreferencesController *>(_o);
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->close(); break;
        case 2: _t->defaultSettings(); break;
        case 3: _t->widthSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->opacitySliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->toolbarPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toolbarOrientationVertical((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toolbarOrientationHorizontal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onCommunityUsernameChanged(); break;
        case 10: _t->onCommunityPasswordChanged(); break;
        case 11: _t->onCommunityPersistenceChanged(); break;
        case 12: _t->onLanguageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onStartupTipsClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->adjustScreens((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBPreferencesController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPreferencesController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBPreferencesController,
      qt_meta_data_UBPreferencesController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPreferencesController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPreferencesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPreferencesController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPreferencesController))
        return static_cast<void*>(const_cast< UBPreferencesController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBPreferencesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
