#ifndef LOGINCLIENTMESSAGE_H
#define LOGINCLIENTMESSAGE_H

#include <QObject>
#include <message/clientmessage.h>
#include <QJsonDocument>

class LoginClientMessage : public ClientMessage
{
    Q_OBJECT

private:
    QString username;
    QString password;

public:
    explicit LoginClientMessage(QObject *parent = nullptr);
    explicit LoginClientMessage(QString input, QObject *parent = nullptr);
    explicit LoginClientMessage(QString username, QString password, QObject *parent = nullptr);


public slots:
    void setUsername(QString username);
    void setPassword(QString password);
    QString getUsername();
    QString getPassword();
signals:

};

#endif // LOGINCLIENTMESSAGE_H
