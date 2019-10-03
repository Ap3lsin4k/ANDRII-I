/****************************************************************************
** Meta object code from reading C++ file 'wayinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DroneQML/wayinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wayinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WayInfo_t {
    QByteArrayData data[20];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WayInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WayInfo_t qt_meta_stringdata_WayInfo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "WayInfo"
QT_MOC_LITERAL(1, 8, 8), // "offStart"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "offEnd"
QT_MOC_LITERAL(4, 25, 4), // "Base"
QT_MOC_LITERAL(5, 30, 6), // "wayFly"
QT_MOC_LITERAL(6, 37, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(7, 59, 12), // "basePosition"
QT_MOC_LITERAL(8, 72, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(9, 87, 14), // "setCoordinates"
QT_MOC_LITERAL(10, 102, 11), // "coordinates"
QT_MOC_LITERAL(11, 114, 6), // "combin"
QT_MOC_LITERAL(12, 121, 15), // "setAllParametrs"
QT_MOC_LITERAL(13, 137, 5), // "focus"
QT_MOC_LITERAL(14, 143, 6), // "horizA"
QT_MOC_LITERAL(15, 150, 9), // "verticalA"
QT_MOC_LITERAL(16, 160, 9), // "costPhoto"
QT_MOC_LITERAL(17, 170, 7), // "costFly"
QT_MOC_LITERAL(18, 178, 2), // "he"
QT_MOC_LITERAL(19, 181, 10) // "handleDate"

    },
    "WayInfo\0offStart\0\0offEnd\0Base\0wayFly\0"
    "QList<QGeoCoordinate>\0basePosition\0"
    "QGeoCoordinate\0setCoordinates\0coordinates\0"
    "combin\0setAllParametrs\0focus\0horizA\0"
    "verticalA\0costPhoto\0costFly\0he\0"
    "handleDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WayInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       9,    2,   59,    2, 0x0a /* Public */,
      12,    6,   64,    2, 0x0a /* Public */,
      19,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 6,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,   17,   18,
    QMetaType::Void,

       0        // eod
};

void WayInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WayInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->offStart(); break;
        case 1: _t->offEnd(); break;
        case 2: _t->Base(); break;
        case 3: { QList<QGeoCoordinate> _r = _t->wayFly();
            if (_a[0]) *reinterpret_cast< QList<QGeoCoordinate>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QGeoCoordinate _r = _t->basePosition();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setCoordinates((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setAllParametrs((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 7: _t->handleDate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::offStart)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::offEnd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WayInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WayInfo::Base)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WayInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WayInfo.data,
    qt_meta_data_WayInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WayInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WayInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WayInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WayInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WayInfo::offStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WayInfo::offEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WayInfo::Base()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
