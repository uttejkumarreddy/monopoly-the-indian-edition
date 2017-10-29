#include "mainboard.h"
#include "ui_mainboard.h"
#include "data.h"
#include "gamedata.h"
#include "QLabel"
#include "cstdlib"
#include "time.h"
#include "rolled.h"
#include "rolled_own.h"
#include "rolled_occupied.h"
#include "rolled_occ_deficit.h"
#include "QMessageBox"
#include "cards_details.h"
#include "specialcards.h"
#include "messagewindows.h"
#include "QPixmap"
#include "mycards.h"
#include "tradepreliminaries.h"
#include "injail.h"
#include "confirmbankruptcy.h"
#include "mortgagetitles.h"

#define Die_HIGH 6
#define DIE_LOW 1
#define Community_HIGH 55
#define Community_LOW 40
#define Chance_HIGH 71
#define Chance_LOW 56

MainBoard::MainBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainBoard)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    if(opdata.get_playersplaying() == 1)
    {
        QMessageBox::information(this,"CONGRATULATIONS!!!","You WIN!");
        exit(1);
    }

    ui->board_pname->setText(gamers[opdata.currently_playing()].get_playername());
    ui->board_at->setText(opdata.card_name(gamers[opdata.currently_playing()].get_position()));
    ui->board_wallet->setNum(gamers[opdata.currently_playing()].get_money());
    int widthofboard,heightofboard;
    QPixmap pix(":/CardsPictures/CardsPictures/Board.png");
    widthofboard = ui->monopolyboard->width();
    heightofboard = ui->monopolyboard->height();
    ui->monopolyboard->setPixmap(pix.scaled(widthofboard,heightofboard,Qt::KeepAspectRatio));
}

MainBoard::~MainBoard()
{
    delete ui;
}

void MainBoard::on_board_roll_clicked()
{
    for(int settingdata = 0; settingdata < 40; settingdata++)
        cardsinfo[settingdata].set_data(settingdata);

    if(gamers[opdata.currently_playing()].get_jailstatus() == 1)
    {
        injail jailwindow;
        jailwindow.setModal(true);
        hide();
        jailwindow.exec();
    }

    int newposition;
    int to_move_by;
    //int flag_owned = 0;
    int count;
    time_t seconds;
    time(&seconds);
    srand((unsigned int)seconds);
    die1 = rand() % (Die_HIGH - DIE_LOW + 1) + DIE_LOW;
    die2 = rand() % (Die_HIGH - DIE_LOW + 1) + DIE_LOW;
    to_move_by = die1 + die2;
    int newcommunity;
    int newchance;

    int currentposition = gamers[opdata.currently_playing()].get_position();
    newposition = gamers[opdata.currently_playing()].get_position()+to_move_by;
    gamers[opdata.currently_playing()].update_position(newposition);
    int movedposition = gamers[opdata.currently_playing()].get_position();

    if( currentposition <=39 && newposition >=40)
    {
        gamers[opdata.currently_playing()].add_money(200000);
    }

    //if(gamers[opdata.currently_playing()].get_position() > 0 && gamers[opdata.currently_playing()].get_position() < 40 && newposition > 0)
        //gamers[opdata.currently_playing()].add_money(200000);

    if(movedposition == 2||movedposition == 17||movedposition ==33)
    {
        choosingChestcard:
        newcommunity = rand() % (Community_HIGH - Community_LOW + 1) + Community_LOW;
        for(count = 0; count < 16; count++)
        {
            if(used_communitycards[count] == newcommunity)\
                goto choosingChestcard;
        }
        for(count = 0; used_communitycards[count]!=0; count++)
        {
            if(count>16)
                break;
        }
        used_communitycards[count] = newcommunity;
        callingspecialcard = newcommunity;
        //chestchance.community_chest(newcommunity);
        SpecialCards special1;
        special1.setModal(true);
        hide();
        special1.exec();
    }
    else if(movedposition == 7||movedposition == 22||movedposition == 36)
    {
        choosingChancecard:
        newchance = rand() % (Chance_HIGH - Chance_LOW + 1) + Chance_LOW;
        for(count = 0; count < 16; count++)
        {
            if(used_chancecards[count] == newchance)
                goto choosingChancecard;
        }
        for(count = 0; used_chancecards[count]!=0; count++)
        {
            if(count > 16)
                break;
        }
        used_chancecards[count] = newchance;
        callingspecialcard = newchance;
        //chestchance.chance(newchance);
        SpecialCards special2;
        special2.setModal(true);
        hide();
        special2.exec();
    }
    else if(movedposition == 10 || movedposition ==20)
    {
        callingspecialcard = movedposition;
        Messagewindows message;
        message.setModal(true);
        hide();
        message.exec();
    }
    else if(movedposition == 4||movedposition == 38)
    {
        callingspecialcard = movedposition;
        SpecialCards special3;
        special3.setModal(true);
        hide();
        special3.exec();
    }
    else if(movedposition == 0)
    {
        callingspecialcard = movedposition;
        Messagewindows message2;
        message2.setModal(true);
        hide();
        message2.exec();
    }
    else if(movedposition == 30)
    {
        callingspecialcard = movedposition;
        gamers[opdata.currently_playing()].updata_jailstatus(1);
        gamers[opdata.currently_playing()].update_position(10);
        SpecialCards special4;
        special4.setModal(true);
        hide();
        special4.exec();
    }
    else
    {
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
}

void MainBoard::on_board_mycards_clicked()
{
    mycards cardsiown;
    cardsiown.setModal(true);
    hide();
    cardsiown.exec();
}

void MainBoard::on_board_trade_clicked()
{
    tradepreliminaries Trade;
    Trade.setModal(true);
    hide();
    Trade.exec();
}

void MainBoard::on_board_end_clicked()
{
    bankrupt_to = 0;
    gobackto = 9;

    confirmbankruptcy suicide;
    suicide.setModal(true);
    hide();
    suicide.exec();
}

void MainBoard::on_pushButton_clicked()
{
    gobackto = 9;

    mortgagetitles givetobank;
    givetobank.setModal(true);
    hide();
    givetobank.exec();

}
