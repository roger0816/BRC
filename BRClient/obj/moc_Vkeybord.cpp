/****************************************************************************
** Meta object code from reading C++ file 'Vkeybord.h'
**
** Created: Wed Dec 2 07:38:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vkeybord.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vkeybord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Vkeybord[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   21,   21,   21, 0x08,
      22,   21,   21,   21, 0x08,
      34,   21,   21,   21, 0x08,
      56,   81,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Vkeybord[] = {
    "Vkeybord\0slotInput()\0\0slotEnter()\0"
    "slotChangeUpper(bool)\0slotOpenKeyBord(QLabel*)\0"
    "lb\0"
};

void Vkeybord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Vkeybord *_t = static_cast<Vkeybord *>(_o);
        switch (_id) {
        case 0: _t->slotInput(); break;
        case 1: _t->slotEnter(); break;
        case 2: _t->slotChangeUpper((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotOpenKeyBord((*reinterpret_cast< QLabel*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Vkeybord::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Vkeybord::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vkeybord,
      qt_meta_data_Vkeybord, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Vkeybord::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Vkeybord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Vkeybord::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Vkeybord))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
