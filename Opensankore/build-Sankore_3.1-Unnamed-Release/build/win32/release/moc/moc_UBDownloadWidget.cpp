/****************************************************************************
** Meta object code from reading C++ file 'UBDownloadWidget.h'
**
** Created: Fri 4. May 12:31:29 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBDownloadWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDownloadWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBDownloadProgressDelegate[] = {

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

static const char qt_meta_stringdata_UBDownloadProgressDelegate[] = {
    "UBDownloadProgressDelegate\0"
};

void UBDownloadProgressDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBDownloadProgressDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDownloadProgressDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_UBDownloadProgressDelegate,
      qt_meta_data_UBDownloadProgressDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDownloadProgressDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDownloadProgressDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDownloadProgressDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDownloadProgressDelegate))
        return static_cast<void*>(const_cast< UBDownloadProgressDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int UBDownloadProgressDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBDownloadWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      56,   42,   17,   17, 0x08,
      96,   93,   17,   17, 0x08,
     120,   17,   17,   17, 0x08,
     148,  138,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDownloadWidget[] = {
    "UBDownloadWidget\0\0onFileAddedToDownload()\0"
    "id,crnt,total\0onDownloadUpdated(int,qint64,qint64)\0"
    "id\0onDownloadFinished(int)\0onCancelClicked()\0"
    "pItem,col\0onItemClicked(QTreeWidgetItem*,int)\0"
};

void UBDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDownloadWidget *_t = static_cast<UBDownloadWidget *>(_o);
        switch (_id) {
        case 0: _t->onFileAddedToDownload(); break;
        case 1: _t->onDownloadUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->onDownloadFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onCancelClicked(); break;
        case 4: _t->onItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDownloadWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDownloadWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBDownloadWidget,
      qt_meta_data_UBDownloadWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDownloadWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDownloadWidget))
        return static_cast<void*>(const_cast< UBDownloadWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
