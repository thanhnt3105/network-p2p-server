#include "responsebody.h"

ResponseBody::ResponseBody(QObject *parent)
    : QObject{parent}
{

}

QJsonObject ResponseBody::getResponseBody() {
    return this->responseBody;
}

void ResponseBody::setResponseBody(QJsonObject responseBody) {
    this->responseBody = responseBody;
}

void ResponseBody::createLoginBody(quint64 id, QString username) {
    this->responseBody = QJsonObject();

    this->responseBody.insert("id", QString::number(id));
    this->responseBody.insert("username", username);
}

void ResponseBody::createLogoutBody(quint64 id, QString username) {
    this->responseBody = QJsonObject();

    this->responseBody.insert("id", QString::number(id));
    this->responseBody.insert("username", username);
}

void ResponseBody::createRegisterBody(QString username, QString password)
{
    this->responseBody = QJsonObject();

    this->responseBody.insert("username", username);
    this->responseBody.insert("password",password);

}

void ResponseBody::createSearchFileBody(QList<File*> fileList)
{
    this->responseBody = QJsonObject();

    QJsonArray fileArray;
    for (File* file : fileList) {
        QJsonObject fileObject;
        fileObject["id"] = static_cast<qint64>(file->getId());
        fileObject["file_name"] = file->getFileName();
        fileObject["file_path"] = file->getFilePath();
        fileObject["user_id"] = static_cast<qint64>(file->getUser()->getId());
        fileObject["username"] = file->getUser()->getUsername();
        fileObject["host"] = file->getHost();
        fileObject["post"] = file->getPort();

        fileArray.append(fileObject);
    }
     this->responseBody.insert("files", fileArray);
}

void ResponseBody::createGetAllFilesBody()
{
     this->responseBody = QJsonObject();
}

void ResponseBody::createUploadFileBody(QString fileName, QString filePath, quint64 userId)
{
    this->responseBody = QJsonObject();
    this->responseBody.insert("fileName",fileName);
    this->responseBody.insert("filePath",filePath);
    this->responseBody.insert("userId",static_cast<qint64>(userId));

}

void ResponseBody::createGetFileByUserId(QList<File*> fileList)
{
    this->responseBody = QJsonObject();

    QJsonArray fileArray;
    for (File* file : fileList) {
        QJsonObject fileObject;
        fileObject["id"] = static_cast<qint64>(file->getId());
        fileObject["file_name"] = file->getFileName();
        fileObject["file_path"] = file->getFilePath();
        fileArray.append(fileObject);
    }
    this->responseBody.insert("files", fileArray);
}
