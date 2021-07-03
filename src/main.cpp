#include "include/mainwindow.h"
#include <iostream>
#include <QApplication>
#include "include/component.h"

int main(int argc, char *argv[])
{
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    */

    HPPointer hp = new HP(10);
    qInfo()<<"[main] "<<hp->get();
    hp->change(-9.999999999999999999999999999999999999);
    qInfo()<<"[main] "<<hp->isAlive();
    HPPointer hp2 = new HP(*hp.data());
    qInfo()<<"[main] "<<hp.get();
    qInfo()<<"[main] "<<hp2.get();
    delete hp;
    qInfo()<<"[main] "<<hp2.get();
    HPPointer hp3 = new HP(2);
    hp3 = hp2;

    
    return 0;
}
