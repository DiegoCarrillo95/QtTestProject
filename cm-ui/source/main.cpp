#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <controllers/mastercontroller.h>
#include <controllers/commandcontroller.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<MasterController>("CM", 1, 0,"MasterController");
    qmlRegisterType<NavigationController>("CM", 1, 0,"NavigationController");
    qmlRegisterType<CommandController>("CM", 1, 0, "CommandController");
    qmlRegisterType<Command>("CM", 1, 0, "Command");

    MasterController masterController;
    QQmlApplicationEngine engine;

    engine.addImportPath("qrc:/");

    engine.rootContext()->setContextProperty("masterController", &masterController);

    engine.load(QUrl(QStringLiteral("qrc:/views/MasterView.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
