#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    ped_device_probe_all();
    //w.show();
    partition_controllor *widget = new partition_controllor;
    widget->show();

    return a.exec();
}
