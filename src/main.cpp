#include "include/mainwindow.h"
#include <iostream>
#include <QApplication>
#include "include/component.h"
#include <QLabel>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    return 0;
}
