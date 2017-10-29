#ifndef ROLLED_H
#define ROLLED_H

#include <QDialog>

namespace Ui {
class rolled;
}

class rolled : public QDialog
{
    Q_OBJECT

public:
    explicit rolled(QWidget *parent = 0);
    ~rolled();

private slots:
    void on_avail_skip_clicked();

    void on_avail_buy_clicked();

private:
    Ui::rolled *ui;
};

#endif // ROLLED_H
