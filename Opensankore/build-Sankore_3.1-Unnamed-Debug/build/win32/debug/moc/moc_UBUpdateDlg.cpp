/****************************************************************************
** Meta object code from reading C++ file 'UBUpdateDlg.h'
**
** Created: Mon 20. Nov 11:17:29 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBUpdateDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBUpdateDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBUpdateDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   27,   12,   12, 0x0a,
      56,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,
      87,   78,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBUpdateDlg[] = {
    "UBUpdateDlg\0\0updateFiles()\0bResult\0"
    "onFilesUpdated(bool)\0onBrowse()\0"
    "onUpdate()\0fileName\0transitioningFile(QString)\0"
};

void UBUpdateDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBUpdateDlg *_t = static_cast<UBUpdateDlg *>(_o);
        switch (_id) {
        case 0: _t->updateFiles(); break;
        case 1: _t->onFilesUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onBrowse(); break;
        case 3: _t->onUpdate(); break;
        case 4: _t->transitioningFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBUpdateDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBUpdateDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBUpdateDlg,
      qt_meta_data_UBUpdateDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBUpdateDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBUpdateDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBUpdateDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBUpdateDlg))
        return static_cast<void*>(const_cast< UBUpdateDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBUpdateDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void UBUpdateDlg::updateFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
