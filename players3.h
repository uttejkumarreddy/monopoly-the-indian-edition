#ifndef PLAYERS3_H
#define PLAYERS3_H

#include <QDialog>

namespace Ui {
class players3;
}

class players3 : public QDialog
{
    Q_OBJECT

public:
    explicit players3(QWidget *parent = 0);
    ~players3();

private slots:
    void on_three_OK_clicked();

private:
    Ui::players3 *ui;
};

#endif // PLAYERS3_H
