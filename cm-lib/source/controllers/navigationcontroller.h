#ifndef NAVIGATIONCONTROLLER_H
#define NAVIGATIONCONTROLLER_H

#include <QObject>

#include <cm-lib_global.h>
#include "models/client.h"

class CMLIBSHARED_EXPORT NavigationController : public QObject
{
    Q_OBJECT

public:
    NavigationController();

signals:
    void goCreateClientView();
    void goDashboardView();
    void goEditClientView(Client* client);
    void goFindClientView();
};

#endif // NAVIGATIONCONTROLLER_H
