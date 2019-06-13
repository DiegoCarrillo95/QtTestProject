#ifndef COMMANDCONTROLLER_H
#define COMMANDCONTROLLER_H

#include <QObject>
#include <QtQml/QQmlListProperty>
#include <framework/command.h>

class CommandController: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Command> ui_createClientViewContextCommands READ ui_createClientViewContextCommands CONSTANT)

public:
    CommandController(QObject* parent = nullptr);
    ~CommandController();

    QQmlListProperty<Command> ui_createClientViewContextCommands();

public slots:
    void onCreateClientSaveExecuted();

private:
    Command *m_createClientSaveCommand;
    QList<Command*> createClientViewContextCommands{};
};

#endif // COMMANDCONTROLLER_H
