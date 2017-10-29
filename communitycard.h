#ifndef COMMUNITYCARD_H
#define COMMUNITYCARD_H

#include <QDialog>

namespace Ui {
class communitycard;
}

class communitycard : public QDialog
{
    Q_OBJECT

public:
    explicit communitycard(QWidget *parent = 0);
    ~communitycard();

private:
    Ui::communitycard *ui;
};

#endif // COMMUNITYCARD_H
