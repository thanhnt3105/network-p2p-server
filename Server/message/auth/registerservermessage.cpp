#include "registerservermessage.h"

void RegisterServerMessage::setId(quint64 newId)
{
    id = newId;
}

RegisterServerMessage::RegisterServerMessage(QObject *parent)
    : ServerMessage{parent}
{

}


RegisterServerMessage::RegisterServerMessage(quint64 id, QString username, QString errorMsg, QObject *parent)
    : ServerMessage(errorMsg, parent)
{
    this->username = username;
    this->id = id;
    this->addCommandCode(this->command->toCommand("REGISTER"));
    this->responseBody->createLoginBody(id, username);
    this->finalizeMessageObject();
}

