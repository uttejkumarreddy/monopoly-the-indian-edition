#ifndef CONFIRMPURCHASE_H
#define CONFIRMPURCHASE_H

#include <QDialog>

namespace Ui {
class confirmpurchase;
}

class confirmpurchase : public QDialog
{
    Q_OBJECT

public:
    explicit confirmpurchase(QWidget *parent = 0);
    ~confirmpurchase();

private slots:
    void on_pushButton_clicked();

private:
    Ui::confirmpurchase *ui;
};

#endif // CONFIRMPURCHASE_H
