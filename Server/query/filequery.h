#ifndef FILEQUERY_H
#define FILEQUERY_H

#include <QObject>
#include <entity/file.h>

class FileQuery : public QObject
{
    Q_OBJECT
public:
    explicit FileQuery(QObject *parent = nullptr);

public slots:
    QList<File*> getAllFileByName(QString fileName);
    QList<File*> getFilesByUserId(quint64 userId);
    void saveFileByUserId(quint64 userId, QString fileName, QString filePath);
    void removeFileById(quint64 fileId);
    QList<File*> getAllFiles();
signals:

};

#endif // FILEQUERY_H
