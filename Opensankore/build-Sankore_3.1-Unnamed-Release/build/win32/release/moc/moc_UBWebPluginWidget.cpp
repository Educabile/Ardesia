/****************************************************************************
** Meta object code from reading C++ file 'UBWebPluginWidget.h'
**
** Created: Fri 4. May 12:33:28 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/UBWebPluginWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWebPluginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWebPluginWidget[] = {

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
      44,   19,   18,   18, 0x08,
     120,   76,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBWebPluginWidget[] = {
    "UBWebPluginWidget\0\0bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0"
    "pSuccess,sourceUrl,pContentTypeHeader,pData\0"
    "downloadFinished(bool,QUrl,QString,QByteArray)\0"
};

void UBWebPluginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWebPluginWidget *_t = static_cast<UBWebPluginWidget *>(_o);
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->downloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWebPluginWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWebPluginWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBWebPluginWidget,
      qt_meta_data_UBWebPluginWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWebPluginWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWebPluginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWebPluginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWebPluginWidget))
        return static_cast<void*>(const_cast< UBWebPluginWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBWebPluginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
