#ifndef ROLLED_OCCUPIED_H
#define ROLLED_OCCUPIED_H

#include <QDialog>

namespace Ui {
class rolled_occupied;
}

class rolled_occupied : public QDialog
{
    Q_OBJECT

public:
    explicit rolled_occupied(QWidget *parent = 0);
    ~rolled_occupied();

private slots:
    void on_occ_OK_clicked();

private:
    Ui::rolled_occupied *ui;
};

#endif // ROLLED_OCCUPIED_H
