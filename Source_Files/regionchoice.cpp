#include "regionchoice.h"
#include "ui_RegionChoice.h"

regionChoice::regionChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regionChoice)
{
    ui->setupUi(this);
}

regionChoice::~regionChoice()
{
    delete ui;
}
