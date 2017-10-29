#ifndef PLAYERS2_H
#define PLAYERS2_H

#include <QDialog>

namespace Ui {
class Players2;
}

class Players2 : public QDialog
{
    Q_OBJECT

public:
    explicit Players2(QWidget *parent = 0);
    ~Players2();

private slots:
    void on_two_OK_clicked();

private:
    Ui::Players2 *ui;
};

#endif // PLAYERS2_H
