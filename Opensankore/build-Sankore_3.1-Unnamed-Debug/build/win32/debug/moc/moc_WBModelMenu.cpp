/****************************************************************************
** Meta object code from reading C++ file 'WBModelMenu.h'
**
** Created: Mon 20. Nov 11:19:27 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBModelMenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBModelMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBModelMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,
      47,   42,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   12,   12,   12, 0x08,
      85,   78,   12,   12, 0x08,
     105,   78,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBModelMenu[] = {
    "WBModelMenu\0\0index\0activated(QModelIndex)\0"
    "text\0hovered(QString)\0aboutToShow()\0"
    "action\0triggered(QAction*)\0hovered(QAction*)\0"
};

void WBModelMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBModelMenu *_t = static_cast<WBModelMenu *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->aboutToShow(); break;
        case 3: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBModelMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBModelMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_WBModelMenu,
      qt_meta_data_WBModelMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBModelMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBModelMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBModelMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBModelMenu))
        return static_cast<void*>(const_cast< WBModelMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int WBModelMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void WBModelMenu::activated(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WBModelMenu::hovered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
