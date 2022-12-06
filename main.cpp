#include "mainwindow.h"
#include <QApplication>

//main.cpp is used to execute the program
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
