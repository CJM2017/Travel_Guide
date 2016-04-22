#ifndef REGIONCHOICE_H
#define REGIONCHOICE_H

#include <QDialog>

namespace Ui {
class regionChoice;
}

class regionChoice : public QDialog
{
    Q_OBJECT

public:
    explicit regionChoice(QWidget *parent = 0);
    ~regionChoice();

private:
    Ui::regionChoice *ui;
};

#endif // REGIONCHOICE_H
