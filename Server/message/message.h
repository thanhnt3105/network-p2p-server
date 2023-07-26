#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>
#include <element/command.h>

class Message : public QObject
{
    Q_OBJECT
protected:
    QJsonObject messageBody;
    Command* command;

public:
    explicit Message(QObject *parent = nullptr);
    explicit Message(QString input, QObject *parent = nullptr);
public slots:
    void addCommandCode(Command* command_code);
    void addInfo(QJsonObject objInfo);
    void setBody(QString input);
    QString toString();

signals:

};

#endif // MESSAGE_H
