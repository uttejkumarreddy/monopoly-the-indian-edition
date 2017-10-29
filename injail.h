#ifndef INJAIL_H
#define INJAIL_H

#include <QDialog>

namespace Ui {
class injail;
}

class injail : public QDialog
{
    Q_OBJECT

public:
    explicit injail(QWidget *parent = 0);
    ~injail();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::injail *ui;
};

#endif // INJAIL_H
