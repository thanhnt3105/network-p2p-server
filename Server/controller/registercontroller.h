#ifndef REGISTERCONTROLLER_H
#define REGISTERCONTROLLER_H

#include <QObject>
#include <query/userquery.h>

class RegisterController : public QObject
{
    Q_OBJECT

private:
    UserQuery* userQuery;
public:
    explicit RegisterController(QObject *parent = nullptr);
public slots:
    QString createRgister(QString username, QString password);
    bool checkUsername(QString username);

signals:

};

#endif // REGISTERCONTROLLER_H
