#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "field.h"
#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(FieldSetting stng);
    ~MainWindow();
};

#endif
