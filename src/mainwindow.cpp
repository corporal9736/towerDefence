#include "include/mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->button = new QPushButton(this);
    this->button->resize(100,100);
    this->button->setText("exit");
    this->button->move(0,0);
    connect(this->button,&QPushButton::pressed,[]{exit(0);});
    this->hp = new HP(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

