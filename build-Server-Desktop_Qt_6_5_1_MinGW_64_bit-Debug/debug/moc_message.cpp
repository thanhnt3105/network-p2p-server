/****************************************************************************
** Meta object code from reading C++ file 'message.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/message/message.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMessageENDCLASS = QtMocHelpers::stringData(
    "Message",
    "addCommandCode",
    "",
    "Command*",
    "command_code",
    "addInfo",
    "objInfo",
    "setBody",
    "input",
    "toString"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMessageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[13];
    char stringdata5[8];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[6];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMessageENDCLASS_t qt_meta_stringdata_CLASSMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Message"
        QT_MOC_LITERAL(8, 14),  // "addCommandCode"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 8),  // "Command*"
        QT_MOC_LITERAL(33, 12),  // "command_code"
        QT_MOC_LITERAL(46, 7),  // "addInfo"
        QT_MOC_LITERAL(54, 7),  // "objInfo"
        QT_MOC_LITERAL(62, 7),  // "setBody"
        QT_MOC_LITERAL(70, 5),  // "input"
        QT_MOC_LITERAL(76, 8)   // "toString"
    },
    "Message",
    "addCommandCode",
    "",
    "Command*",
    "command_code",
    "addInfo",
    "objInfo",
    "setBody",
    "input",
    "toString"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    1,   41,    2, 0x0a,    3 /* Public */,
       7,    1,   44,    2, 0x0a,    5 /* Public */,
       9,    0,   47,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QJsonObject,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject Message::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Message, std::true_type>,
        // method 'addCommandCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Command *, std::false_type>,
        // method 'addInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'setBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'toString'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Message *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addCommandCode((*reinterpret_cast< std::add_pointer_t<Command*>>(_a[1]))); break;
        case 1: _t->addInfo((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->setBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Command* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Message::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Message::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Message::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
