#include "homepage.h"
#include "ui_homepage.h"
#include "numberintake.h"
#include "howtoplay.h"
#include "credits.h"

HomePage::HomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_NewGame_clicked()
{
    NumberIntake nointake;
    nointake.setModal(true);
    hide();
    nointake.exec();
}

void HomePage::on_HowToPlay_clicked()
{
    howtoplay how;
    how.setModal(true);
    how.exec();
}

void HomePage::on_Credits_clicked()
{
    credits who;
    who.setModal(true);
    who.exec();
}
