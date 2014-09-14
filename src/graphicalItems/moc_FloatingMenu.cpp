/****************************************************************************
** Meta object code from reading C++ file 'FloatingMenu.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FloatingMenu.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloatingMenu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FloatingMenu_t {
    QByteArrayData data[8];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatingMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatingMenu_t qt_meta_stringdata_FloatingMenu = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 15),
QT_MOC_LITERAL(4, 50, 14),
QT_MOC_LITERAL(5, 65, 6),
QT_MOC_LITERAL(6, 72, 14),
QT_MOC_LITERAL(7, 87, 7)
    },
    "FloatingMenu\0onTargetNodeChanged\0\0"
    "onLayoutChanged\0locateOnTarget\0target\0"
    "GraphicalNode*\0hLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatingMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,
       7, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void FloatingMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FloatingMenu *_t = static_cast<FloatingMenu *>(_o);
        switch (_id) {
        case 0: _t->onTargetNodeChanged(); break;
        case 1: _t->onLayoutChanged(); break;
        case 2: _t->locateOnTarget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FloatingMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FloatingMenu::onTargetNodeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FloatingMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FloatingMenu::onLayoutChanged)) {
                *result = 1;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GraphicalNode* >(); break;
        }
    }

}

const QMetaObject FloatingMenu::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_FloatingMenu.data,
      qt_meta_data_FloatingMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *FloatingMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatingMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FloatingMenu.stringdata))
        return static_cast<void*>(const_cast< FloatingMenu*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int FloatingMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GraphicalNode**>(_v) = target(); break;
        case 1: *reinterpret_cast< bool*>(_v) = hLayout(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTarget(*reinterpret_cast< GraphicalNode**>(_v)); break;
        case 1: setHLayout(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FloatingMenu::onTargetNodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FloatingMenu::onLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
