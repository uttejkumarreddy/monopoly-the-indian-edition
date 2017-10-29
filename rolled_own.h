#ifndef ROLLED_OWN_H
#define ROLLED_OWN_H

#include <QDialog>

namespace Ui {
class rolled_own;
}

class rolled_own : public QDialog
{
    Q_OBJECT

public:
    explicit rolled_own(QWidget *parent = 0);
    ~rolled_own();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_build_house_clicked();

    void on_own_skip_clicked();

    void on_build_hotel_clicked();

private:
    Ui::rolled_own *ui;
};

#endif // ROLLED_OWN_H
