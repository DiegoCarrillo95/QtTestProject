#include "mastercontroller.h"

MasterController::MasterController(QObject *parent): QObject(parent)
{
   m_navigationController = new NavigationController();
   m_commandController = new CommandController();
}

NavigationController *MasterController::navigationController()
{
    return m_navigationController;
}

CommandController *MasterController::commandController()
{
    return m_commandController;
}
