/****************************************************************************
** Meta object code from reading C++ file 'ListenKeyEvent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ListenKeyEvent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListenKeyEvent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ListenKeyEvent_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListenKeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListenKeyEvent_t qt_meta_stringdata_ListenKeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ListenKeyEvent"
QT_MOC_LITERAL(1, 15, 9), // "signalKey"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12) // "signalDevNum"

    },
    "ListenKeyEvent\0signalKey\0\0signalDevNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListenKeyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       3,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ListenKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListenKeyEvent *_t = static_cast<ListenKeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalDevNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ListenKeyEvent::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListenKeyEvent::signalKey)) {
                *result = 0;
            }
        }
        {
            typedef void (ListenKeyEvent::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListenKeyEvent::signalDevNum)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ListenKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ListenKeyEvent.data,
      qt_meta_data_ListenKeyEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ListenKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListenKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ListenKeyEvent.stringdata0))
        return static_cast<void*>(const_cast< ListenKeyEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int ListenKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ListenKeyEvent::signalKey(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ListenKeyEvent::signalDevNum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
