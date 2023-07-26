#ifndef SERVERMESSAGE_H
#define SERVERMESSAGE_H

#include <QObject>
#include <QJsonDocument>
#include <message/message.h>
#include <element/responsebody.h>


class ServerMessage : public Message
{
    Q_OBJECT
protected:
    ResponseBody* responseBody;
    QString errorMsg;
public:
    explicit ServerMessage(QObject *parent = nullptr);
    explicit ServerMessage(QString errorMsg, QObject *parent = nullptr);
public slots:
    void setErrorMsg(QString errorMsg);
    QString getErrorMsg();
    void finalizeMessageObject();

signals:

};

#endif // SERVERMESSAGE_H
