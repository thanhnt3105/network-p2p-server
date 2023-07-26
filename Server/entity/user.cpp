#include "user.h"

quint64 User::getId() const
{
    return id;
}

void User::setId(quint64 newId)
{
    id = newId;
}

QString User::getUsername() const
{
    return username;
}

void User::setUsername(const QString &newUsername)
{
    username = newUsername;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &newPassword)
{
    password = newPassword;
}

User::User(QObject *parent)
    : QObject{parent}
{

}
