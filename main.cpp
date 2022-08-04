#include <QApplication>
#include <QtWidgets>
#include "mainwindow.h"
#include "ui_mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow* mnw = new MainWindow();
    mnw->show();

    return a.exec();
}
