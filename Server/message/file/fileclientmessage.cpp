#include "fileclientmessage.h"

FileClientMessage::FileClientMessage(QObject *parent)
    : ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("GETALLFILES"));
    this->requestBody->createSearchAllFilesBody();
    this->finalizeMessageObject();
}

FileClientMessage::FileClientMessage(QString fileName, QObject *parent):ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("SEARCHFILE"));
    this->requestBody->createSearchFileBody(fileName);
    this->finalizeMessageObject();
}

FileClientMessage::FileClientMessage(QString fileName, QString filePath, quint64 userId, QObject *parent):ClientMessage{parent}
{
    this->addCommandCode(command->toCommand("UPLOADFILE"));
    this->requestBody->createUploadFileBody(userId,fileName,filePath);
    this->finalizeMessageObject();
}


