/****************************************************************************
** Meta object code from reading C++ file 'UBOEmbedParser.h'
**
** Created: Fri 4. May 12:33:28 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/UBOEmbedParser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBOEmbedParser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBOEmbedParser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x05,
      51,   42,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   89,   15,   15, 0x08,
     122,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBOEmbedParser[] = {
    "UBOEmbedParser\0\0url\0parseContent(QString)\0"
    "contents\0oembedParsed(QVector<sOEmbedContent>)\0"
    "reply\0onFinished(QNetworkReply*)\0"
    "onParseContent(QString)\0"
};

void UBOEmbedParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBOEmbedParser *_t = static_cast<UBOEmbedParser *>(_o);
        switch (_id) {
        case 0: _t->parseContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->oembedParsed((*reinterpret_cast< QVector<sOEmbedContent>(*)>(_a[1]))); break;
        case 2: _t->onFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->onParseContent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBOEmbedParser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBOEmbedParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBOEmbedParser,
      qt_meta_data_UBOEmbedParser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBOEmbedParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBOEmbedParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBOEmbedParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBOEmbedParser))
        return static_cast<void*>(const_cast< UBOEmbedParser*>(this));
    return QObject::qt_metacast(_clname);
}

int UBOEmbedParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UBOEmbedParser::parseContent(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBOEmbedParser::oembedParsed(QVector<sOEmbedContent> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
