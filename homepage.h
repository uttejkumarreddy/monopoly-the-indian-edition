#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

namespace Ui {
class HomePage;
}

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = 0);
    ~HomePage();

private slots:
    void on_NewGame_clicked();

    void on_HowToPlay_clicked();

    void on_Credits_clicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
