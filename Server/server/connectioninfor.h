#ifndef CONNECTIONINFOR_H
#define CONNECTIONINFOR_H

#include <QObject>

class ConnectionInfor : public QObject
{
    Q_OBJECT

private:
    int userId;
    QString host;
    int port;
public:
    explicit ConnectionInfor(QObject *parent = nullptr);
    explicit ConnectionInfor(int userId,QString host, int port,QObject *parent = nullptr);

    int getUserId() const;
    void setUserId(int newUserId);

    QString getHost() const;
    void setHost(const QString &newHost);

    int getPort() const;
    void setPort(int newPort);

signals:

};

#endif // CONNECTIONINFOR_H
