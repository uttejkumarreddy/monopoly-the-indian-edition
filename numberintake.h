#ifndef NUMBERINTAKE_H
#define NUMBERINTAKE_H

#include <QDialog>

namespace Ui {
class NumberIntake;
}

class NumberIntake : public QDialog
{
    Q_OBJECT

public:
    explicit NumberIntake(QWidget *parent = 0);
    ~NumberIntake();

private slots:
    void on_numberOK_clicked();

private:
    Ui::NumberIntake *ui;
};

#endif // NUMBERINTAKE_H
