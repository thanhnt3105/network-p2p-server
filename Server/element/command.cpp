#include "command.h"

Command::Command(QObject *parent)
    : QObject{parent}
{

}

Command::Command(QString cmd,/* Priority priority,*/ QObject *parent) : QObject{parent}
{
    this->command = cmd;
}

QString Command::getCommandString() {
    return this->command;
}

Command* Command::toCommand(QString input){
    QMap<QString, Command*> commands;
    commands.insert("LOGIN", new Command("LOGIN" /*, Command::NORMAL, 0*/));
    commands.insert("LOGOUT", new Command("LOGOUT"));
    commands.insert("REGISTER", new Command("REGISTER"));
    commands.insert("UPLOADFILE", new Command("UPLOADFILE"));
    commands.insert("SEARCHFILE", new Command("SEARCHFILE"));
    commands.insert("REFRESH", new Command("REFRESH"));
    commands.insert("GETFILEBYUSERID",new Command("GETFILEBYUSERID"));
    return commands.value(input);
}
