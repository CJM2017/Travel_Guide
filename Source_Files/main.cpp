#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    int WIDTH = w.width()*0.8;
//    int HEIGHT = w.height()*0.75;
//    int screenWidth;
//    int screenHeight;
//    QDesktopWidget *desktop = QApplication::desktop();
//    screenWidth = desktop->width();
//    screenHeight = desktop->height();
//    int x = (screenWidth - WIDTH)/2;
//    int y = (screenHeight - HEIGHT)/2;
//    w.setGeometry(x,y,WIDTH,HEIGHT);
//      w.setFixedSize(360,360);
//    w.showMaximized();

    w.show();

    return a.exec();
}
