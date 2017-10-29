#ifndef TRADERPRELIMS2_H
#define TRADERPRELIMS2_H

#include <QDialog>

namespace Ui {
class traderprelims2;
}

class traderprelims2 : public QDialog
{
    Q_OBJECT

public:
    explicit traderprelims2(QWidget *parent = 0);
    ~traderprelims2();

private slots:
    void on_nototrade_clicked();

    void on_yestotrade_clicked();

private:
    Ui::traderprelims2 *ui;
};

#endif // TRADERPRELIMS2_H
