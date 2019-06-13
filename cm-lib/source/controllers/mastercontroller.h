#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>

#include <cm-lib_global.h>
#include <controllers/navigationcontroller.h>

class CMLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(NavigationController *ui_navigationController READ navigationController CONSTANT)

public:
    MasterController(QObject* parent = nullptr);

    NavigationController *navigationController();

private:
    NavigationController* m_navigationController;
};

#endif // MASTERCONTROLLER_H
