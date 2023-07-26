#include "filecontroller.h"

File *FileController::getFile() const
{
    return file;
}

void FileController::setFile(File *newFile)
{
    file = newFile;
}

QList<File *> FileController::getFileList() const
{
    return fileList;
}

void FileController::setFileList(const QList<File *> &newFileList)
{
    fileList = newFileList;
}

FileController::FileController(QObject *parent)
    : QObject{parent}
{
    this->fileQuery = new FileQuery();
}

QString FileController::getAllFiles()
{
    this->fileQuery->getAllFiles();
    return "get files successfully";
}

QString FileController::searchFileByName(QString fileName)
{
    QList<File*> fileList = this->fileQuery->getAllFileByName(fileName);
    QList<File*> fileResult;
    //Filter file that the owner is online.
    //From connection set -> get a list of userid.
    //run for loop in fileList. If fileList.getId is in
    //set port and host
    for(int i=0;i<fileList.size();++i){
        for(int j=0;j<Session::getInstance()->getConnectionSet().size();++j){
            if (Session::getInstance()->getConnectionSet().at(j)->getUserId() == static_cast<int>(fileList.at(i)->getUser()->getId())) {
                File*fileTemp = new File();
                fileTemp->setFileName(fileList.at(i)->getFileName());
                fileTemp->setFilePath(fileList.at(i)->getFilePath());
                fileTemp->setUser(fileList.at(i)->getUser());
                fileTemp->setHost(Session::getInstance()->getConnectionSet().at(j)->getHost());
                fileTemp->setPort(Session::getInstance()->getConnectionSet().at(j)->getPort());
                fileResult.push_back(fileTemp);
            }
        }
    }
    this->setFileList(fileResult);
    if (fileResult.isEmpty()) {
        return "file not found";
    } else {
        return "file found";
    }
}

QString FileController::uploadFile(QString fileName, QString filePath, quint64 userId)
{
    this->fileQuery->saveFileByUserId(userId,fileName,filePath);
    return "save file successfully";
}



