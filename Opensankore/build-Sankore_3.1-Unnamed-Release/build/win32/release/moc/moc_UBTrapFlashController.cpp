/****************************************************************************
** Meta object code from reading C++ file 'UBTrapFlashController.h'
**
** Created: Fri 4. May 12:33:26 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/UBTrapFlashController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBTrapFlashController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBTrapWebPageContentController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      49,   32,   31,   31, 0x0a,
      87,   31,   31,   31, 0x0a,
     109,   31,   31,   31, 0x0a,
     130,   31,   31,   31, 0x0a,
     149,   31,   31,   31, 0x0a,
     166,   31,   31,   31, 0x0a,
     185,   31,   31,   31, 0x0a,
     215,  202,   31,   31, 0x08,
     305,  237,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBTrapWebPageContentController[] = {
    "UBTrapWebPageContentController\0\0"
    "pCurrentWebFrame\0updateTrapContentFromPage(QWebFrame*)\0"
    "text_Changed(QString)\0text_Edited(QString)\0"
    "addItemToLibrary()\0addItemToBoard()\0"
    "addLinkToLibrary()\0addLinkToBoard()\0"
    "pObjectIndex\0selectHtmlObject(int)\0"
    "pSuccess,sourceUrl,pContentTypeHeader,pData,pPos,pSize,isBackground\0"
    "oEmbedRequestFinished(bool,QUrl,QString,QByteArray,QPointF,QSize,bool)\0"
};

void UBTrapWebPageContentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBTrapWebPageContentController *_t = static_cast<UBTrapWebPageContentController *>(_o);
        switch (_id) {
        case 0: _t->updateTrapContentFromPage((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 1: _t->text_Changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->text_Edited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addItemToLibrary(); break;
        case 4: _t->addItemToBoard(); break;
        case 5: _t->addLinkToLibrary(); break;
        case 6: _t->addLinkToBoard(); break;
        case 7: _t->selectHtmlObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->oEmbedRequestFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< QSize(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBTrapWebPageContentController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBTrapWebPageContentController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBTrapWebPageContentController,
      qt_meta_data_UBTrapWebPageContentController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBTrapWebPageContentController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBTrapWebPageContentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBTrapWebPageContentController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBTrapWebPageContentController))
        return static_cast<void*>(const_cast< UBTrapWebPageContentController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBTrapWebPageContentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
