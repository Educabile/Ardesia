/****************************************************************************
** Meta object code from reading C++ file 'WBUrlLineEdit.h'
**
** Created: Fri 4. May 12:33:52 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/browser/WBUrlLineEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WBUrlLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WBExLineEdit[] = {

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

static const char qt_meta_stringdata_WBExLineEdit[] = {
    "WBExLineEdit\0"
};

void WBExLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WBExLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBExLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WBExLineEdit,
      qt_meta_data_WBExLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBExLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBExLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBExLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBExLineEdit))
        return static_cast<void*>(const_cast< WBExLineEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int WBExLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_WBUrlLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WBUrlLineEdit[] = {
    "WBUrlLineEdit\0\0url\0webViewUrlChanged(QUrl)\0"
};

void WBUrlLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WBUrlLineEdit *_t = static_cast<WBUrlLineEdit *>(_o);
        switch (_id) {
        case 0: _t->webViewUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WBUrlLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WBUrlLineEdit::staticMetaObject = {
    { &WBExLineEdit::staticMetaObject, qt_meta_stringdata_WBUrlLineEdit,
      qt_meta_data_WBUrlLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WBUrlLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WBUrlLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WBUrlLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBUrlLineEdit))
        return static_cast<void*>(const_cast< WBUrlLineEdit*>(this));
    return WBExLineEdit::qt_metacast(_clname);
}

int WBUrlLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBExLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
