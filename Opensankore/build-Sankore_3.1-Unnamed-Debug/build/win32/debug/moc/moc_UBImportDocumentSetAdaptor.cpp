/****************************************************************************
** Meta object code from reading C++ file 'UBImportDocumentSetAdaptor.h'
**
** Created: Mon 20. Nov 11:15:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/adaptors/UBImportDocumentSetAdaptor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBImportDocumentSetAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBImportDocumentSetAdaptor[] = {

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

static const char qt_meta_stringdata_UBImportDocumentSetAdaptor[] = {
    "UBImportDocumentSetAdaptor\0"
};

void UBImportDocumentSetAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UBImportDocumentSetAdaptor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBImportDocumentSetAdaptor::staticMetaObject = {
    { &UBImportAdaptor::staticMetaObject, qt_meta_stringdata_UBImportDocumentSetAdaptor,
      qt_meta_data_UBImportDocumentSetAdaptor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBImportDocumentSetAdaptor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBImportDocumentSetAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBImportDocumentSetAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBImportDocumentSetAdaptor))
        return static_cast<void*>(const_cast< UBImportDocumentSetAdaptor*>(this));
    return UBImportAdaptor::qt_metacast(_clname);
}

int UBImportDocumentSetAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBImportAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
