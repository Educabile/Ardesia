/****************************************************************************
** Meta object code from reading C++ file 'UBWebController.h'
**
** Created: Fri 4. May 12:33:23 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/web/UBWebController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBWebController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBWebController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      49,   17,   16,   16, 0x05,
      91,   82,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     124,   16,   16,   16, 0x0a,
     154,  146,   16,   16, 0x0a,
     188,  180,   16,   16, 0x0a,
     216,   16,   16,   16, 0x0a,
     232,   16,   16,   16, 0x0a,
     248,  180,   16,   16, 0x0a,
     279,   16,  270,   16, 0x0a,
     304,  293,   16,   16, 0x0a,
     324,   16,   16,   16, 0x0a,
     340,   16,   16,   16, 0x0a,
     368,  363,  358,   16, 0x0a,
     387,   16,  358,   16, 0x0a,
     408,   16,   16,   16, 0x0a,
     431,  363,  358,   16, 0x0a,
     448,   16,   16,   16, 0x0a,
     455,   16,   16,   16, 0x0a,
     463,   16,   16,   16, 0x0a,
     469,   16,   16,   16, 0x08,
     489,  180,   16,   16, 0x08,
     509,   16,   16,   16, 0x08,
     535,  526,   16,   16, 0x08,
     575,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBWebController[] = {
    "UBWebController\0\0pCapturedPixmap,pageMode,source\0"
    "imageCaptured(QPixmap,bool,QUrl)\0"
    "pWebView\0activeWebPageChanged(WBWebView*)\0"
    "screenLayoutChanged()\0pWidget\0"
    "setSourceWidget(QWidget*)\0checked\0"
    "toggleWebToolsPalette(bool)\0captureWindow()\0"
    "customCapture()\0toogleMirroring(bool)\0"
    "QWidget*\0controlView()\0currentUrl\0"
    "captureoEmbed(QUrl)\0captureoEmbed()\0"
    "captureEduMedia()\0bool\0pUrl\0"
    "isOEmbedable(QUrl)\0hasEmbeddedContent()\0"
    "getEmbeddableContent()\0isEduMedia(QUrl)\0"
    "copy()\0paste()\0cut()\0activePageChanged()\0"
    "toggleWebTrap(bool)\0webTrapContent()\0"
    "contents\0onOEmbedParsed(QVector<sOEmbedContent>)\0"
    "onActionBookmark()\0"
};

void UBWebController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBWebController *_t = static_cast<UBWebController *>(_o);
        switch (_id) {
        case 0: _t->imageCaptured((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 1: _t->activeWebPageChanged((*reinterpret_cast< WBWebView*(*)>(_a[1]))); break;
        case 2: _t->screenLayoutChanged(); break;
        case 3: _t->setSourceWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->toggleWebToolsPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->captureWindow(); break;
        case 6: _t->customCapture(); break;
        case 7: _t->toogleMirroring((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { QWidget* _r = _t->controlView();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: _t->captureoEmbed((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 10: _t->captureoEmbed(); break;
        case 11: _t->captureEduMedia(); break;
        case 12: { bool _r = _t->isOEmbedable((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasEmbeddedContent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->getEmbeddableContent(); break;
        case 15: { bool _r = _t->isEduMedia((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->copy(); break;
        case 17: _t->paste(); break;
        case 18: _t->cut(); break;
        case 19: _t->activePageChanged(); break;
        case 20: _t->toggleWebTrap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->webTrapContent(); break;
        case 22: _t->onOEmbedParsed((*reinterpret_cast< QVector<sOEmbedContent>(*)>(_a[1]))); break;
        case 23: _t->onActionBookmark(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBWebController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBWebController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBWebController,
      qt_meta_data_UBWebController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBWebController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBWebController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBWebController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBWebController))
        return static_cast<void*>(const_cast< UBWebController*>(this));
    return QObject::qt_metacast(_clname);
}

int UBWebController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void UBWebController::imageCaptured(const QPixmap & _t1, bool _t2, const QUrl & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBWebController::activeWebPageChanged(WBWebView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
