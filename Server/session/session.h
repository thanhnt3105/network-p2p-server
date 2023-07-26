#ifndef SESSION_H
#define SESSION_H

#include <string>
#include<QVector>

#include <server/connectioninfor.h>

class Session
{
private:
    static Session* instance;
    Session();
    QVector<ConnectionInfor*> connectionSet;

public:
    static Session* getInstance();
    void saveSession(std::string);
    QVector<ConnectionInfor *> getConnectionSet() const;
    void setConnectionSet(const QVector<ConnectionInfor *> &newConnectionSet);

    void addConnection(ConnectionInfor* connectionInfor);
};
#endif // SESSION_H
