/****************************************************************************
** Meta object code from reading C++ file 'cameraworker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Quad-Vision-GUI/src/cameraworker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameraworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CameraWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,
      44,   38,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   65,   13,   13, 0x0a,
     100,   13,   13,   13, 0x0a,
     112,   13,   13,   13, 0x0a,
     122,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CameraWorker[] = {
    "CameraWorker\0\0pm\0imageReady(QPixmap*)\0"
    "b,g,r\0markBGR(int,int,int)\0dx,dy\0"
    "onRightMouseDragged(int,int)\0onTimeout()\0"
    "onEntry()\0onStop()\0"
};

void CameraWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CameraWorker *_t = static_cast<CameraWorker *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 1: _t->markBGR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onRightMouseDragged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onTimeout(); break;
        case 4: _t->onEntry(); break;
        case 5: _t->onStop(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CameraWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CameraWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CameraWorker,
      qt_meta_data_CameraWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CameraWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CameraWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CameraWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CameraWorker))
        return static_cast<void*>(const_cast< CameraWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int CameraWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CameraWorker::imageReady(QPixmap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraWorker::markBGR(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
