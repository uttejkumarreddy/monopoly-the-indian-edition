#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>

namespace Ui {
class howtoplay;
}

class howtoplay : public QDialog
{
    Q_OBJECT

public:
    explicit howtoplay(QWidget *parent = 0);
    ~howtoplay();

private slots:
    void on_pushButton_clicked();

private:
    Ui::howtoplay *ui;
};

#endif // HOWTOPLAY_H
