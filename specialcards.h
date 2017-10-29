#ifndef SPECIALCARDS_H
#define SPECIALCARDS_H

#include <QDialog>

namespace Ui {
class SpecialCards;
}

class SpecialCards : public QDialog
{
    Q_OBJECT

public:
    explicit SpecialCards(QWidget *parent = 0);
    ~SpecialCards();

private slots:
    void on_specialcard_OK_clicked();

private:
    Ui::SpecialCards *ui;
};

#endif // SPECIALCARDS_H
