/****************************************************************************
** Meta object code from reading C++ file 'WBToolBarSearch.h'
**
** Created: Mon 20. Nov 11:19:44 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBToolBarSearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBToolBarSearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBToolbarSearch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   16,   16,   16, 0x0a,
      42,   16,   16,   16, 0x0a,
      54,   16,   16,   16, 0x08,
      61,   16,   16,   16, 0x08,
      86,   79,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBToolbarSearch[] = {
    "WBToolbarSearch\0\0url\0search(QUrl)\0"
    "clear()\0searchNow()\0save()\0aboutToShowMenu()\0"
    "action\0triggeredMenuAction(QAction*)\0"
};

void WBToolbarSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBToolbarSearch *_t = static_cast<WBToolbarSearch *>(_o);
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->searchNow(); break;
        case 3: _t->save(); break;
        case 4: _t->aboutToShowMenu(); break;
        case 5: _t->triggeredMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBToolbarSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBToolbarSearch::staticMetaObject = {
    { &WBSearchLineEdit::staticMetaObject, qt_meta_stringdata_WBToolbarSearch,
      qt_meta_data_WBToolbarSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBToolbarSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBToolbarSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBToolbarSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBToolbarSearch))
        return static_cast<void*>(const_cast< WBToolbarSearch*>(this));
    return WBSearchLineEdit::qt_metacast(_clname);
}

int WBToolbarSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBSearchLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WBToolbarSearch::search(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
