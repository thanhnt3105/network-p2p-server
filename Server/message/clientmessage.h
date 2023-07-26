#ifndef CLIENTMESSAGE_H
#define CLIENTMESSAGE_H

#include <QObject>
#include <element/requestbody.h>
#include <message/message.h>

class ClientMessage : public Message
{
    Q_OBJECT

protected:
    RequestBody* requestBody;

public:
    explicit ClientMessage(QObject *parent = nullptr);
    explicit ClientMessage(QString input, QObject* parent = nullptr);
public slots:
    void finalizeMessageObject();

signals:

};

#endif // CLIENTMESSAGE_H
