#ifndef TRADEPRELIMINARIES_H
#define TRADEPRELIMINARIES_H

#include <QDialog>

namespace Ui {
class tradepreliminaries;
}

class tradepreliminaries : public QDialog
{
    Q_OBJECT

public:
    explicit tradepreliminaries(QWidget *parent = 0);
    ~tradepreliminaries();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::tradepreliminaries *ui;
};

#endif // TRADEPRELIMINARIES_H
