#ifndef COMMAND_H
#define COMMAND_H

#include <functional>
#include <QObject>
#include <QScopedPointer>
#include <QString>

class Command : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString ui_iconCharacter READ iconCharacter CONSTANT)
    Q_PROPERTY(QString ui_description READ description CONSTANT)
    Q_PROPERTY(QString ui_canExecute READ canExecute NOTIFY canExecuteChanged)

public:
    Command(QObject* parent = nullptr,
                         const QString& iconCharacter = "",
                         const QString& description = "",
                         std::function<bool()> canExecute = [](){ return true;});
    ~Command();

    QString iconCharacter() const;
    QString description() const;
    std::function<bool ()> canExecute() const;

signals:
    void canExecuteChanged();
    void executed();

private:
    QString m_iconCharacter;
    QString m_description;
    std::function<bool()> m_canExecute;
};

#endif // COMMAND_H
