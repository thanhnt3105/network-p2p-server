#ifndef FILESERVERMESSAGE_H
#define FILESERVERMESSAGE_H

#include <QObject>
#include <message/servermessage.h>
#include <QList>
#include <entity/file.h>

class FileServerMessage : public ServerMessage
{
    Q_OBJECT
public:
    explicit FileServerMessage(QObject *parent = nullptr);
    explicit FileServerMessage( QList<File*> fileList, QString errorMsg, QObject *parent = nullptr);
    explicit FileServerMessage(QString errorMsg, QObject *parent = nullptr);
    explicit FileServerMessage(QString fileName,QString filePath,quint64 userId,QString errorMsg, QObject *parent = nullptr);

signals:

};

#endif // FILESERVERMESSAGE_H
