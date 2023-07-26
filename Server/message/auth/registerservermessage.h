#ifndef REGISTERSERVERMESSAGE_H
#define REGISTERSERVERMESSAGE_H

#include <QObject>
#include <message/servermessage.h>

class RegisterServerMessage : public ServerMessage
{
    Q_OBJECT
private:
    quint64 id;
    QString username;
    QString password;
public:
    explicit RegisterServerMessage(QObject *parent = nullptr);
    explicit RegisterServerMessage(quint64 id, QString username, QString errorMsg, QObject *parent = nullptr);

    void setId(quint64 newId);
signals:

};

#endif // REGISTERSERVERMESSAGE_H
