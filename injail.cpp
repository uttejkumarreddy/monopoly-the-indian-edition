#include "injail.h"
#include "ui_injail.h"
#include "data.h"
#include "gamedata.h"
#include "mainboard.h"
#include "QMessageBox"
#include "ctime"
#include "cards_details.h"
#include "rolled.h"
#include "rolled_occupied.h"
#include "rolled_occ_deficit.h"
#include "rolled_own.h"
#include "lowoncash.h"

#define Die_HIGH 6
#define DIE_LOW 1

injail::injail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::injail)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

injail::~injail()
{
    delete ui;
}

void injail::on_pushButton_clicked()
{
    time_t seconds;
    time(&seconds);
    srand((unsigned int)seconds);
    die1 = rand() % (Die_HIGH - DIE_LOW + 1) + DIE_LOW;
    die2 = rand() % (Die_HIGH - DIE_LOW + 1) + DIE_LOW;
    if(die1 == die2)
    {
        QMessageBox::information(this,"Lucky you!","You rolled the same number on both dice! You are free!");
        gamers[opdata.currently_playing()].update_position(die1 + die2);
        int movedposition = gamers[opdata.currently_playing()].get_position();
        if(cardsinfo[movedposition].status() == -1)
        {
            rolled freespace;
            freespace.setModal(true);
            hide();
            freespace.exec();
        }
        else if(opdata.currently_playing() == cardsinfo[movedposition].status())
            {
                rolled_own ownspace;
                ownspace.setModal(true);
                hide();
                ownspace.exec();
            }
        else
        {
            if(gamers[opdata.currently_playing()].get_money() < cardsinfo[movedposition].get_rent())
            {
                rolled_occ_deficit deficitmoney;
                deficitmoney.setModal(true);
                hide();
                deficitmoney.exec();
            }
            else
            {
                rolled_occupied occupiedspace;
                occupiedspace.setModal(true);
                hide();
                occupiedspace.exec();
            }
        }

    }
    else
    {
        gamers[opdata.currently_playing()].update_jail_tries();
        if(gamers[opdata.currently_playing()].get_jail_tries() == 1)
        {
            QMessageBox::information(this,"Oops!","Better luck next time. You've got 2 more tries");
            opdata.increment_current_player();
            MainBoard board;
            board.setModal(true);
            hide();
            board.exec();
        }
        if(gamers[opdata.currently_playing()].get_jail_tries() == 2)
        {
            QMessageBox::information(this,"Oops","Better luck next time. You've got 1 more try");
            opdata.increment_current_player();
            MainBoard board;
            board.setModal(true);
            hide();
            board.exec();
        }
        if(gamers[opdata.currently_playing()].get_jail_tries() == 3)
        {
            QMessageBox::information(this,"Oops","There's no next time. You're paying 10000/-");
            if(gamers[opdata.currently_playing()].get_money() < 10000)
            {
                QMessageBox::information(this,"Low on Cash","You don't have money to get out");\
                lowoncash moneydeficit;
                moneydeficit.setModal(true);
                hide();
                moneydeficit.exec();
            }
            else
            {
                gamers[opdata.currently_playing()].subtract_money(10000);
                gamers[opdata.currently_playing()].updata_jailstatus(0);
                QMessageBox::information(this,"Money paid","You're free now. Throw the dice again");
                MainBoard board;
                board.setModal(true);
                hide();
                board.exec();
            }
        }
    }
}

void injail::on_pushButton_2_clicked()
{
    if(gamers[opdata.currently_playing()].get_money() < 10000)
    {
         QMessageBox::information(this,"Low on Cash","You don't have money to get out");
         lowoncash moneydeficit;
         moneydeficit.setModal(true);
         hide();
         moneydeficit.exec();
    }
    else
    {
        gamers[opdata.currently_playing()].subtract_money(10000);
        gamers[opdata.currently_playing()].updata_jailstatus(0);
        QMessageBox::information(this,"Money paid","You're free now. Throw the dice again");
        MainBoard board;
        board.setModal(true);
        hide();
        board.exec();
    }
}
