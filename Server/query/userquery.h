#ifndef USERQUERY_H
#define USERQUERY_H

#include <QObject>
#include <entity/user.h>

class UserQuery : public QObject
{
    Q_OBJECT
public:
    explicit UserQuery(QObject *parent = nullptr);

public slots:
    User* findUser(QString name);
    void saveUser(QString name, QString pass);
    User* getUserbyId(quint64 id);
    User* searchUserByUsernameAndPass(QString username,QString password);
    QList<QString> getAllUsernames();
signals:

};

#endif // USERQUERY_H
