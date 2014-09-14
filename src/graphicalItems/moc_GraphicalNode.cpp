/****************************************************************************
** Meta object code from reading C++ file 'GraphicalNode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GraphicalNode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicalNode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphicalNode_t {
    QByteArrayData data[17];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicalNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicalNode_t qt_meta_stringdata_GraphicalNode = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 17),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 1),
QT_MOC_LITERAL(4, 35, 1),
QT_MOC_LITERAL(5, 37, 18),
QT_MOC_LITERAL(6, 56, 1),
QT_MOC_LITERAL(7, 58, 14),
QT_MOC_LITERAL(8, 73, 13),
QT_MOC_LITERAL(9, 87, 8),
QT_MOC_LITERAL(10, 96, 11),
QT_MOC_LITERAL(11, 108, 5),
QT_MOC_LITERAL(12, 114, 8),
QT_MOC_LITERAL(13, 123, 1),
QT_MOC_LITERAL(14, 125, 11),
QT_MOC_LITERAL(15, 137, 4),
QT_MOC_LITERAL(16, 142, 7)
    },
    "GraphicalNode\0onPositionChanged\0\0x\0y\0"
    "onSelectionChanged\0s\0onColorChanged\0"
    "onTextChanged\0selected\0setSelected\0"
    "color\0setColor\0d\0setColorGUI\0text\0"
    "setText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicalNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   83,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    0,   87,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,
      15,    0,   92,    2, 0x0a /* Public */,
      16,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::QColor,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::QColor, 0x00495103,
      15, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

void GraphicalNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicalNode *_t = static_cast<GraphicalNode *>(_o);
        switch (_id) {
        case 0: _t->onPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onSelectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->onTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->selected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { QColor _r = _t->color();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 7: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->setColorGUI(); break;
        case 9: { QString _r = _t->text();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicalNode::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicalNode::onPositionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (GraphicalNode::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicalNode::onSelectionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GraphicalNode::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicalNode::onColorChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GraphicalNode::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicalNode::onTextChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject GraphicalNode::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_GraphicalNode.data,
      qt_meta_data_GraphicalNode,  qt_static_metacall, 0, 0}
};


const QMetaObject *GraphicalNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicalNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicalNode.stringdata))
        return static_cast<void*>(const_cast< GraphicalNode*>(this));
    return QQuickPaintedItem::qt_metacast(_clname);
}

int GraphicalNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = selected(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 2: *reinterpret_cast< QString*>(_v) = text(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 1: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GraphicalNode::onPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicalNode::onSelectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicalNode::onColorChanged(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphicalNode::onTextChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ActionIndicator_t {
    QByteArrayData data[4];
    char stringdata[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionIndicator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionIndicator_t qt_meta_stringdata_ActionIndicator = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 14),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 5)
    },
    "ActionIndicator\0onColorChanged\0\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionIndicator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ActionIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionIndicator *_t = static_cast<ActionIndicator *>(_o);
        switch (_id) {
        case 0: _t->onColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionIndicator::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionIndicator::onColorChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ActionIndicator::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_ActionIndicator.data,
      qt_meta_data_ActionIndicator,  qt_static_metacall, 0, 0}
};


const QMetaObject *ActionIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ActionIndicator.stringdata))
        return static_cast<void*>(const_cast< ActionIndicator*>(this));
    return QQuickPaintedItem::qt_metacast(_clname);
}

int ActionIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ActionIndicator::onColorChanged(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
