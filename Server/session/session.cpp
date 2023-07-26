#include <session/session.h>


Session* Session::instance = nullptr;
Session::Session(){

}

QVector<ConnectionInfor *> Session::getConnectionSet() const
{
    return connectionSet;
}

void Session::setConnectionSet(const QVector<ConnectionInfor *> &newConnectionSet)
{
    connectionSet = newConnectionSet;
}

void Session::addConnection(ConnectionInfor *connectionInfor)
{
    this->connectionSet.push_back(connectionInfor);
}

Session* Session::getInstance(){
    if(instance == nullptr){
        instance = new Session();
    }
    return instance;
}
