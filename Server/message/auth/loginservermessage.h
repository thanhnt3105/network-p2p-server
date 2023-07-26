#ifndef LOGINSERVERMESSAGE_H
#define LOGINSERVERMESSAGE_H

#include <QObject>
#include <message/servermessage.h>

class LoginServerMessage : public ServerMessage
{
    Q_OBJECT
private:
    quint64 id;
    QString username;
    QString password;
public:
    explicit LoginServerMessage(QObject *parent = nullptr);
    explicit LoginServerMessage(quint64 id, QString username, QString errorMsg, QObject *parent = nullptr);

    void setId(quint64 newId);

public slots:
    quint64 getId();
    QString getUsername();
    QString getPassword();
    void setUsername(const QString &newUsername);

signals:

};

#endif // LOGINSERVERMESSAGE_H
