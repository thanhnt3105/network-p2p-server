#ifndef USER_H
#define USER_H

#include <QObject>

class User : public QObject
{
    Q_OBJECT

protected:
    quint64 id;
    QString username;
    QString password;

public:
    explicit User(QObject *parent = nullptr);

    quint64 getId() const;
    void setId(quint64 newId);

    QString getUsername() const;
    void setUsername(const QString &newUsername);

    QString getPassword() const;
    void setPassword(const QString &newPassword);

public slots:
signals:

};

#endif // USER_H
