/****************************************************************************
** Meta object code from reading C++ file 'StageSetting.h'
**
** Created: Wed Dec 2 07:38:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StageSetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StageSetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StageSetting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   34,   47,   47, 0x05,
      48,   61,   47,   47, 0x25,

 // slots: signature, parameters, type, tag, flags
      71,   47,   47,   47, 0x08,
      93,   47,   47,   47, 0x08,
     116,   47,   47,   47, 0x08,
     143,   47,   47,   47, 0x08,
     167,   47,   47,   47, 0x08,
     190,   47,   47,   47, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StageSetting[] = {
    "StageSetting\0clicked(int,QString)\0"
    "iStageIdx,st\0\0clicked(int)\0iStageIdx\0"
    "slotLanguageClicked()\0showEvent(QShowEvent*)\0"
    "resizeEvent(QResizeEvent*)\0"
    "on_btnCancel_released()\0on_btnCheck_released()\0"
    "on_btnLinkTest_clicked()\0"
};

void StageSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StageSetting *_t = static_cast<StageSetting *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotLanguageClicked(); break;
        case 3: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 4: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 5: _t->on_btnCancel_released(); break;
        case 6: _t->on_btnCheck_released(); break;
        case 7: _t->on_btnLinkTest_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StageSetting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StageSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StageSetting,
      qt_meta_data_StageSetting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StageSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StageSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StageSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StageSetting))
        return static_cast<void*>(const_cast< StageSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int StageSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StageSetting::clicked(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
