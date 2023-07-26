/****************************************************************************
** Meta object code from reading C++ file 'filequery.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/query/filequery.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filequery.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFileQueryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFileQueryENDCLASS = QtMocHelpers::stringData(
    "FileQuery",
    "getAllFileByName",
    "QList<File*>",
    "",
    "fileName",
    "getFilesByUserId",
    "userId",
    "saveFileByUserId",
    "filePath",
    "removeFileById",
    "fileId",
    "getAllFiles"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFileQueryENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[13];
    char stringdata3[1];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[7];
    char stringdata7[17];
    char stringdata8[9];
    char stringdata9[15];
    char stringdata10[7];
    char stringdata11[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFileQueryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFileQueryENDCLASS_t qt_meta_stringdata_CLASSFileQueryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "FileQuery"
        QT_MOC_LITERAL(10, 16),  // "getAllFileByName"
        QT_MOC_LITERAL(27, 12),  // "QList<File*>"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 8),  // "fileName"
        QT_MOC_LITERAL(50, 16),  // "getFilesByUserId"
        QT_MOC_LITERAL(67, 6),  // "userId"
        QT_MOC_LITERAL(74, 16),  // "saveFileByUserId"
        QT_MOC_LITERAL(91, 8),  // "filePath"
        QT_MOC_LITERAL(100, 14),  // "removeFileById"
        QT_MOC_LITERAL(115, 6),  // "fileId"
        QT_MOC_LITERAL(122, 11)   // "getAllFiles"
    },
    "FileQuery",
    "getAllFileByName",
    "QList<File*>",
    "",
    "fileName",
    "getFilesByUserId",
    "userId",
    "saveFileByUserId",
    "filePath",
    "removeFileById",
    "fileId",
    "getAllFiles"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFileQueryENDCLASS[] = {

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
       5,    1,   47,    3, 0x0a,    3 /* Public */,
       7,    3,   50,    3, 0x0a,    5 /* Public */,
       9,    1,   57,    3, 0x0a,    9 /* Public */,
      11,    0,   60,    3, 0x0a,   11 /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::ULongLong,    6,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    6,    4,    8,
    QMetaType::Void, QMetaType::ULongLong,   10,
    0x80000000 | 2,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileQuery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFileQueryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFileQueryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFileQueryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileQuery, std::true_type>,
        // method 'getAllFileByName'
        QtPrivate::TypeAndForceComplete<QList<File*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getFilesByUserId'
        QtPrivate::TypeAndForceComplete<QList<File*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'saveFileByUserId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'removeFileById'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getAllFiles'
        QtPrivate::TypeAndForceComplete<QList<File*>, std::false_type>
    >,
    nullptr
} };

void FileQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileQuery *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<File*> _r = _t->getAllFileByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<File*>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<File*> _r = _t->getFilesByUserId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<File*>*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->saveFileByUserId((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->removeFileById((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1]))); break;
        case 4: { QList<File*> _r = _t->getAllFiles();
            if (_a[0]) *reinterpret_cast< QList<File*>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *FileQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFileQueryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
