/****************************************************************************
** Meta object code from reading C++ file 'UBSettings.h'
**
** Created: Mon 20. Nov 11:16:08 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/core/UBSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   34,   11,   11, 0x0a,
      62,   34,   11,   11, 0x0a,
      84,   34,   11,   11, 0x0a,
     109,   34,   11,   11, 0x0a,
     134,   34,   11,   11, 0x0a,
     165,  159,   11,   11, 0x0a,
     191,  159,   11,   11, 0x0a,
     219,  159,   11,   11, 0x0a,
     255,  247,   11,   11, 0x0a,
     295,  285,   11,   11, 0x0a,
     325,  285,   11,   11, 0x0a,
     384,  367,  358,   11, 0x0a,
     412,  408,  358,   11, 0x2a,
     437,  427,   11,   11, 0x0a,
     464,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBSettings[] = {
    "UBSettings\0\0colorContextChanged()\0"
    "index\0setPenWidthIndex(int)\0"
    "setPenColorIndex(int)\0setMarkerWidthIndex(int)\0"
    "setMarkerColorIndex(int)\0"
    "setEraserWidthIndex(int)\0width\0"
    "setEraserFineWidth(qreal)\0"
    "setEraserMediumWidth(qreal)\0"
    "setEraserStrongWidth(qreal)\0visible\0"
    "setStylusPaletteVisible(bool)\0sensitive\0"
    "setPenPressureSensitive(bool)\0"
    "setMarkerPressureSensitive(bool)\0"
    "QVariant\0key,defaultValue\0"
    "value(QString,QVariant)\0key\0value(QString)\0"
    "key,value\0setValue(QString,QVariant)\0"
    "colorChanged()\0"
};

void UBSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBSettings *_t = static_cast<UBSettings *>(_o);
        switch (_id) {
        case 0: _t->colorContextChanged(); break;
        case 1: _t->setPenWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPenColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMarkerWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMarkerColorIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setEraserWidthIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setEraserFineWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setEraserMediumWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setEraserStrongWidth((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setStylusPaletteVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setPenPressureSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setMarkerPressureSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 15: _t->colorChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBSettings,
      qt_meta_data_UBSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBSettings))
        return static_cast<void*>(const_cast< UBSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int UBSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void UBSettings::colorContextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
