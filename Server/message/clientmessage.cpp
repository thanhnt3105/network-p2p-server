#include "clientmessage.h"

ClientMessage::ClientMessage(QObject *parent)
    : Message{parent}
{
    this->requestBody = new RequestBody();
}

ClientMessage::ClientMessage(QString input, QObject *parent) : Message(input, parent) {
    this->requestBody = new RequestBody();
    if (messageBody.contains("info")) {
        QJsonValue infoValue = messageBody.value("info");
        if (infoValue.isObject()) {
            QJsonObject infoObject = infoValue.toObject();
            // Thực hiện các thao tác với infoObject ở đây
            this->requestBody->setRequestBody(infoObject);
        }
    }
}

void ClientMessage::finalizeMessageObject() {
    //    this->messageBody.insert("command_code", this->command->getCommandString());
    QJsonDocument jsonDocument(this->requestBody->getRequestBody());
    QString jsonString = jsonDocument.toJson(QJsonDocument::Compact);
    this->messageBody.insert("info", jsonString);
}
