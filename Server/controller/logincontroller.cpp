#include "logincontroller.h"

User *LoginController::getUser() const
{
    return user;
}

void LoginController::setUser(User *newUser)
{
    user = newUser;
}

LoginController::LoginController(QObject *parent)
    : QObject{parent}
{
    this->userQuery = new UserQuery();
}

QString LoginController::checkLogin(QString username, QString password) {
    if(!checkUsername(username))
    {
        return "invalid username"; //khong tim thay email
    }
    else {
        User* anUser = this->userQuery->searchUserByUsernameAndPass(username,password);
        if(anUser->getId()==NULL || anUser->getId()==0 || anUser->getUsername()=="") {
            return "invalid password";
        }
        else {
            this->user = anUser;
            return "login successfully";
        }
    }
}

bool LoginController::checkUsername(QString username) {
    QList<QString> usernames;
    usernames = this->userQuery->getAllUsernames();
    if(usernames.contains(username))
    {
        return true;
    }
    else return false;
}


