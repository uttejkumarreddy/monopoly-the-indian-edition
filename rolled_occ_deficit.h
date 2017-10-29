#ifndef ROLLED_OCC_DEFICIT_H
#define ROLLED_OCC_DEFICIT_H

#include <QDialog>

namespace Ui {
class rolled_occ_deficit;
}

class rolled_occ_deficit : public QDialog
{
    Q_OBJECT

public:
    explicit rolled_occ_deficit(QWidget *parent = 0);
    ~rolled_occ_deficit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::rolled_occ_deficit *ui;
};

#endif // ROLLED_OCC_DEFICIT_H
