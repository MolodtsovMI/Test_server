#ifndef THREADCONTROLLER_H
#define THREADCONTROLLER_H

#include <QObject>
#include "telecomserver.h"

class ThreadController:public QObject
{
    Q_OBJECT

public:
    ThreadController(){};
    ~ThreadController(){};

private:
    TelecomServer *telecom_server;

private slots:
    void initThread();

};
#endif // THREADCONTROLLER_H