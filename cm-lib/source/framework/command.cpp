#include "command.h"

Command::Command(QObject* parent, const QString iconCharacter, const QString description, std::function<bool()> canExecute): QObject(parent),
      m_iconCharacter(iconCharacter),
      m_description(description),
      m_canExecute(canExecute)
{

}

Command::~Command(){

}

QString Command::iconCharacter() const
{
    return m_iconCharacter;
}

QString Command::description() const
{
    return m_description;
}

bool Command::canExecute() const
{
    return m_canExecute();
}
