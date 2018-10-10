/****************************************************************************
** Meta object code from reading C++ file 'UBDocumentPublisher.h'
**
** Created: Mon 20. Nov 11:15:51 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/adaptors/publishing/UBDocumentPublisher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBDocumentPublisher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBProxyLoginDlg[] = {

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

static const char qt_meta_stringdata_UBProxyLoginDlg[] = {
    "UBProxyLoginDlg\0"
};

void UBProxyLoginDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBProxyLoginDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBProxyLoginDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBProxyLoginDlg,
      qt_meta_data_UBProxyLoginDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBProxyLoginDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBProxyLoginDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBProxyLoginDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBProxyLoginDlg))
        return static_cast<void*>(const_cast< UBProxyLoginDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBProxyLoginDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_UBPublicationDlg[] = {

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
      18,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBPublicationDlg[] = {
    "UBPublicationDlg\0\0onTextChanged()\0"
};

void UBPublicationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBPublicationDlg *_t = static_cast<UBPublicationDlg *>(_o);
        switch (_id) {
        case 0: _t->onTextChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBPublicationDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBPublicationDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UBPublicationDlg,
      qt_meta_data_UBPublicationDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBPublicationDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBPublicationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBPublicationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBPublicationDlg))
        return static_cast<void*>(const_cast< UBPublicationDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int UBPublicationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_UBDocumentPublisher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   33,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBDocumentPublisher[] = {
    "UBDocumentPublisher\0\0loginDone()\0reply\0"
    "onFinished(QNetworkReply*)\0"
};

void UBDocumentPublisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBDocumentPublisher *_t = static_cast<UBDocumentPublisher *>(_o);
        switch (_id) {
        case 0: _t->loginDone(); break;
        case 1: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBDocumentPublisher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBDocumentPublisher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBDocumentPublisher,
      qt_meta_data_UBDocumentPublisher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBDocumentPublisher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBDocumentPublisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBDocumentPublisher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBDocumentPublisher))
        return static_cast<void*>(const_cast< UBDocumentPublisher*>(this));
    return QObject::qt_metacast(_clname);
}

int UBDocumentPublisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UBDocumentPublisher::loginDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
