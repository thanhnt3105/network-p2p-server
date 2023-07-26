#include "filequery.h"
#include <QtSql/QSqlQuery>

FileQuery::FileQuery(QObject *parent)
    : QObject{parent}
{

}

QList<File*> FileQuery::getAllFileByName(QString fileName)
{
    QSqlQuery query;
    QList<File*> fileList;

    QString sqlQuery = "SELECT file.id, file.file_name, file.file_path, file.user_id, "
                       "user.username "
                       "FROM file "
                       "JOIN user ON file.user_id = user.id "
                       "WHERE file.file_name LIKE '%' || :fileName || '%'";
    query.prepare(sqlQuery);
    query.bindValue(":fileName", fileName);

    if (!query.exec()) {
        qDebug() << "Can not query";
    }

    while (query.next()) {
        quint64 id = query.value(0).toULongLong();
        QString fileName = query.value(1).toString();
        QString filePath = query.value(2).toString();
        quint64 userId = query.value(3).toULongLong();
        QString username = query.value(4).toString();
        User* user = new User();
        user->setId(userId);
        user->setUsername(username);

        File* file = new File();
        file->setId(id);
        file->setFileName(fileName);
        file->setFilePath(filePath);
        file->setUser(user);

        fileList.append(file);
    }

    return fileList;
}

QList<File*> FileQuery::getFilesByUserId(quint64 userId)
{
    QSqlQuery query;
    QList<File*> fileList;

    QString sqlQuery = "SELECT file.id, file.file_name, file.file_path, file.user_id "
                       "FROM file "
                       "WHERE file.user_id = :userId";
    query.prepare(sqlQuery);
    query.bindValue(":userId", userId);

    if (!query.exec()) {
        qDebug() << "Không thể thực hiện truy vấn";
    }

    while (query.next()) {
        quint64 id = query.value(0).toULongLong();
        QString fileName = query.value(1).toString();
        QString filePath = query.value(2).toString();

        File* file = new File();
        file->setId(id);
        file->setFileName(fileName);
        file->setFilePath(filePath);

        fileList.append(file);
    }

    return fileList;
}

void FileQuery::saveFileByUserId(quint64 userId, QString fileName, QString filePath)
{
    QSqlQuery query;

    QString sqlQuery = "INSERT INTO file (file_name, file_path, user_id) "
                       "VALUES (:fileName, :filePath, :userId)";
    query.prepare(sqlQuery);
    query.bindValue(":fileName", fileName);
    query.bindValue(":filePath", filePath);
    query.bindValue(":userId", userId);

    if (!query.exec()) {
        qDebug() << "Không thể lưu tệp";
    }
}

void FileQuery::removeFileById(quint64 fileId)
{
    QSqlQuery query;

    QString sqlQuery = "DELETE FROM file WHERE id = :fileId";
    query.prepare(sqlQuery);
    query.bindValue(":fileId", fileId);

    if (!query.exec()) {
        qDebug() << "Không thể xóa tệp";
    }
}

QList<File*> FileQuery::getAllFiles()
{
    QSqlQuery query;
    QList<File*> fileList;
    QString sqlQuery = "SELECT file.*, user.username "
                       "FROM file "
                       "JOIN user ON file.user_id = user.id";

    if (!query.exec(sqlQuery)) {
        qDebug() << "Không thể lấy thông tin tệp";
    }

    while (query.next()) {
        quint64 id = query.value(0).toULongLong();
        QString fileName = query.value(1).toString();
        QString filePath = query.value(2).toString();
        quint64 userId = query.value(3).toULongLong();
        QString username = query.value(4).toString();
        User* user = new User();
        user->setId(userId);
        user->setUsername(username);

        File* file = new File();
        file->setId(id);
        file->setFileName(fileName);
        file->setFilePath(filePath);
        file->setUser(user);

        fileList.append(file);
    }

    return fileList;
}









