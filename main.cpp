#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qRegisterMetaType<QList<QPair<QString, QString>>>("QList<QPair<QString, QString>>");
    MainWindow w;
    w.show();
    return a.exec();
}
