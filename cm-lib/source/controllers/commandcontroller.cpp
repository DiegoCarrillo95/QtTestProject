#include "commandcontroller.h"
#include <QDebug>

CommandController::CommandController(QObject *parent): QObject(parent)
{
    m_createClientSaveCommand = new Command(this, QChar( 0xf0c7 ), "Save" );

    QObject::connect(m_createClientSaveCommand, &Command::executed, this, &CommandController::onCreateClientSaveExecuted );

    m_createClientViewContextCommands.append(m_createClientSaveCommand);
}

CommandController::~CommandController(){

}

QQmlListProperty<Command> CommandController::ui_createClientViewContextCommands()
{
    return QQmlListProperty<Command>(this, m_createClientViewContextCommands);
}

void CommandController::onCreateClientSaveExecuted()
{
    qDebug() << "You executed the Save command!";
}
