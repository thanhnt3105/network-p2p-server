#include "server.h"

Server::Server(QObject *parent)
    : QObject{parent}
{
    this->server = new QTcpServer(this);
//    this->serverCreateMessage = new ServerCreateMessage();
    connect(server, &QTcpServer::newConnection, this, &Server::onNewConnection);

}

void Server::start() {
    if(this->server->listen(QHostAddress::Any, 8080))
    {
        connect(this->server, &QTcpServer::newConnection, this, &Server::onNewConnection);
        qDebug() << ("Server is listening...");
    }
    else
    {
        qDebug() << QString("Unable to start the server: %1.").arg(this->server->errorString());
        exit(EXIT_FAILURE);
    }
}

void Server::onNewConnection() {
    QTcpSocket *clientSocket = this->server->nextPendingConnection();

    ServerCreateMessage* serverCreateMessage = new ServerCreateMessage();
    this->serverCreateMessageManager.insert(clientSocket, serverCreateMessage);

    // Handle the new client connection asynchronously
    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::onDisconnected);

    // Add the client socket to a list or data structure for managing multiple clients
    //    this->connectionSet.append(clientSocket);

//    QHostAddress clientAddress = clientSocket->peerAddress();
//    quint16 clientPort = clientSocket->peerPort();

//    qDebug() << "New connection from host:" << clientAddress.toString() << "port:" << clientPort;

    qDebug() << "New client connected!";
}

void Server::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    ServerCreateMessage* serverCreateMessage = this->serverCreateMessageManager.value(clientSocket);
    QString responseString;

    if (clientSocket)
    {
        // Read and process data from the client
        QByteArray requestData = clientSocket->readAll();
        // Process the requestData as needed
        QJsonDocument jsonDoc = QJsonDocument::fromJson(requestData);
        QString msg;


        qDebug() << "server core client: " << clientSocket;
        // Kiểm tra xem dữ liệu có đúng định dạng JSON không
        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            // Chuyển đổi QJsonDocument thành QJsonObject
            QJsonObject jsonObject = jsonDoc.object();
            serverCreateMessage->getRequestProcessing()->setMessage(jsonObject);
            msg = serverCreateMessage->getRequestProcessing()->handle();
            responseString = serverCreateMessage->createMessage(msg);
            qDebug() << "message" << msg;
        }

        qDebug() << "Server receive:" << msg;
        if(msg.compare("save file successfully")==0) {
            qDebug() <<"Send to client" << responseString;
        }
        else {
            QByteArray responseData = responseString.toUtf8();
            // Send response back to the client
            clientSocket->write(responseData);
        }
    }
}

void Server::onDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket)
    {
        // Remove the client socket from the list or data structure
        //        connectionSet.removeOne(clientSocket);
        //        connectionSet.remove(2);
//        auto it = connectionSet.begin();
//        while (it != connectionSet.end()) {
//            if (it.value() == clientSocket) {
//                it = connectionSet.erase(it);
//            } else {
//                ++it;
//            }
//        }

        // Clean up the socket
        clientSocket->deleteLater();

        qDebug() << "Client disconnected!";
    }
}
