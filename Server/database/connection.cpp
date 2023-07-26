#include "connection.h"

Connection::Connection(QObject *parent)
    : QObject{parent}
{

}

bool Connection::isConnected() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "C:/Users/Asus/OneDrive/Desktop/P2PShareFile/P2PShareFile/database/db.db"; // Đường dẫn tới tệp SQLite
    db.setDatabaseName(dbPath);
    if(!db.open()) {
        printf("not connected");
        return false;
    }
    return true;
}
