#ifndef SERVERCREATEMESSAGE_H
#define SERVERCREATEMESSAGE_H

#include <QObject>
#include <QList>
#include <server/requestprocessing.h>
#include <message/auth/loginservermessage.h>
#include <message/auth/registerservermessage.h>
#include <message/file/fileservermessage.h>

class ServerCreateMessage : public QObject
{
    Q_OBJECT

private:
    RequestProcessing* requestProcessing;

public:
    explicit ServerCreateMessage(QObject *parent = nullptr);

    RequestProcessing *getRequestProcessing() const;
    void setRequestProcessing(RequestProcessing *newRequestProcessing);

public slots:
    QString createMessage(QString msg);

signals:

};

#endif // SERVERCREATEMESSAGE_H
