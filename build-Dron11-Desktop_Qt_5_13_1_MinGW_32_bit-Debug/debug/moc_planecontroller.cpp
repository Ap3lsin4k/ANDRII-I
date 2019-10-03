/****************************************************************************
** Meta object code from reading C++ file 'planecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DroneQML/planecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaneController_t {
    QByteArrayData data[17];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaneController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaneController_t qt_meta_stringdata_PlaneController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlaneController"
QT_MOC_LITERAL(1, 16, 15), // "positionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "arrived"
QT_MOC_LITERAL(4, 41, 8), // "departed"
QT_MOC_LITERAL(5, 50, 9), // "toChanged"
QT_MOC_LITERAL(6, 60, 11), // "fromChanged"
QT_MOC_LITERAL(7, 72, 7), // "setFrom"
QT_MOC_LITERAL(8, 80, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(9, 95, 3), // "frm"
QT_MOC_LITERAL(10, 99, 5), // "setTo"
QT_MOC_LITERAL(11, 105, 2), // "to"
QT_MOC_LITERAL(12, 108, 11), // "setPosition"
QT_MOC_LITERAL(13, 120, 1), // "c"
QT_MOC_LITERAL(14, 122, 8), // "position"
QT_MOC_LITERAL(15, 131, 11), // "startFlight"
QT_MOC_LITERAL(16, 143, 8) // "isFlying"

    },
    "PlaneController\0positionChanged\0\0"
    "arrived\0departed\0toChanged\0fromChanged\0"
    "setFrom\0QGeoCoordinate\0frm\0setTo\0to\0"
    "setPosition\0c\0position\0startFlight\0"
    "isFlying"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaneController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    1,   86,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,
      15,    0,   90,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   13,
    0x80000000 | 8,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,

       0        // eod
};

void PlaneController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaneController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->arrived(); break;
        case 2: _t->departed(); break;
        case 3: _t->toChanged(); break;
        case 4: _t->fromChanged(); break;
        case 5: _t->setFrom((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 6: _t->setTo((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 7: { QGeoCoordinate _r = _t->to();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setPosition((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 9: { QGeoCoordinate _r = _t->position();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->startFlight(); break;
        case 11: { bool _r = _t->isFlying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::arrived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::departed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::toChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaneController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaneController::fromChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaneController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PlaneController.data,
    qt_meta_data_PlaneController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaneController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaneController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaneController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PlaneController::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlaneController::arrived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlaneController::departed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlaneController::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlaneController::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
