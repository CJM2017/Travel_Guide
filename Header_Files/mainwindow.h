#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regionchoice.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();                      // Received signal slot function

private:
    Ui::MainWindow *ui;
    regionChoice *regionchoice;
};

#endif // MAINWINDOW_H
