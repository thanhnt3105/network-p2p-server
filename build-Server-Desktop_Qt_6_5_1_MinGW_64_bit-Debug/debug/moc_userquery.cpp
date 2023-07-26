/****************************************************************************
** Meta object code from reading C++ file 'userquery.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/query/userquery.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userquery.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUserQueryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserQueryENDCLASS = QtMocHelpers::stringData(
    "UserQuery",
    "findUser",
    "User*",
    "",
    "name",
    "saveUser",
    "pass",
    "getUserbyId",
    "id",
    "searchUserByUsernameAndPass",
    "username",
    "password",
    "getAllUsernames"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserQueryENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[6];
    char stringdata3[1];
    char stringdata4[5];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[12];
    char stringdata8[3];
    char stringdata9[28];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserQueryENDCLASS_t qt_meta_stringdata_CLASSUserQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "UserQuery"
        QT_MOC_LITERAL(10, 8),  // "findUser"
        QT_MOC_LITERAL(19, 5),  // "User*"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 4),  // "name"
        QT_MOC_LITERAL(31, 8),  // "saveUser"
        QT_MOC_LITERAL(40, 4),  // "pass"
        QT_MOC_LITERAL(45, 11),  // "getUserbyId"
        QT_MOC_LITERAL(57, 2),  // "id"
        QT_MOC_LITERAL(60, 27),  // "searchUserByUsernameAndPass"
        QT_MOC_LITERAL(88, 8),  // "username"
        QT_MOC_LITERAL(97, 8),  // "password"
        QT_MOC_LITERAL(106, 15)   // "getAllUsernames"
    },
    "UserQuery",
    "findUser",
    "User*",
    "",
    "name",
    "saveUser",
    "pass",
    "getUserbyId",
    "id",
    "searchUserByUsernameAndPass",
    "username",
    "password",
    "getAllUsernames"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserQueryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    3, 0x0a,    1 /* Public */,
       5,    2,   47,    3, 0x0a,    3 /* Public */,
       7,    1,   52,    3, 0x0a,    6 /* Public */,
       9,    2,   55,    3, 0x0a,    8 /* Public */,
      12,    0,   60,    3, 0x0a,   11 /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    6,
    0x80000000 | 2, QMetaType::ULongLong,    8,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::QStringList,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserQuery, std::true_type>,
        // method 'findUser'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'saveUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getUserbyId'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'searchUserByUsernameAndPass'
        QtPrivate::TypeAndForceComplete<User *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getAllUsernames'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>
    >,
    nullptr
} };

void UserQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { User* _r = _t->findUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->saveUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: { User* _r = _t->getUserbyId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 3: { User* _r = _t->searchUserByUsernameAndPass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<QString> _r = _t->getAllUsernames();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *UserQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UserQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
