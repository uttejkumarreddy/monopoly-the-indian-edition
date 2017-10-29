#include "tradepreliminaries.h"
#include "ui_tradepreliminaries.h"
#include "data.h"
#include "gamedata.h"
#include "QMessageBox"
#include "traderprelims2.h"
#include "mainboard.h"
#include "lowoncash.h"
#include "rolled_occ_deficit.h"

tradepreliminaries::tradepreliminaries(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tradepreliminaries)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->trader->setText(gamers[opdata.currently_playing()].get_playername());
    ui->player1->setText(gamers[0].get_playername());
    ui->player2->setText(gamers[1].get_playername());
    ui->player3->setText(gamers[2].get_playername());
    ui->player4->setText(gamers[3].get_playername());
    ui->player5->setText(gamers[4].get_playername());
    ui->player5->setText(gamers[5].get_playername());
}


tradepreliminaries::~tradepreliminaries()
{
    delete ui;
}

void tradepreliminaries::on_pushButton_2_clicked()
{
    if(gobackto == 8)
    {
        rolled_occ_deficit nocash;
        nocash.setModal(true);
        hide();
        nocash.exec();
        return;
    }

    if(gobackto == 3)
    {
        lowoncash cashdeficit;
        cashdeficit.setModal(true);
        hide();
        cashdeficit.exec();
        return;
    }

    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}

void tradepreliminaries::on_pushButton_clicked()
{
    int tradee_number = -1;
    tradee_player = -1;
    QString tradee_name = ui->tradee->text();

    if(tradee_name == gamers[opdata.currently_playing()].get_playername())
        QMessageBox::information(this, "Error", "You can't trade with yourself");
    else
    {
    for(int count = 0; count < opdata.get_playersnumber() ; count++)
    {
        if(tradee_name == gamers[count].get_playername())
        {
            tradee_number = count;
            break;
        }
    }
    if( tradee_number == -1)
        QMessageBox::information(this, "ERROR", "No such player exists");
    else
        tradee_player = tradee_number;
    }
    if(tradee_player == -1)
        QMessageBox::information(this,"Error","Enter valid player name to trade with");
    else
    {
    traderprelims2 confirmtrade;
    confirmtrade.setModal(true);
    hide();
    confirmtrade.exec();
    }
}
