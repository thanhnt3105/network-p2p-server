#include "requestbody.h"

RequestBody::RequestBody(QObject *parent)
    : QObject{parent}
{

}

QJsonObject RequestBody::getRequestBody() {
    return this->requestBody;
}

void RequestBody::setRequestBody(QJsonObject body) {
    this->requestBody = body;
}

void RequestBody::createLoginBody(QString username, QString password) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("username", username);
    this->requestBody.insert("password", password);
}

void RequestBody::createLogoutBody(quint64 id, QString username) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("id", QString::number(id));
    this->requestBody.insert("username", username);
}

void RequestBody::createRegisterBody(QString username, QString password) {
    this->requestBody = QJsonObject();

    this->requestBody.insert("username", username);
    this->requestBody.insert("password", password);
}

void RequestBody::createSearchFileBody(QString fileName)
{
    this->requestBody = QJsonObject();

    this->requestBody.insert("fileName",fileName);
}

void RequestBody::createSearchAllFilesBody()
{
    this->requestBody = QJsonObject();
}

void RequestBody::createUploadFileBody(quint64 userId, QString fileName, QString filePath)
{
    this->requestBody = QJsonObject();
    this->requestBody.insert("fileName",fileName);
    this->requestBody.insert("filePath",filePath);
    this->requestBody.insert("userId",static_cast<qint64>(userId));
}
