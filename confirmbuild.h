#ifndef CONFIRMBUILD_H
#define CONFIRMBUILD_H

#include <QDialog>

namespace Ui {
class confirmbuild;
}

class confirmbuild : public QDialog
{
    Q_OBJECT

public:
    explicit confirmbuild(QWidget *parent = 0);
    ~confirmbuild();

private slots:
    void on_build_yes_clicked();

private:
    Ui::confirmbuild *ui;
};

#endif // CONFIRMBUILD_H
