#include "registerclientmessage.h"

RegisterClientMessage::RegisterClientMessage(QObject *parent)
    : ClientMessage{parent}
{

}

RegisterClientMessage::RegisterClientMessage(QString username, QString password, QObject *parent)
    : ClientMessage(parent)
{
    this->username = username;
    this->password = password;

    this->addCommandCode(command->toCommand("REGISTER"));
    this->requestBody->createRegisterBody(username, password);

    this->finalizeMessageObject();
}
