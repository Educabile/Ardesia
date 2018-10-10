/****************************************************************************
** Meta object code from reading C++ file 'UBLibraryAPI.h'
**
** Created: Mon 20. Nov 11:15:55 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/api/UBLibraryAPI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBLibraryAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBLibraryAPI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   82,   13,   13, 0x0a,
     177,  155,   13,   13, 0x2a,
     232,  212,   13,   13, 0x2a,
     281,  263,   13,   13, 0x2a,
     319,  308,   13,   13, 0x2a,
     347,  342,   13,   13, 0x2a,
     366,  342,   13,   13, 0x0a,
     394,  385,   13,   13, 0x0a,
     426,  419,   13,   13, 0x2a,
     447,  342,   13,   13, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_UBLibraryAPI[] = {
    "UBLibraryAPI\0\0url,pos,pSize,background\0"
    "downloadTriggered(QUrl,QPointF,QSize,bool)\0"
    "pUrl,width,height,x,y,background\0"
    "addObject(QString,int,int,int,int,bool)\0"
    "pUrl,width,height,x,y\0"
    "addObject(QString,int,int,int,int)\0"
    "pUrl,width,height,x\0addObject(QString,int,int,int)\0"
    "pUrl,width,height\0addObject(QString,int,int)\0"
    "pUrl,width\0addObject(QString,int)\0"
    "pUrl\0addObject(QString)\0startDrag(QString)\0"
    "pUrl,x,y\0addTool(QString,int,int)\0"
    "pUrl,x\0addTool(QString,int)\0"
    "addTool(QString)\0"
};

void UBLibraryAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBLibraryAPI *_t = static_cast<UBLibraryAPI *>(_o);
        switch (_id) {
        case 0: _t->downloadTriggered((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QSize(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->addObject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->addObject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->startDrag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->addTool((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->addTool((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->addTool((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBLibraryAPI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBLibraryAPI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBLibraryAPI,
      qt_meta_data_UBLibraryAPI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBLibraryAPI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBLibraryAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBLibraryAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBLibraryAPI))
        return static_cast<void*>(const_cast< UBLibraryAPI*>(this));
    return QObject::qt_metacast(_clname);
}

int UBLibraryAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void UBLibraryAPI::downloadTriggered(const QUrl & _t1, const QPointF & _t2, const QSize & _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
