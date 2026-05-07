#include "mainwindow.h"
#include <QToolBar>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   
    server_thread = new QThread;
    thread_controller = new ThreadController;
    connect(server_thread, SIGNAL(started()), thread_controller, SLOT(initThread()));
    thread_controller->moveToThread(server_thread);
    server_thread->start();

}



MainWindow::~MainWindow()
{
    if(server_thread->isRunning())
        server_thread->exit();
}

