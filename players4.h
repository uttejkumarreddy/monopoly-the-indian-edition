#ifndef PLAYERS4_H
#define PLAYERS4_H

#include <QDialog>

namespace Ui {
class players4;
}

class players4 : public QDialog
{
    Q_OBJECT

public:
    explicit players4(QWidget *parent = 0);
    ~players4();

private slots:
    void on_four_OK_clicked();

private:
    Ui::players4 *ui;
};

#endif // PLAYERS4_H
