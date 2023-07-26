#ifndef FILECONTROLLER_H
#define FILECONTROLLER_H

#include <QObject>
#include <entity/file.h>
#include <query/filequery.h>
#include <QDebug>
#include <session/session.h>

class FileController : public QObject
{
    Q_OBJECT

private:
    FileQuery* fileQuery;
    File*file;
    QList<File*> fileList;
public:
    explicit FileController(QObject *parent = nullptr);

    File *getFile() const;
    void setFile(File *newFile);
    QList<File *> getFileList() const;
    void setFileList(const QList<File *> &newFileList);

public slots:
    QString getAllFiles();
    QString searchFileByName(QString fileName);
    QString uploadFile(QString fileName, QString filePath, quint64 userId);
    QString getFileByUserId(quint64 userId);

signals:

};

#endif // FILECONTROLLER_H
