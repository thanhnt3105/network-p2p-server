#include "loginservermessage.h"

void LoginServerMessage::setUsername(const QString &newUsername)
{
    username = newUsername;
}

void LoginServerMessage::setId(quint64 newId)
{
    id = newId;
}

LoginServerMessage::LoginServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}

LoginServerMessage::LoginServerMessage(quint64 id, QString username, QString errorMsg, QObject *parent)
    : ServerMessage(errorMsg, parent)
{
    this->username = username;
    this->id = id;
    this->addCommandCode(this->command->toCommand("LOGIN"));
    this->responseBody->createLoginBody(id, username);
    this->finalizeMessageObject();
}

quint64 LoginServerMessage::getId() {
    return this->id;
}

QString LoginServerMessage::getUsername() {
    return this->username;
}

QString LoginServerMessage::getPassword() {
    return this->password;
}
