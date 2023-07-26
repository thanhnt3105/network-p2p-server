#include "requestprocessing.h"

QJsonObject RequestProcessing::getMessage() const
{
    return message;
}

void RequestProcessing::setMessage(const QJsonObject &newMessage)
{
    message = newMessage;
}

User *RequestProcessing::getUser() const
{
    return user;
}

void RequestProcessing::setUser(User *newUser)
{
    user = newUser;
}

QString RequestProcessing::getOuputMsg() const
{
    return ouputMsg;
}

void RequestProcessing::setOuputMsg(const QString &newOuputMsg)
{
    ouputMsg = newOuputMsg;
}

QList<User *> RequestProcessing::getUsers() const
{
    return users;
}

void RequestProcessing::setUsers(const QList<User *> &newUsers)
{
    users = newUsers;
}

QList<QString> RequestProcessing::getUsernames() const
{
    return usernames;
}

void RequestProcessing::setUsernames(const QList<QString> &newUsernames)
{
    usernames = newUsernames;
}

File *RequestProcessing::getFile() const
{
    return file;
}

void RequestProcessing::setFile(File *newFile)
{
    file = newFile;
}


QList<File *> RequestProcessing::getListFile() const
{
    return listFile;
}

void RequestProcessing::setListFile(const QList<File *> &newListFile)
{
    listFile = newListFile;
}

RequestProcessing::RequestProcessing(QObject *parent)
    : QObject{parent}
{

}

QString RequestProcessing::handle() {
    quint64 cmd = 0;
    QString output;
    if (this->message.contains("command_code") && this->message["command_code"].isString()) {
        QString command = this->message["command_code"].toString();
        if(command.compare("LOGIN")==0){
            output = this->login();
        }
        else if(command.compare("REGISTER")==0) {
            output = this->registers();
        }
        else if(command.compare("GETALLFILES")==0) {
            output = this->getAllFiles();
        }
        else if(command.compare("SEARCHFILE")==0) {
            output = this->searchFileByName();
        }
        else if(command.compare("UPLOADFILE")==0) {
            output = this->uploadFile();
        }
        else if(command.compare("GETFILEBYUSERID")==0) {
            output = this->getFileByUserId();
        }
    }
    return output;
}

QString RequestProcessing::login() {
    // Lấy giá trị của key "info" từ QJsonObject
    QString username;
    QString password;
    QString host;
    quint16 port=NULL;
    QString msg;
    if (this->message.contains("info") && this->message["info"].isString()) {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "username" va password từ QJsonObject "infoObject"
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("password") && infoObject["password"].isString()) {
            password = infoObject["password"].toString();
        }
        if (infoObject.contains("host") && infoObject["host"].isString()) {
            host = infoObject["host"].toString();
        }
        if (infoObject.contains("port")) {
            port = infoObject["port"].toInt();
        }

        for(int i=0;i<Session::getInstance()->getConnectionSet().size();i++){
            ConnectionInfor*connectionInfor = Session::getInstance()->getConnectionSet().at(i);
            if(connectionInfor->getHost().compare(host)==0&&connectionInfor->getPort()==port) return "invalid port";
        }
        LoginController* loginController = new LoginController();
        msg = loginController->checkLogin(username, password);
        if(msg.compare("login successfully")==0) {
            this->user = loginController->getUser();
            ConnectionInfor*connectionInfor = new ConnectionInfor(loginController->getUser()->getId(),host,port);
            Session::getInstance()->addConnection(connectionInfor);
        }
        return msg;
    }
}


QString RequestProcessing::registers() {
    QString username;
    QString password;
    QString msg;

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        // Lấy giá trị của key "username" từ QJsonObject "infoObject"
        if (infoObject.contains("username") && infoObject["username"].isString()) {
            username = infoObject["username"].toString();
        }
        if (infoObject.contains("password") && infoObject["password"].isString()) {
            password = infoObject["password"].toString();
        }
        RegisterController* registerController = new RegisterController();
        msg = registerController->createRgister(username, password);
        return msg;
    }
}

QString RequestProcessing::getAllFiles()
{
    QString msg;

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        FileController* fileController = new FileController();
        msg = fileController->getAllFiles();
        return msg;
    }
}

QString RequestProcessing::searchFileByName()
{
    QString fileName;
    QString msg;

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();

        if (infoObject.contains("fileName") && infoObject["fileName"].isString()) {
            fileName = infoObject["fileName"].toString();
        }

        FileController* fileController = new FileController();
        msg = fileController->searchFileByName(fileName);
        this->listFile = fileController->getFileList();
        return msg;
    }
}

QString RequestProcessing::uploadFile()
{
    QString fileName;
    QString filePath;
    quint64 userId=NULL;
    QString msg="can not upload file";

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
        qDebug() <<"File by name" << infoObject;

        if (infoObject.contains("fileName") && infoObject["fileName"].isString()) {
            fileName = infoObject["fileName"].toString();
        }
        if (infoObject.contains("filePath") && infoObject["filePath"].isString()) {
            filePath = infoObject["filePath"].toString();
        }
        if (infoObject.contains("userId")) {
            userId = infoObject["userId"].toInt();
        }

        FileController* fileController = new FileController();
        msg = fileController->uploadFile(fileName,filePath,userId);
    }
    return msg;
}

QString RequestProcessing::getFileByUserId()
{
    quint64 userId=NULL;
    QString msg="can not upload file";

    if (this->message.contains("info") && this->message["info"].isString())
    {
        QString infoString = this->message["info"].toString();
        QJsonObject infoObject = QJsonDocument::fromJson(infoString.toUtf8()).object();
        qDebug() <<"infoString"<<infoString;
        if (infoObject.contains("userId")) {
            userId = infoObject["userId"].toInt();
        }

        FileController* fileController = new FileController();
        msg = fileController->getFileByUserId(userId);
        this->listFile = fileController->getFileList();
    }
    return msg;
}
