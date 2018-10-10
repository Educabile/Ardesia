/****************************************************************************
** Meta object code from reading C++ file 'UBBoardView.h'
**
** Created: Fri 4. May 12:29:02 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Sankore-3.1/src/board/UBBoardView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UBBoardView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UBBoardView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x05,
      42,   12,   12,   12, 0x05,
      51,   12,   12,   12, 0x05,
      59,   12,   12,   12, 0x05,
      74,   13,   12,   12, 0x05,
      98,   13,   12,   12, 0x05,
     123,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,  150,   12,   12, 0x08,
     186,  184,   12,   12, 0x0a,
     217,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UBBoardView[] = {
    "UBBoardView\0\0event\0resized(QResizeEvent*)\0"
    "hidden()\0shown()\0clickOnBoard()\0"
    "mouseMove(QMouseEvent*)\0"
    "mousePress(QMouseEvent*)\0"
    "mouseRelease(QMouseEvent*)\0newValue\0"
    "settingChanged(QVariant)\0b\0"
    "virtualKeyboardActivated(bool)\0"
    "longPressEvent()\0"
};

void UBBoardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UBBoardView *_t = static_cast<UBBoardView *>(_o);
        switch (_id) {
        case 0: _t->resized((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 1: _t->hidden(); break;
        case 2: _t->shown(); break;
        case 3: _t->clickOnBoard(); break;
        case 4: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->settingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 8: _t->virtualKeyboardActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->longPressEvent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UBBoardView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UBBoardView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_UBBoardView,
      qt_meta_data_UBBoardView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UBBoardView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UBBoardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UBBoardView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UBBoardView))
        return static_cast<void*>(const_cast< UBBoardView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int UBBoardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UBBoardView::resized(QResizeEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UBBoardView::hidden()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UBBoardView::shown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UBBoardView::clickOnBoard()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UBBoardView::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UBBoardView::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UBBoardView::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
