#include "loginclientmessage.h"

LoginClientMessage::LoginClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

LoginClientMessage::LoginClientMessage(QString input, QObject *parent) : ClientMessage(input, parent) {
    this->username = this->requestBody->getRequestBody().value("username").toString();
    this->password = this->requestBody->getRequestBody().value("password").toString();
}

LoginClientMessage::LoginClientMessage(QString username, QString password, QObject *parent) : ClientMessage(parent) {
    this->username = username;
    this->password = password;

    this->addCommandCode(command->toCommand("LOGIN"));
    this->requestBody->createLoginBody(username, password);

    this->finalizeMessageObject();
}


void LoginClientMessage::setUsername(QString username) {
    this->username = username;
}

void LoginClientMessage::setPassword(QString password) {
    this->password = password;
}

QString LoginClientMessage::getPassword() {
    return this->password;
}

QString LoginClientMessage::getUsername() {
    return this->username;
}

