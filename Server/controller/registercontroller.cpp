#include "registercontroller.h"

RegisterController::RegisterController(QObject *parent)
    : QObject{parent}
{
    this->userQuery = new UserQuery();
}

bool RegisterController::checkUsername(QString username) {
    QList<QString> usernames = userQuery->getAllUsernames();
    if(usernames.contains(username)) {
        return false;
    }
    else return true;
}

QString RegisterController::createRgister(QString username, QString password) {
    if(!checkUsername(username)) {
        return "username exist";
    }
    else {
        this->userQuery->saveUser(username, password);
        return "register successfully";
    }
}
