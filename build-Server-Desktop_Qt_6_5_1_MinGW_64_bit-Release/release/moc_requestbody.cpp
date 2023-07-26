/****************************************************************************
** Meta object code from reading C++ file 'requestbody.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/element/requestbody.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requestbody.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRequestBodyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRequestBodyENDCLASS = QtMocHelpers::stringData(
    "RequestBody",
    "getRequestBody",
    "",
    "setRequestBody",
    "body",
    "createLoginBody",
    "username",
    "password",
    "createLogoutBody",
    "id",
    "createRegisterBody",
    "createSearchFileBody",
    "fileName",
    "createSearchAllFilesBody",
    "createUploadFileBody",
    "userId",
    "filePath"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRequestBodyENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[16];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[17];
    char stringdata9[3];
    char stringdata10[19];
    char stringdata11[21];
    char stringdata12[9];
    char stringdata13[25];
    char stringdata14[21];
    char stringdata15[7];
    char stringdata16[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRequestBodyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRequestBodyENDCLASS_t qt_meta_stringdata_CLASSRequestBodyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "RequestBody"
        QT_MOC_LITERAL(12, 14),  // "getRequestBody"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 14),  // "setRequestBody"
        QT_MOC_LITERAL(43, 4),  // "body"
        QT_MOC_LITERAL(48, 15),  // "createLoginBody"
        QT_MOC_LITERAL(64, 8),  // "username"
        QT_MOC_LITERAL(73, 8),  // "password"
        QT_MOC_LITERAL(82, 16),  // "createLogoutBody"
        QT_MOC_LITERAL(99, 2),  // "id"
        QT_MOC_LITERAL(102, 18),  // "createRegisterBody"
        QT_MOC_LITERAL(121, 20),  // "createSearchFileBody"
        QT_MOC_LITERAL(142, 8),  // "fileName"
        QT_MOC_LITERAL(151, 24),  // "createSearchAllFilesBody"
        QT_MOC_LITERAL(176, 20),  // "createUploadFileBody"
        QT_MOC_LITERAL(197, 6),  // "userId"
        QT_MOC_LITERAL(204, 8)   // "filePath"
    },
    "RequestBody",
    "getRequestBody",
    "",
    "setRequestBody",
    "body",
    "createLoginBody",
    "username",
    "password",
    "createLogoutBody",
    "id",
    "createRegisterBody",
    "createSearchFileBody",
    "fileName",
    "createSearchAllFilesBody",
    "createUploadFileBody",
    "userId",
    "filePath"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRequestBodyENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       5,    2,   66,    2, 0x0a,    4 /* Public */,
       8,    2,   71,    2, 0x0a,    7 /* Public */,
      10,    2,   76,    2, 0x0a,   10 /* Public */,
      11,    1,   81,    2, 0x0a,   13 /* Public */,
      13,    0,   84,    2, 0x0a,   15 /* Public */,
      14,    3,   85,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::QJsonObject,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    9,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,   15,   12,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject RequestBody::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRequestBodyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRequestBodyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRequestBodyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RequestBody, std::true_type>,
        // method 'getRequestBody'
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'setRequestBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'createLoginBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createLogoutBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createRegisterBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createSearchFileBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createSearchAllFilesBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createUploadFileBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void RequestBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequestBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QJsonObject _r = _t->getRequestBody();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setRequestBody((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->createLoginBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->createLogoutBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->createRegisterBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->createSearchFileBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->createSearchAllFilesBody(); break;
        case 7: _t->createUploadFileBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *RequestBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRequestBodyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RequestBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
