#ifndef TELECOMSERVER_H
#define TELECOMSERVER_H

#include <QObject>

class TelecomServer: public QObject
{
    Q_OBJECT

public:
    TelecomServer();
    ~TelecomServer();
};


#endif    //TELECOMSERVER_H