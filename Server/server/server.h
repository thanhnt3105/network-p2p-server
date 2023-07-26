#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <QVector>

#include <server/requestprocessing.h>
#include <query/userquery.h>
#include <message/auth/loginservermessage.h>
#include <server/servercreatemessage.h>
#include <server/connectioninfor.h>

class Server : public QObject
{
    Q_OBJECT

private:
    QTcpServer *server;
    QHash<QTcpSocket*, ServerCreateMessage*> serverCreateMessageManager;
public:
    explicit Server(QObject *parent = nullptr);

public slots:
    void start();
    void onNewConnection();
    void onReadyRead();
    void onDisconnected();

signals:

};

#endif // SERVER_H
