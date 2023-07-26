/****************************************************************************
** Meta object code from reading C++ file 'loginservermessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/message/auth/loginservermessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginservermessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoginServerMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoginServerMessageENDCLASS = QtMocHelpers::stringData(
    "LoginServerMessage",
    "getId",
    "",
    "getUsername",
    "getPassword",
    "setUsername",
    "newUsername"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoginServerMessageENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoginServerMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoginServerMessageENDCLASS_t qt_meta_stringdata_CLASSLoginServerMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "LoginServerMessage"
        QT_MOC_LITERAL(19, 5),  // "getId"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 11),  // "getUsername"
        QT_MOC_LITERAL(38, 11),  // "getPassword"
        QT_MOC_LITERAL(50, 11),  // "setUsername"
        QT_MOC_LITERAL(62, 11)   // "newUsername"
    },
    "LoginServerMessage",
    "getId",
    "",
    "getUsername",
    "getPassword",
    "setUsername",
    "newUsername"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoginServerMessageENDCLASS[] = {

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
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    1,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::ULongLong,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoginServerMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<ServerMessage::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoginServerMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoginServerMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoginServerMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoginServerMessage, std::true_type>,
        // method 'getId'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getUsername'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getPassword'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void LoginServerMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginServerMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint64 _r = _t->getId();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getUsername();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getPassword();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LoginServerMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginServerMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoginServerMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ServerMessage::qt_metacast(_clname);
}

int LoginServerMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ServerMessage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
