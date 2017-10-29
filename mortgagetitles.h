#ifndef MORTGAGETITLES_H
#define MORTGAGETITLES_H

#include <QDialog>

namespace Ui {
class mortgagetitles;
}

class mortgagetitles : public QDialog
{
    Q_OBJECT

public:
    explicit mortgagetitles(QWidget *parent = 0);
    ~mortgagetitles();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::mortgagetitles *ui;
};

#endif // MORTGAGETITLES_H
