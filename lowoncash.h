#ifndef LOWONCASH_H
#define LOWONCASH_H

#include <QDialog>

namespace Ui {
class lowoncash;
}

class lowoncash : public QDialog
{
    Q_OBJECT

public:
    explicit lowoncash(QWidget *parent = 0);
    ~lowoncash();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::lowoncash *ui;
};

#endif // LOWONCASH_H
