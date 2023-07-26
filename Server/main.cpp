#include <QApplication>
#include <database/connection.h>
#include <server/server.h>
#include <QApplication>
#include <mainwindow.h>
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
    MainWindow w =MainWindow();


    Server*server = new Server();
    server->start();
    w.show();
    return a.exec();
}
