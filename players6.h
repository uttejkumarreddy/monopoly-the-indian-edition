#ifndef PLAYERS6_H
#define PLAYERS6_H

#include <QDialog>

namespace Ui {
class players6;
}

class players6 : public QDialog
{
    Q_OBJECT

public:
    explicit players6(QWidget *parent = 0);
    ~players6();

private slots:
    void on_six_OK_clicked();

private:
    Ui::players6 *ui;
};

#endif // PLAYERS6_H
