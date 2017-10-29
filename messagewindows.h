#ifndef MESSAGEWINDOWS_H
#define MESSAGEWINDOWS_H

#include <QDialog>

namespace Ui {
class Messagewindows;
}

class Messagewindows : public QDialog
{
    Q_OBJECT

public:
    explicit Messagewindows(QWidget *parent = 0);
    ~Messagewindows();

private slots:
    void on_message_ok_clicked();

private:
    Ui::Messagewindows *ui;
};

#endif // MESSAGEWINDOWS_H
