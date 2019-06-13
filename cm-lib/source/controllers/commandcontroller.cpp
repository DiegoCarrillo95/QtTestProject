#include "commandcontroller.h"

CommandController::CommandController(QObject *parent): QObject(parent)
{
    m_createClientSaveCommand = new Command(this, QChar( 0xf0c7 ), "Save" );

    QObject::connect(m_createClientSaveCommand, &Command::executed, this, &CommandController::onCreateClientSaveExecuted );

    m_createClientViewContextCommands.append(m_createClientSaveCommand);
}
