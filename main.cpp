#include "mainwindow.h"  //header files
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //main-window object
    w.show(); //calling function using main-window object

    return a.exec();
}
