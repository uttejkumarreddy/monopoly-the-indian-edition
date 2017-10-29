#include "confirmbankruptcy.h"
#include "ui_confirmbankruptcy.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"
#include "mainboard.h"
#include "QMessageBox"
#include "rolled_occ_deficit.h"

confirmbankruptcy::confirmbankruptcy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmbankruptcy)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

confirmbankruptcy::~confirmbankruptcy()
{
    delete ui;
}

void confirmbankruptcy::on_yestobankruptcy_clicked()
{

    gamers[opdata.currently_playing()].update_bankruptstatus(1);
    if(bankrupt_to == 0)
    {
        int ihave;
        int numberofcards = gamers[opdata.currently_playing()].get_possessionnumber();
        for( int count = 0; count < numberofcards; count++)
        {
            ihave = gamers[opdata.currently_playing()].get_possessions(count);
            cardsinfo[ihave].update_possession(-1);
        }
        opdata.increment_current_player();
        QMessageBox::information(this,"Bankrupted","The cards and money of the player has been successfully returned to The Bank");
        opdata.update_playersplaying(-1);
        MainBoard board;
        board.setModal(true);
        hide();
        board.exec();
    }
    else
    {
        int ihave;
        int transfer_number = gamers[opdata.currently_playing()].get_possessionnumber();
        for( int count = 0; count < transfer_number; count++)
        {
            ihave = gamers[opdata.currently_playing()].get_possessions(count);
            gamers[bankrupt_to].add_possessions(ihave);
            gamers[opdata.currently_playing()].remove_possessions(ihave);
            cardsinfo[ihave].update_possession(bankrupt_to);
        }
        gamers[bankrupt_to].add_money(gamers[opdata.currently_playing()].get_money());
        QMessageBox::information(this,"Bankrupted","The cards and money of the player have been transferred");
        opdata.increment_current_player();
        opdata.update_playersplaying(-1);
        MainBoard board;
        board.setModal(true);
        hide();
        board.exec();
    }
}

void confirmbankruptcy::on_notobankruptcy_clicked()
{
    if(gobackto == 8)
    {
        rolled_occ_deficit nocash;
        nocash.setModal(true);
        hide();
        nocash.exec();
        return;
    }
    if(gobackto == 9)
    {
        MainBoard board;
        board.setModal(true);
        hide();
        board.exec();
    }
}
