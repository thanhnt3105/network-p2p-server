#ifndef REQUESTBODY_H
#define REQUESTBODY_H

#include <QObject>
#include <QJsonObject>

class RequestBody : public QObject
{
    Q_OBJECT
private:
    QJsonObject requestBody;
public:
    explicit RequestBody(QObject *parent = nullptr);


public slots:
    QJsonObject getRequestBody();
    void setRequestBody(QJsonObject body);

    void createLoginBody(QString username, QString password);
    void createLogoutBody(quint64 id, QString username);
    void createRegisterBody(QString username, QString password);
    void createSearchFileBody(QString fileName);
    void createSearchAllFilesBody();
    void createUploadFileBody(quint64 userId, QString fileName, QString filePath);

signals:

};

#endif // REQUESTBODY_H
