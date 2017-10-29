#ifndef PLAYERSTATUS_H
#define PLAYERSTATUS_H

#include <QDialog>

namespace Ui {
class playerstatus;
}

class playerstatus : public QDialog
{
    Q_OBJECT

public:
    explicit playerstatus(QWidget *parent = 0);
    ~playerstatus();

private slots:
    void on_pushButton_clicked();

private:
    Ui::playerstatus *ui;
};

#endif // PLAYERSTATUS_H
