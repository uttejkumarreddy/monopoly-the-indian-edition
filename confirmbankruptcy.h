#ifndef CONFIRMBANKRUPTCY_H
#define CONFIRMBANKRUPTCY_H

#include <QDialog>

namespace Ui {
class confirmbankruptcy;
}

class confirmbankruptcy : public QDialog
{
    Q_OBJECT

public:
    explicit confirmbankruptcy(QWidget *parent = 0);
    ~confirmbankruptcy();

private slots:
    void on_yestobankruptcy_clicked();

    void on_notobankruptcy_clicked();

private:
    Ui::confirmbankruptcy *ui;
};

#endif // CONFIRMBANKRUPTCY_H
