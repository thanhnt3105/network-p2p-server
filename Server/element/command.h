#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QMap>

class Command : public QObject
{
    Q_OBJECT
public:
    explicit Command(QObject *parent = nullptr);
    explicit Command(QString cmd, /*Priority priority,*/ QObject *parent = nullptr);
public slots:
    static Command* toCommand(QString input);
    QString getCommandString();

private:
    QString command;

signals:

};

#endif // COMMAND_H
