#include "userquery.h"
#include <QtSql/QSqlQuery>

UserQuery::UserQuery(QObject *parent)
    : QObject{parent}
{

}

User* UserQuery::findUser(QString username)
{
    QSqlQuery query;
    User* user = new User();
    QString sqlQuery = "Select * from user where username = :username";
    query.prepare(sqlQuery);
    query.bindValue(":username", username);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        user->setId(id);
        user->setUsername(username);
    }
    return user;
}

void UserQuery::saveUser(QString name, QString pass)
{
    QSqlQuery query;
    QString sqlQuery = "INSERT INTO user (username, password) VALUES (:username, :password)";
    query.prepare(sqlQuery);
    query.bindValue(":username", name);
    query.bindValue(":password", pass);
    if(!query.exec()) {
        qDebug() << "can not query";
    }
}

User* UserQuery::getUserbyId(quint64 id)
{
    QSqlQuery query;
    User* user = new User();
    QString sqlQuery = "Select * from user where id = :id LIMIT 1";
    query.prepare(sqlQuery);
    query.bindValue(":id", id);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        user->setId(id);
        user->setUsername(username);
    }
    return user;
}

User *UserQuery::searchUserByUsernameAndPass(QString username, QString password)
{
    QSqlQuery query;
    User* user = new User();
    QString sqlQuery = "Select * from user where username = :username AND password = :password";
    query.prepare(sqlQuery);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        quint64 id = query.value(0).toInt();
        QString username = query.value(1).toString();
        if(!username.isEmpty()){
            user->setId(id);
            user->setUsername(username);
        }
    }
    return user;
}

QList<QString> UserQuery::getAllUsernames()
{
    QList<QString> listUsername;
    QSqlQuery query;
    query.prepare("Select username from user");
    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }
    while (query.next()) {
        QString username = query.value(0).toString();
        listUsername.append(username);
    }
    return listUsername;
}
