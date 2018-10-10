/****************************************************************************
** Meta object code from reading C++ file 'WBEditTableView.h'
**
** Created: Mon 20. Nov 11:19:31 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBEditTableView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBEditTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBEditTableView[] = {

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
      17,   16,   16,   16, 0x0a,
      29,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WBEditTableView[] = {
    "WBEditTableView\0\0removeOne()\0removeAll()\0"
};

void WBEditTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBEditTableView *_t = static_cast<WBEditTableView *>(_o);
        switch (_id) {
        case 0: _t->removeOne(); break;
        case 1: _t->removeAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBEditTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBEditTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_WBEditTableView,
      qt_meta_data_WBEditTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBEditTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBEditTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBEditTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBEditTableView))
        return static_cast<void*>(const_cast< WBEditTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int WBEditTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
