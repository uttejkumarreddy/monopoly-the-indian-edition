#ifndef TRADINGOPTIONS_H
#define TRADINGOPTIONS_H

#include <QDialog>

namespace Ui {
class tradingoptions;
}

class tradingoptions : public QDialog
{
    Q_OBJECT

public:
    explicit tradingoptions(QWidget *parent = 0);
    ~tradingoptions();

private slots:
    void on_tradecancel_clicked();

    void on_tradeOK_clicked();

private:
    Ui::tradingoptions *ui;
};

#endif // TRADINGOPTIONS_H
