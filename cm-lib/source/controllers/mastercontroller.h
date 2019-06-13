#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>

#include <cm-lib_global.h>
#include <controllers/navigationcontroller.h>
#include <controllers/commandcontroller.h>

class CMLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(NavigationController *ui_navigationController READ navigationController CONSTANT)
    Q_PROPERTY(CommandController* ui_commandController READ commandController CONSTANT)

public:
    MasterController(QObject* parent = nullptr);

    NavigationController *navigationController();
    CommandController *commandController();

private:
    NavigationController *m_navigationController;
    CommandController *m_commandController;
};

#endif // MASTERCONTROLLER_H
