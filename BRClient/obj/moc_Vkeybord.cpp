/****************************************************************************
** Meta object code from reading C++ file 'Vkeybord.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vkeybord.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vkeybord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Vkeybord_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vkeybord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vkeybord_t qt_meta_stringdata_Vkeybord = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Vkeybord"
QT_MOC_LITERAL(1, 9, 9), // "slotInput"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "slotEnter"
QT_MOC_LITERAL(4, 30, 15), // "slotChangeUpper"
QT_MOC_LITERAL(5, 46, 15), // "slotOpenKeyBord"
QT_MOC_LITERAL(6, 62, 7), // "QLabel*"
QT_MOC_LITERAL(7, 70, 2) // "lb"

    },
    "Vkeybord\0slotInput\0\0slotEnter\0"
    "slotChangeUpper\0slotOpenKeyBord\0QLabel*\0"
    "lb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vkeybord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       5,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Vkeybord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Vkeybord *_t = static_cast<Vkeybord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInput(); break;
        case 1: _t->slotEnter(); break;
        case 2: _t->slotChangeUpper((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotOpenKeyBord((*reinterpret_cast< QLabel*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Vkeybord::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vkeybord.data,
      qt_meta_data_Vkeybord,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Vkeybord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vkeybord::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Vkeybord.stringdata0))
        return static_cast<void*>(const_cast< Vkeybord*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vkeybord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
