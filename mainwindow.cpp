
#include <QMenuBar>
#include <QMenu>
#include <QMessageBox>
#include <QDebug>
#include "mainwindow.h"
#include "window.h"

MainWindow::MainWindow(FieldSetting stng)
{
    setCentralWidget(new Window(stng));
}

MainWindow::~MainWindow()
{

}
