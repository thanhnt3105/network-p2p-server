/****************************************************************************
** Meta object code from reading C++ file 'loginclientmessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/message/auth/loginclientmessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginclientmessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoginClientMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoginClientMessageENDCLASS = QtMocHelpers::stringData(
    "LoginClientMessage",
    "setUsername",
    "",
    "username",
    "setPassword",
    "password",
    "getUsername",
    "getPassword"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoginClientMessageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoginClientMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoginClientMessageENDCLASS_t qt_meta_stringdata_CLASSLoginClientMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "LoginClientMessage"
        QT_MOC_LITERAL(19, 11),  // "setUsername"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 8),  // "username"
        QT_MOC_LITERAL(41, 11),  // "setPassword"
        QT_MOC_LITERAL(53, 8),  // "password"
        QT_MOC_LITERAL(62, 11),  // "getUsername"
        QT_MOC_LITERAL(74, 11)   // "getPassword"
    },
    "LoginClientMessage",
    "setUsername",
    "",
    "username",
    "setPassword",
    "password",
    "getUsername",
    "getPassword"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoginClientMessageENDCLASS[] = {

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
       4,    1,   41,    2, 0x0a,    3 /* Public */,
       6,    0,   44,    2, 0x0a,    5 /* Public */,
       7,    0,   45,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoginClientMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<ClientMessage::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoginClientMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoginClientMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoginClientMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoginClientMessage, std::true_type>,
        // method 'setUsername'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUsername'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getPassword'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void LoginClientMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginClientMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setUsername((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: { QString _r = _t->getUsername();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getPassword();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *LoginClientMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginClientMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoginClientMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ClientMessage::qt_metacast(_clname);
}

int LoginClientMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ClientMessage::qt_metacall(_c, _id, _a);
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
