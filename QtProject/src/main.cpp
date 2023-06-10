#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QIcon winIcon("..\\IndianRestaraunts\\data\\main.ico");
    w.setWindowIcon(winIcon);
    w.setWindowTitle("Indian Restaraunts");

    w.show();
    return a.exec();
}
