#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap bkgnd("/Users/connormccann/Documents/QT_Editor/Project_2/TheWorld.jpg");
//    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
//    QPalette palette;
//    palette.setBrush(QPalette::Background, bkgnd);
//    this->setPalette(palette);
//    ui->test->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if(username == "connor" && password == "1234")
    {
        QMessageBox::information(this,"Login","Username and password are correct");         // Function
        hide();
        regionchoice = new regionChoice(this);                                                    // Just calling itself by using this to represent parent window
//        int WIDTH = regionchoice->width() * 0.8;
//        int HEIGHT = regionchoice->height() * 0.75;
//        QDesktopWidget *desktop = QApplication::desktop();
//        int screenWidth;
//        int screenHeight;
//        screenWidth = desktop->width();
//        screenHeight = desktop->height();
//        int x = (screenWidth - WIDTH)/2;
//        int y = (screenHeight - HEIGHT)/2;
//        regionchoice->setGeometry(x,y,WIDTH,HEIGHT);
        regionchoice->show();                                                                  // This defines a local variable as a pointer to new heap memory of type Ui
    }
    else
    {
        QMessageBox::warning(this,"Logion","Username and password incorrect");              // Function
    }
}


