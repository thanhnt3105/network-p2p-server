/****************************************************************************
** Meta object code from reading C++ file 'servermessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/message/servermessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'servermessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSServerMessageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSServerMessageENDCLASS = QtMocHelpers::stringData(
    "ServerMessage",
    "setErrorMsg",
    "",
    "errorMsg",
    "getErrorMsg",
    "finalizeMessageObject"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSServerMessageENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSServerMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSServerMessageENDCLASS_t qt_meta_stringdata_CLASSServerMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ServerMessage"
        QT_MOC_LITERAL(14, 11),  // "setErrorMsg"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "errorMsg"
        QT_MOC_LITERAL(36, 11),  // "getErrorMsg"
        QT_MOC_LITERAL(48, 21)   // "finalizeMessageObject"
    },
    "ServerMessage",
    "setErrorMsg",
    "",
    "errorMsg",
    "getErrorMsg",
    "finalizeMessageObject"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSServerMessageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    0,   35,    2, 0x0a,    3 /* Public */,
       5,    0,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ServerMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<Message::staticMetaObject>(),
    qt_meta_stringdata_CLASSServerMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSServerMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSServerMessageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ServerMessage, std::true_type>,
        // method 'setErrorMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getErrorMsg'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finalizeMessageObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ServerMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setErrorMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: { QString _r = _t->getErrorMsg();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->finalizeMessageObject(); break;
        default: ;
        }
    }
}

const QMetaObject *ServerMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSServerMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Message::qt_metacast(_clname);
}

int ServerMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Message::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
