/****************************************************************************
** Meta object code from reading C++ file 'UBFeaturesActionBar.h'
**
** Created: Fri 4. May 12:31:37 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/gui/UBFeaturesActionBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBFeaturesActionBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBFeaturesActionBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   21,   20,   20, 0x05,
      49,   20,   20,   20, 0x05,
      74,   69,   20,   20, 0x05,
     116,   69,   20,   20, 0x05,
     157,   69,   20,   20, 0x05,
     203,   20,   20,   20, 0x05,
     227,   20,   20,   20, 0x05,
     256,   20,   20,   20, 0x05,
     281,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     299,  295,   20,   20, 0x08,
     328,   20,   20,   20, 0x08,
     348,   20,   20,   20, 0x08,
     367,   20,   20,   20, 0x08,
     392,   20,   20,   20, 0x08,
     408,   20,   20,   20, 0x08,
     430,   20,   20,   20, 0x08,
     439,   20,   20,   20, 0x08,
     457,  450,   20,   20, 0x08,
     481,  450,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBFeaturesActionBar[] = {
    "UBFeaturesActionBar\0\0text\0"
    "searchElement(QString)\0newFolderToCreate()\0"
    "data\0deleteElements(const UBFeaturesMimeData*)\0"
    "addToFavorite(const UBFeaturesMimeData*)\0"
    "removeFromFavorite(const UBFeaturesMimeData*)\0"
    "addElementsToFavorite()\0"
    "removeElementsFromFavorite()\0"
    "deleteSelectedElements()\0rescanModel()\0"
    "txt\0onSearchTextChanged(QString)\0"
    "onActionNewFolder()\0onActionFavorite()\0"
    "onActionRemoveFavorite()\0onActionTrash()\0"
    "onActionRescanModel()\0lockIt()\0"
    "unlockIt()\0pAllow\0allowNewFolderBtn(bool)\0"
    "allowDeleteButton(bool)\0"
};

void UBFeaturesActionBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBFeaturesActionBar *_t = static_cast<UBFeaturesActionBar *>(_o);
        switch (_id) {
        case 0: _t->searchElement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newFolderToCreate(); break;
        case 2: _t->deleteElements((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 3: _t->addToFavorite((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 4: _t->removeFromFavorite((*reinterpret_cast< const UBFeaturesMimeData*(*)>(_a[1]))); break;
        case 5: _t->addElementsToFavorite(); break;
        case 6: _t->removeElementsFromFavorite(); break;
        case 7: _t->deleteSelectedElements(); break;
        case 8: _t->rescanModel(); break;
        case 9: _t->onSearchTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onActionNewFolder(); break;
        case 11: _t->onActionFavorite(); break;
        case 12: _t->onActionRemoveFavorite(); break;
        case 13: _t->onActionTrash(); break;
        case 14: _t->onActionRescanModel(); break;
        case 15: _t->lockIt(); break;
        case 16: _t->unlockIt(); break;
        case 17: _t->allowNewFolderBtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->allowDeleteButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBFeaturesActionBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBFeaturesActionBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UBFeaturesActionBar,
      qt_meta_data_UBFeaturesActionBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBFeaturesActionBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBFeaturesActionBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBFeaturesActionBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBFeaturesActionBar))
        return static_cast<void*>(const_cast< UBFeaturesActionBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int UBFeaturesActionBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void UBFeaturesActionBar::searchElement(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBFeaturesActionBar::newFolderToCreate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBFeaturesActionBar::deleteElements(const UBFeaturesMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UBFeaturesActionBar::addToFavorite(const UBFeaturesMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UBFeaturesActionBar::removeFromFavorite(const UBFeaturesMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBFeaturesActionBar::addElementsToFavorite()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void UBFeaturesActionBar::removeElementsFromFavorite()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void UBFeaturesActionBar::deleteSelectedElements()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void UBFeaturesActionBar::rescanModel()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
