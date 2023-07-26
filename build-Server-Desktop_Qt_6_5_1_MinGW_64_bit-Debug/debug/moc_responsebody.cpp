/****************************************************************************
** Meta object code from reading C++ file 'responsebody.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/element/responsebody.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'responsebody.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResponseBodyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResponseBodyENDCLASS = QtMocHelpers::stringData(
    "ResponseBody",
    "setResponseBody",
    "",
    "responseBody",
    "getResponseBody",
    "createLoginBody",
    "id",
    "username",
    "createLogoutBody",
    "createRegisterBody",
    "password",
    "createSearchFileBody",
    "QList<File*>",
    "fileList",
    "createGetAllFilesBody",
    "createUploadFileBody",
    "fileName",
    "filePath",
    "userId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResponseBodyENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[3];
    char stringdata7[9];
    char stringdata8[17];
    char stringdata9[19];
    char stringdata10[9];
    char stringdata11[21];
    char stringdata12[13];
    char stringdata13[9];
    char stringdata14[22];
    char stringdata15[21];
    char stringdata16[9];
    char stringdata17[9];
    char stringdata18[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResponseBodyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResponseBodyENDCLASS_t qt_meta_stringdata_CLASSResponseBodyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ResponseBody"
        QT_MOC_LITERAL(13, 15),  // "setResponseBody"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "responseBody"
        QT_MOC_LITERAL(43, 15),  // "getResponseBody"
        QT_MOC_LITERAL(59, 15),  // "createLoginBody"
        QT_MOC_LITERAL(75, 2),  // "id"
        QT_MOC_LITERAL(78, 8),  // "username"
        QT_MOC_LITERAL(87, 16),  // "createLogoutBody"
        QT_MOC_LITERAL(104, 18),  // "createRegisterBody"
        QT_MOC_LITERAL(123, 8),  // "password"
        QT_MOC_LITERAL(132, 20),  // "createSearchFileBody"
        QT_MOC_LITERAL(153, 12),  // "QList<File*>"
        QT_MOC_LITERAL(166, 8),  // "fileList"
        QT_MOC_LITERAL(175, 21),  // "createGetAllFilesBody"
        QT_MOC_LITERAL(197, 20),  // "createUploadFileBody"
        QT_MOC_LITERAL(218, 8),  // "fileName"
        QT_MOC_LITERAL(227, 8),  // "filePath"
        QT_MOC_LITERAL(236, 6)   // "userId"
    },
    "ResponseBody",
    "setResponseBody",
    "",
    "responseBody",
    "getResponseBody",
    "createLoginBody",
    "id",
    "username",
    "createLogoutBody",
    "createRegisterBody",
    "password",
    "createSearchFileBody",
    "QList<File*>",
    "fileList",
    "createGetAllFilesBody",
    "createUploadFileBody",
    "fileName",
    "filePath",
    "userId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResponseBodyENDCLASS[] = {

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
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    0,   65,    2, 0x0a,    3 /* Public */,
       5,    2,   66,    2, 0x0a,    4 /* Public */,
       8,    2,   71,    2, 0x0a,    7 /* Public */,
       9,    2,   76,    2, 0x0a,   10 /* Public */,
      11,    1,   81,    2, 0x0a,   13 /* Public */,
      14,    0,   84,    2, 0x0a,   15 /* Public */,
      15,    3,   85,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::QJsonObject,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,   16,   17,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResponseBody::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSResponseBodyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResponseBodyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResponseBodyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResponseBody, std::true_type>,
        // method 'setResponseBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'getResponseBody'
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'createLoginBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<QList<File*>, std::false_type>,
        // method 'createGetAllFilesBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createUploadFileBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>
    >,
    nullptr
} };

void ResponseBody::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResponseBody *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setResponseBody((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: { QJsonObject _r = _t->getResponseBody();
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->createLoginBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->createLogoutBody((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->createRegisterBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->createSearchFileBody((*reinterpret_cast< std::add_pointer_t<QList<File*>>>(_a[1]))); break;
        case 6: _t->createGetAllFilesBody(); break;
        case 7: _t->createUploadFileBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<File*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ResponseBody::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResponseBody::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResponseBodyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ResponseBody::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
