#include "fileservermessage.h"

FileServerMessage::FileServerMessage(QObject *parent)
    : ServerMessage{parent}
{
    this->addCommandCode(this->command->toCommand("GETALLFILES"));
    this->responseBody->createGetAllFilesBody();
    this->finalizeMessageObject();
}

FileServerMessage::FileServerMessage(QList<File *> fileList, QString errorMsg, QObject *parent): ServerMessage(errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("SEARCHFILE"));
    this->responseBody->createSearchFileBody(fileList);
    this->finalizeMessageObject();

}

FileServerMessage::FileServerMessage(QString errorMsg, QObject *parent): ServerMessage(errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("SEARCHFILE"));
    this->finalizeMessageObject();
}

FileServerMessage::FileServerMessage(QString fileName, QString filePath, quint64 userId,QString errorMsg, QObject *parent): ServerMessage(errorMsg, parent)
{
    this->addCommandCode(this->command->toCommand("UPLOADFILE"));
    this->responseBody->createUploadFileBody(fileName,filePath,userId);
    this->finalizeMessageObject();
}

