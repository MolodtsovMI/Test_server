#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QThread>
#include "threadcontroller.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT       

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QThread *server_thread;
    ThreadController *thread_controller;
};
#endif // MAINWINDOW_H
