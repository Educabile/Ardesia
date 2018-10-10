/****************************************************************************
** Meta object code from reading C++ file 'UBBoardPaletteManager.h'
**
** Created: Mon 20. Nov 11:16:00 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/board/UBBoardPaletteManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBBoardPaletteManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBBoardPaletteManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   22,   22,   22, 0x0a,
      69,   22,   22,   22, 0x0a,
      93,   88,   22,   22, 0x0a,
     133,  107,   22,   22, 0x0a,
     185,  169,   22,   22, 0x2a,
     226,  216,   22,   22, 0x2a,
     259,  251,   22,   22, 0x2a,
     276,   22,   22,   22, 0x0a,
     331,   22,   22,   22, 0x0a,
     368,  360,   22,   22, 0x0a,
     411,  393,   22,   22, 0x0a,
     451,   22,   22,   22, 0x08,
     478,  470,   22,   22, 0x08,
     508,   22,   22,   22, 0x08,
     534,  470,   22,   22, 0x08,
     560,  470,   22,   22, 0x08,
     587,  470,   22,   22, 0x08,
     614,   22,   22,   22, 0x08,
     642,   22,   22,   22, 0x08,
     671,   22,   22,   22, 0x08,
     692,  360,   22,   22, 0x08,
     716,   22,   22,   22, 0x08,
     736,   22,   22,   22, 0x08,
     763,   22,   22,   22, 0x08,
     791,   22,   22,   22, 0x08,
     814,   22,   22,   22, 0x08,
     833,   22,   22,   22, 0x08,
     852,   22,   22,   22, 0x08,
     887,  883,   22,   22, 0x08,
     905,   22,   22,   22, 0x08,
     925,   22,   22,   22, 0x08,
     946,   22,   22,   22, 0x08,
     965,   22,   22,   22, 0x08,
     989,  985,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBBoardPaletteManager[] = {
    "UBBoardPaletteManager\0\0connectToDocController()\0"
    "activeSceneChanged()\0containerResized()\0"
    "pUrl\0addItem(QUrl)\0pPixmap,p,scale,sourceUrl\0"
    "addItem(QPixmap,QPointF,qreal,QUrl)\0"
    "pPixmap,p,scale\0addItem(QPixmap,QPointF,qreal)\0"
    "pPixmap,p\0addItem(QPixmap,QPointF)\0"
    "pPixmap\0addItem(QPixmap)\0"
    "slot_changeMainMode(UBApplicationController::MainMode)\0"
    "slot_changeDesktopMode(bool)\0ckecked\0"
    "toggleErasePalette(bool)\0ckecked,isDefault\0"
    "toggleImageBackgroundPalette(bool,bool)\0"
    "changeBackground()\0checked\0"
    "toggleBackgroundPalette(bool)\0"
    "backgroundPaletteClosed()\0"
    "toggleStylusPalette(bool)\0"
    "toggleDrawingPalette(bool)\0"
    "tooglePodcastPalette(bool)\0"
    "erasePaletteButtonPressed()\0"
    "erasePaletteButtonReleased()\0"
    "erasePaletteClosed()\0togglePagePalette(bool)\0"
    "pagePaletteClosed()\0pagePaletteButtonPressed()\0"
    "pagePaletteButtonReleased()\0"
    "addItemToCurrentPage()\0addItemToNewPage()\0"
    "addItemToLibrary()\0purchaseLinkActivated(QString)\0"
    "url\0linkClicked(QUrl)\0zoomButtonPressed()\0"
    "zoomButtonReleased()\0panButtonPressed()\0"
    "panButtonReleased()\0var\0"
    "changeStylusPaletteOrientation(QVariant)\0"
};

void UBBoardPaletteManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBBoardPaletteManager *_t = static_cast<UBBoardPaletteManager *>(_o);
        switch (_id) {
        case 0: _t->connectToDocController(); break;
        case 1: _t->activeSceneChanged(); break;
        case 2: _t->containerResized(); break;
        case 3: _t->addItem((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->addItem((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4]))); break;
        case 5: _t->addItem((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 6: _t->addItem((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 7: _t->addItem((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 8: _t->slot_changeMainMode((*reinterpret_cast< UBApplicationController::MainMode(*)>(_a[1]))); break;
        case 9: _t->slot_changeDesktopMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleErasePalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleImageBackgroundPalette((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->changeBackground(); break;
        case 13: _t->toggleBackgroundPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->backgroundPaletteClosed(); break;
        case 15: _t->toggleStylusPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->toggleDrawingPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->tooglePodcastPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->erasePaletteButtonPressed(); break;
        case 19: _t->erasePaletteButtonReleased(); break;
        case 20: _t->erasePaletteClosed(); break;
        case 21: _t->togglePagePalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->pagePaletteClosed(); break;
        case 23: _t->pagePaletteButtonPressed(); break;
        case 24: _t->pagePaletteButtonReleased(); break;
        case 25: _t->addItemToCurrentPage(); break;
        case 26: _t->addItemToNewPage(); break;
        case 27: _t->addItemToLibrary(); break;
        case 28: _t->purchaseLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 30: _t->zoomButtonPressed(); break;
        case 31: _t->zoomButtonReleased(); break;
        case 32: _t->panButtonPressed(); break;
        case 33: _t->panButtonReleased(); break;
        case 34: _t->changeStylusPaletteOrientation((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBBoardPaletteManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBBoardPaletteManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UBBoardPaletteManager,
      qt_meta_data_UBBoardPaletteManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBBoardPaletteManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBBoardPaletteManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBBoardPaletteManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBBoardPaletteManager))
        return static_cast<void*>(const_cast< UBBoardPaletteManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UBBoardPaletteManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void UBBoardPaletteManager::connectToDocController()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
