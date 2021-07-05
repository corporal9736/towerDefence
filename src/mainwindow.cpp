#include "include/mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    QSharedPointer<QLabel> label1 = QSharedPointer<QLabel>(new QLabel(this));
    QSharedPointer<QLabel> label2(label1);
    qInfo()<<label1<<label2;
    label1.reset();
    qInfo()<<label1<<label2;
}

MainWindow::~MainWindow()
{
    delete ui;
}

