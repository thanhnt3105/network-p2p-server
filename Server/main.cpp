#include <QApplication>
#include <database/connection.h>
#include <server/server.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection* connection = new Connection();
    if (!connection->isConnected()) {
        qDebug() << "Can not connect";
    }
    else {
        qDebug() << "Connect successfully";
    }

    Server*server = new Server();
    server->start();
    return a.exec();
}
