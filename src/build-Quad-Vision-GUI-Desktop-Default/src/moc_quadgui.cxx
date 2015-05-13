/****************************************************************************
** Meta object code from reading C++ file 'quadgui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Quad-Vision-GUI/src/quadgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quadgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_quadGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x05,
      31,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   47,    8,    8, 0x0a,
      76,    8,    8,    8, 0x0a,
      88,    8,    8,    8, 0x08,
     115,    8,    8,    8, 0x08,
     139,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_quadGUI[] = {
    "quadGUI\0\0row\0colorChanged(int)\0"
    "stopCamThread()\0pm\0onCamImageReady(QPixmap*)\0"
    "onTimeout()\0on_takeoffButton_clicked()\0"
    "on_landButton_clicked()\0"
    "on_togglecameraButton_clicked()\0"
};

void quadGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        quadGUI *_t = static_cast<quadGUI *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stopCamThread(); break;
        case 2: _t->onCamImageReady((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 3: _t->onTimeout(); break;
        case 4: _t->on_takeoffButton_clicked(); break;
        case 5: _t->on_landButton_clicked(); break;
        case 6: _t->on_togglecameraButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData quadGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject quadGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_quadGUI,
      qt_meta_data_quadGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &quadGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *quadGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *quadGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_quadGUI))
        return static_cast<void*>(const_cast< quadGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int quadGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void quadGUI::colorChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void quadGUI::stopCamThread()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
