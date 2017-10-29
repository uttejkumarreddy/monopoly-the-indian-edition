#include "numberintake.h"
#include "ui_numberintake.h"
#include "players2.h"
#include "players3.h"
#include "players4.h"
#include "players5.h"
#include "players6.h"
#include "gamedata.h"
#include "QMessageBox"

NumberIntake::NumberIntake(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberIntake)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

NumberIntake::~NumberIntake()
{
    delete ui;
}

void NumberIntake::on_numberOK_clicked()
{
    if(ui->player2->isChecked())
   {
        opdata.put_playersnumber(2);
        opdata.update_playersplaying(2);
        Players2 play2;
        play2.setModal(true);
        hide();
        play2.exec();
    }
    if(ui->player3->isChecked())
    {
        opdata.put_playersnumber(3);
        opdata.update_playersplaying(3);
        players3 play3;
        play3.setModal(true);
        hide();
        play3.exec();
    }
    if(ui->player4->isChecked())
    {
        opdata.put_playersnumber(4);
        opdata.update_playersplaying(4);
        players4 play4;
        play4.setModal(true);
        hide();
        play4.exec();
    }
    if(ui->player5->isChecked())
    {
        opdata.put_playersnumber(5);
        opdata.update_playersplaying(5);
        players5 play5;
        play5.setModal(true);
        hide();
        play5.exec();
    }
    if(ui->player6->isChecked())
    {
        opdata.put_playersnumber(6);
        opdata.update_playersplaying(6);
        players6 play6;
        play6.setModal(true);
        hide();
        play6.exec();
    }

}
