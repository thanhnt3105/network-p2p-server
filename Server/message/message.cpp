#include "message.h"

Message::Message(QObject *parent)
    : QObject{parent}
{

}


Message::Message(QString input, QObject *parent) : QObject{parent}{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(input.toUtf8());
    this->messageBody = jsonDoc.object();
}

void Message::addCommandCode(Command* commandCode) {
    if (messageBody.contains("command_code")) {
        messageBody.remove("command_code");
    }
    messageBody.insert("command_code", commandCode->getCommandString());
}

void Message::addInfo(QJsonObject objInfo) {
    // check if the key exists and remove before modify
    if (messageBody.contains("info")) {
        messageBody.remove("info");
    }
    messageBody.insert("info", objInfo);
}

QString Message::toString() {
    QString jsonString = QJsonDocument(this->messageBody).toJson(QJsonDocument::Compact);
    return jsonString;
}

void Message::setBody(QString input) {
    QJsonDocument jsonDoc = QJsonDocument::fromJson(input.toUtf8());
    this->messageBody = jsonDoc.object();
}

