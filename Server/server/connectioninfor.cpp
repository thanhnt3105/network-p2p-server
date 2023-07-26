#include "connectioninfor.h"

int ConnectionInfor::getUserId() const
{
    return userId;
}

void ConnectionInfor::setUserId(int newUserId)
{
    userId = newUserId;
}

QString ConnectionInfor::getHost() const
{
    return host;
}

void ConnectionInfor::setHost(const QString &newHost)
{
    host = newHost;
}

int ConnectionInfor::getPort() const
{
    return port;
}

void ConnectionInfor::setPort(int newPort)
{
    port = newPort;
}

ConnectionInfor::ConnectionInfor(QObject *parent)
    : QObject{parent}
{

}

ConnectionInfor::ConnectionInfor(int userId, QString host, int port, QObject *parent): QObject{parent}
{
    this->userId=userId;
    this->host = host;
    this->port = port;
}
