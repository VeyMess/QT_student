#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <random>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lst = findChild<QListWidget*>("studentList");
    if(lst!=nullptr)
        qDebug()<<"Child Found!!!";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addListItem()
{
    int rng = std::rand();
    char nm = (rng*8) % 255;
    char ln = (rng*24) % 255;

    Student tmp(rng,QString("N-") + nm, QString("LN-") + ln);
    studs.push_back(tmp);
    lst->addItem(tmp.getName() + "" + tmp.getLastName());
    qDebug() << "List Counter: " << lst->count();
}
