#ifndef MYCARDS_H
#define MYCARDS_H

#include <QDialog>

namespace Ui {
class mycards;
}

class mycards : public QDialog
{
    Q_OBJECT

public:
    explicit mycards(QWidget *parent = 0);
    ~mycards();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mycards *ui;
};

#endif // MYCARDS_H
