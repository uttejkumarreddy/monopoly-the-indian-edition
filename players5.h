#ifndef PLAYERS5_H
#define PLAYERS5_H

#include <QDialog>

namespace Ui {
class players5;
}

class players5 : public QDialog
{
    Q_OBJECT

public:
    explicit players5(QWidget *parent = 0);
    ~players5();

private slots:
    void on_five_OK_clicked();

private:
    Ui::players5 *ui;
};

#endif // PLAYERS5_H
