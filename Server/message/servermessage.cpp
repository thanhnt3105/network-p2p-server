#include "servermessage.h"

ServerMessage::ServerMessage(QObject *parent)
    : Message{parent}
{

}


ServerMessage::ServerMessage( QString errorMsg, QObject *parent)
    : Message{parent}
{
    this->responseBody = new ResponseBody();
    this->errorMsg = errorMsg;
}

void ServerMessage::finalizeMessageObject() {
    QJsonDocument jsonDocument(this->responseBody->getResponseBody());
    QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
    this->messageBody.insert("info", jsonString);
    this->messageBody.insert("error", this->errorMsg);
}

QString ServerMessage::getErrorMsg() {
    return this->errorMsg;
}

void ServerMessage::setErrorMsg(QString errorMsg) {
    this->errorMsg = errorMsg;
}
