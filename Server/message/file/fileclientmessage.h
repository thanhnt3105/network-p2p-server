#ifndef FILECLIENTMESSAGE_H
#define FILECLIENTMESSAGE_H

#include <QObject>
#include <message/clientmessage.h>
#include <QJsonDocument>

class FileClientMessage : public ClientMessage
{
    Q_OBJECT
public:
    explicit FileClientMessage(QObject *parent = nullptr);
    explicit FileClientMessage(QString fileName, QObject *parent = nullptr);
    explicit FileClientMessage(QString fileName,QString filePath, quint64 userId, QObject *parent = nullptr);

signals:

};

#endif // FILECLIENTMESSAGE_H
