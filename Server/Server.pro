QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controller/filecontroller.cpp \
    controller/logincontroller.cpp \
    controller/registercontroller.cpp \
    database/connection.cpp \
    element/command.cpp \
    element/requestbody.cpp \
    element/responsebody.cpp \
    entity/file.cpp \
    entity/user.cpp \
    main.cpp \
    mainwindow.cpp \
    message/auth/loginclientmessage.cpp \
    message/auth/loginservermessage.cpp \
    message/auth/registerclientmessage.cpp \
    message/auth/registerservermessage.cpp \
    message/clientmessage.cpp \
    message/file/fileclientmessage.cpp \
    message/file/fileservermessage.cpp \
    message/message.cpp \
    message/servermessage.cpp \
    query/api.cpp \
    query/filequery.cpp \
    query/userquery.cpp \
    server/connectioninfor.cpp \
    server/requestprocessing.cpp \
    server/server.cpp \
    server/servercreatemessage.cpp \
    session/session.cpp

HEADERS += \
    controller/filecontroller.h \
    controller/logincontroller.h \
    controller/registercontroller.h \
    database/connection.h \
    element/command.h \
    element/requestbody.h \
    element/responsebody.h \
    entity/file.h \
    entity/user.h \
    mainwindow.h \
    message/auth/loginclientmessage.h \
    message/auth/loginservermessage.h \
    message/auth/registerclientmessage.h \
    message/auth/registerservermessage.h \
    message/clientmessage.h \
    message/file/fileclientmessage.h \
    message/file/fileservermessage.h \
    message/message.h \
    message/servermessage.h \
    query/api.h \
    query/filequery.h \
    query/userquery.h \
    server/connectioninfor.h \
    server/requestprocessing.h \
    server/server.h \
    server/servercreatemessage.h \
    session/session.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    database/db.db \
    database/db.db-journal
