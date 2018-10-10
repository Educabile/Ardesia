/****************************************************************************
** Meta object code from reading C++ file 'UBGraphicsTextItemDelegate.h'
**
** Created: Mon 20. Nov 11:16:45 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/domain/UBGraphicsTextItemDelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBGraphicsTextItemDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBGraphicsTextItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      46,   27,   27,   27, 0x0a,
      72,   64,   27,   27, 0x0a,
      85,   27,   27,   27, 0x0a,
     102,   27,   27,   27, 0x0a,
     114,   27,   27,   27, 0x08,
     125,   27,   27,   27, 0x08,
     139,   27,   27,   27, 0x08,
     155,   27,   27,   27, 0x08,
     174,   27,   27,   27, 0x08,
     186,   27,   27,   27, 0x08,
     201,   27,   27,   27, 0x08,
     216,   27,   27,   27, 0x08,
     238,   27,   27,   27, 0x08,
     253,   27,   27,   27, 0x08,
     273,   27,   27,   27, 0x08,
     287,   27,   27,   27, 0x08,
     299,   27,   27,   27, 0x08,
     314,   27,   27,   27, 0x08,
     334,   27,   27,   27, 0x08,
     356,   27,   27,   27, 0x08,
     377,   27,   27,   27, 0x08,
     400,   27,   27,   27, 0x08,
     422,   27,   27,   27, 0x08,
     432,   27,   27,   27, 0x08,
     445,   27,   27,   27, 0x08,
     467,   27,   27,   27, 0x08,
     488,   27,   27,   27, 0x08,
     508,   27,   27,   27, 0x08,
     525,   27,   27,   27, 0x08,
     540,   27,   27,   27, 0x08,
     552,   27,   27,   27, 0x08,
     574,   27,   27,   27, 0x08,
     593,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UBGraphicsTextItemDelegate[] = {
    "UBGraphicsTextItemDelegate\0\0"
    "contentsChanged()\0setEditable(bool)\0"
    "canUndo\0remove(bool)\0alternHtmlMode()\0"
    "duplicate()\0pickFont()\0setFontBold()\0"
    "setFontItalic()\0setFontUnderline()\0"
    "pickColor()\0decreaseSize()\0increaseSize()\0"
    "pickBackgroundColor()\0setTableSize()\0"
    "setCellProperties()\0insertTable()\0"
    "addIndent()\0removeIndent()\0"
    "insertOrderedList()\0insertUnorderedList()\0"
    "setAlignmentToLeft()\0setAlignmentToCenter()\0"
    "setAlignmentToRight()\0addLink()\0"
    "insertLink()\0insertColumnOnRight()\0"
    "insertColumnOnLeft()\0insertRowOnBottom()\0"
    "insertRowOnTop()\0deleteColumn()\0"
    "deleteRow()\0applyCellProperties()\0"
    "distributeColumn()\0showMenuTable()\0"
};

void UBGraphicsTextItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBGraphicsTextItemDelegate *_t = static_cast<UBGraphicsTextItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->contentsChanged(); break;
        case 1: _t->setEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->remove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->alternHtmlMode(); break;
        case 4: _t->duplicate(); break;
        case 5: _t->pickFont(); break;
        case 6: _t->setFontBold(); break;
        case 7: _t->setFontItalic(); break;
        case 8: _t->setFontUnderline(); break;
        case 9: _t->pickColor(); break;
        case 10: _t->decreaseSize(); break;
        case 11: _t->increaseSize(); break;
        case 12: _t->pickBackgroundColor(); break;
        case 13: _t->setTableSize(); break;
        case 14: _t->setCellProperties(); break;
        case 15: _t->insertTable(); break;
        case 16: _t->addIndent(); break;
        case 17: _t->removeIndent(); break;
        case 18: _t->insertOrderedList(); break;
        case 19: _t->insertUnorderedList(); break;
        case 20: _t->setAlignmentToLeft(); break;
        case 21: _t->setAlignmentToCenter(); break;
        case 22: _t->setAlignmentToRight(); break;
        case 23: _t->addLink(); break;
        case 24: _t->insertLink(); break;
        case 25: _t->insertColumnOnRight(); break;
        case 26: _t->insertColumnOnLeft(); break;
        case 27: _t->insertRowOnBottom(); break;
        case 28: _t->insertRowOnTop(); break;
        case 29: _t->deleteColumn(); break;
        case 30: _t->deleteRow(); break;
        case 31: _t->applyCellProperties(); break;
        case 32: _t->distributeColumn(); break;
        case 33: _t->showMenuTable(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBGraphicsTextItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBGraphicsTextItemDelegate::staticMetaObject = {
    { &UBGraphicsItemDelegate::staticMetaObject, qt_meta_stringdata_UBGraphicsTextItemDelegate,
      qt_meta_data_UBGraphicsTextItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBGraphicsTextItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBGraphicsTextItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBGraphicsTextItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBGraphicsTextItemDelegate))
        return static_cast<void*>(const_cast< UBGraphicsTextItemDelegate*>(this));
    return UBGraphicsItemDelegate::qt_metacast(_clname);
}

int UBGraphicsTextItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UBGraphicsItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
