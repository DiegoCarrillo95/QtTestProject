#include "mastercontroller.h"

MasterController::MasterController(QObject *parent): QObject(parent)
{
   m_navigationController = new NavigationController();
}

NavigationController *MasterController::navigationController()
{
    return m_navigationController;
}
