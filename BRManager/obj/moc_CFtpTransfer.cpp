/****************************************************************************
** Meta object code from reading C++ file 'CFtpTransfer.h'
**
** Created: Wed Dec 2 07:48:22 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CFtpTransfer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CFtpTransfer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFtpTransfer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   39,   20,   20, 0x0a,
      46,   69,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CFtpTransfer[] = {
    "CFtpTransfer\0done()\0\0slotFtpDone(bool)\0"
    "bError\0slotListInfo(QUrlInfo)\0urlInfo\0"
};

void CFtpTransfer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CFtpTransfer *_t = static_cast<CFtpTransfer *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->slotFtpDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotListInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CFtpTransfer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CFtpTransfer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CFtpTransfer,
      qt_meta_data_CFtpTransfer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CFtpTransfer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CFtpTransfer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CFtpTransfer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFtpTransfer))
        return static_cast<void*>(const_cast< CFtpTransfer*>(this));
    return QObject::qt_metacast(_clname);
}

int CFtpTransfer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CFtpTransfer::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
