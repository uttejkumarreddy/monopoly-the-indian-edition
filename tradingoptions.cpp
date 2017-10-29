#include "tradingoptions.h"
#include "ui_tradingoptions.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"
#include "mainboard.h"
#include "QMessageBox"
#include "lowoncash.h"
#include "rolled_occ_deficit.h"

tradingoptions::tradingoptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tradingoptions)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->trader_name->setText(gamers[opdata.currently_playing()].get_playername());
    ui->tradee_name->setText(gamers[tradee_player].get_playername());
    int have_position;
    for(int count = 0; count < gamers[opdata.currently_playing()].get_possessionnumber(); count++)
    {
        have_position = gamers[opdata.currently_playing()].get_possessions(count);
        switch(have_position)
        {
        case 1:
        {
            ui->trader_1->setText(opdata.card_name(have_position));
            break;
        }
        case 3:
        {
            ui->trader_2->setText(opdata.card_name(have_position));
            break;
        }
        case 5:
        {
            ui->trader_3->setText(opdata.card_name(have_position));
            break;
        }
        case 6:
        {
            ui->trader_4->setText(opdata.card_name(have_position));
            break;
        }
        case 8:
        {
            ui->trader_5->setText(opdata.card_name(have_position));
            break;
        }
        case 9:
        {
            ui->trader_6->setText(opdata.card_name(have_position));
            break;
        }
        case 11:
        {
            ui->trader_7->setText(opdata.card_name(have_position));
            break;
        }
        case 12:
        {
            ui->trader_8->setText(opdata.card_name(have_position));
            break;
        }
        case 13:
        {
            ui->trader_9->setText(opdata.card_name(have_position));
            break;
        }
        case 14:
        {
            ui->trader_10->setText(opdata.card_name(have_position));
            break;
        }
        case 15:
        {
            ui->trader_11->setText(opdata.card_name(have_position));
            break;
        }
        case 16:
        {
            ui->trader_12->setText(opdata.card_name(have_position));
            break;
        }
        case 18:
        {
            ui->trader_13->setText(opdata.card_name(have_position));
            break;
        }
        case 19:
        {
            ui->trader_14->setText(opdata.card_name(have_position));
            break;
        }
        case 21:
        {
            ui->trader_15->setText(opdata.card_name(have_position));
            break;
        }
        case 23:
        {
            ui->trader_16->setText(opdata.card_name(have_position));
            break;
        }
        case 24:
        {
            ui->trader_17->setText(opdata.card_name(have_position));
            break;
        }
        case 25:
        {
            ui->trader_18->setText(opdata.card_name(have_position));
            break;
        }
        case 26:
        {
            ui->trader_19->setText(opdata.card_name(have_position));
            break;
        }
        case 27:
        {
            ui->trader_20->setText(opdata.card_name(have_position));
            break;
        }
        case 28:
        {
            ui->trader_21->setText(opdata.card_name(have_position));
            break;
        }
        case 29:
        {
            ui->trader_22->setText(opdata.card_name(have_position));
            break;
        }
        case 31:
        {
            ui->trader_23->setText(opdata.card_name(have_position));
            break;
        }
        case 32:
        {
            ui->trader_24->setText(opdata.card_name(have_position));
            break;
        }
        case 34:
        {
            ui->trader_25->setText(opdata.card_name(have_position));
            break;
        }
        case 35:
        {
            ui->trader_26->setText(opdata.card_name(have_position));
            break;
        }
        case 37:
        {
            ui->trader_27->setText(opdata.card_name(have_position));
            break;
        }
        case 39:
        {
            ui->trader_28->setText(opdata.card_name(have_position));
            break;
        }
        }
    }
    for(int count = 0; count < gamers[tradee_player].get_possessionnumber(); count++)
    {
        have_position = gamers[tradee_player].get_possessions(count);
        switch(have_position)
        {
        case 1:
        {
            ui->tradee_1->setText(opdata.card_name(have_position));
            break;
        }
        case 3:
        {
            ui->tradee_2->setText(opdata.card_name(have_position));
            break;
        }
        case 5:
        {
            ui->tradee_3->setText(opdata.card_name(have_position));
            break;
        }
        case 6:
        {
            ui->tradee_4->setText(opdata.card_name(have_position));
            break;
        }
        case 8:
        {
            ui->tradee_5->setText(opdata.card_name(have_position));
            break;
        }
        case 9:
        {
            ui->tradee_6->setText(opdata.card_name(have_position));
            break;
        }
        case 11:
        {
            ui->tradee_7->setText(opdata.card_name(have_position));
            break;
        }
        case 12:
        {
            ui->tradee_8->setText(opdata.card_name(have_position));
            break;
        }
        case 13:
        {
            ui->tradee_9->setText(opdata.card_name(have_position));
            break;
        }
        case 14:
        {
            ui->tradee_10->setText(opdata.card_name(have_position));
            break;
        }
        case 15:
        {
            ui->tradee_11->setText(opdata.card_name(have_position));
            break;
        }
        case 16:
        {
            ui->tradee_12->setText(opdata.card_name(have_position));
            break;
        }
        case 18:
        {
            ui->tradee_13->setText(opdata.card_name(have_position));
            break;
        }
        case 19:
        {
            ui->tradee_14->setText(opdata.card_name(have_position));
            break;
        }
        case 21:
        {
            ui->tradee_15->setText(opdata.card_name(have_position));
            break;
        }
        case 23:
        {
            ui->tradee_16->setText(opdata.card_name(have_position));
            break;
        }
        case 24:
        {
            ui->tradee_17->setText(opdata.card_name(have_position));
            break;
        }
        case 25:
        {
            ui->tradee_18->setText(opdata.card_name(have_position));
            break;
        }
        case 26:
        {
            ui->tradee_19->setText(opdata.card_name(have_position));
            break;
        }
        case 27:
        {
            ui->tradee_20->setText(opdata.card_name(have_position));
            break;
        }
        case 28:
        {
            ui->tradee_21->setText(opdata.card_name(have_position));
            break;
        }
        case 29:
        {
            ui->tradee_22->setText(opdata.card_name(have_position));
            break;
        }
        case 31:
        {
            ui->tradee_23->setText(opdata.card_name(have_position));
            break;
        }
        case 32:
        {
            ui->tradee_24->setText(opdata.card_name(have_position));
            break;
        }
        case 34:
        {
            ui->tradee_25->setText(opdata.card_name(have_position));
            break;
        }
        case 35:
        {
            ui->tradee_26->setText(opdata.card_name(have_position));
            break;
        }
        case 37:
        {
            ui->tradee_27->setText(opdata.card_name(have_position));
            break;
        }
        case 39:
        {
            ui->tradee_28->setText(opdata.card_name(have_position));
            break;
        }
        }
    }

}

tradingoptions::~tradingoptions()
{
    delete ui;
}

void tradingoptions::on_tradecancel_clicked()
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

void tradingoptions::on_tradeOK_clicked()
{
    int trader_cash = ui->trader_cash_spin->value();
    int tradee_cash = ui->tradee_cash_spin->value();

    if(trader_cash > gamers[opdata.currently_playing()].get_money())
    {
        QMessageBox::information(this,"Error","Trader: You do not have the specified money");
        tradingoptions retrade;
        retrade.setModal(true);
        hide();
        retrade.exec();
    }

    if(tradee_cash > gamers[tradee_player].get_money())
    {
        QMessageBox::information(this,"Error","Tradee: You do not have the specified money");
        tradingoptions retrade;
        retrade.setModal(true);
        hide();
        retrade.exec();
    }

    int trader_trading[gamers[opdata.currently_playing()].get_possessionnumber()];
    int tradee_trading[gamers[tradee_player].get_possessionnumber()];
    int trader_ticked = 0;

    for(int count = 0; count < 28; count++)
    {
        if(ui->trader_1->isChecked())
        {
            if(ui->trader_1->text() != "")
            {
                trader_trading[trader_ticked] = 1;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_2->isChecked())
        {
            if(ui->trader_2->text() != "")
            {
                trader_trading[trader_ticked] = 3;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_3->isChecked())
        {
            if(ui->trader_3->text() != "")
            {
                trader_trading[trader_ticked] = 5;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_4->isChecked())
        {
            if(ui->trader_4->text() != "")
            {
                trader_trading[trader_ticked] = 6;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_5->isChecked())
        {
            if(ui->trader_5->text() != "")
            {
                trader_trading[trader_ticked] = 8;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_6->isChecked())
        {
            if(ui->trader_6->text() != "")
            {
                trader_trading[trader_ticked] = 9;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_7->isChecked())
        {
            if(ui->trader_7->text() != "")
            {
                trader_trading[trader_ticked] = 11;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_8->isChecked())
        {
            if(ui->trader_8->text() != "")
            {
                trader_trading[trader_ticked] = 12;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_9->isChecked())
        {
            if(ui->trader_9->text() != "")
            {
                trader_trading[trader_ticked] = 13;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_10->isChecked())
        {
            if(ui->trader_10->text() != "")
            {
                trader_trading[trader_ticked] = 14;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_11->isChecked())
        {
            if(ui->trader_11->text() != "")
            {
                trader_trading[trader_ticked] = 15;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_12->isChecked())
        {
            if(ui->trader_12->text() != "")
            {
                trader_trading[trader_ticked] = 16;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_13->isChecked())
        {
            if(ui->trader_13->text() != "")
            {
                trader_trading[trader_ticked] = 18;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_14->isChecked())
        {
            if(ui->trader_14->text() != "")
            {
                trader_trading[trader_ticked] = 19;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_15->isChecked())
        {
            if(ui->trader_15->text() != "")
            {
                trader_trading[trader_ticked] = 21;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_16->isChecked())
        {
            if(ui->trader_16->text() != "")
            {
                trader_trading[trader_ticked] = 23;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_17->isChecked())
        {
            if(ui->trader_17->text() != "")
            {
                trader_trading[trader_ticked] = 24;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_18->isChecked())
        {
            if(ui->trader_18->text() != "")
            {
                trader_trading[trader_ticked] = 25;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_19->isChecked())
        {
            if(ui->trader_19->text() != "")
            {
                trader_trading[trader_ticked] = 26;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_20->isChecked())
        {
            if(ui->trader_20->text() != "")
            {
                trader_trading[trader_ticked] = 27;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_21->isChecked())
        {
            if(ui->trader_21->text() != "")
            {
                trader_trading[trader_ticked] = 28;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_22->isChecked())
        {
            if(ui->trader_22->text() != "")
            {
                trader_trading[trader_ticked] = 29;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_23->isChecked())
        {
            if(ui->trader_23->text() != "")
            {
                trader_trading[trader_ticked] = 31;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_24->isChecked())
        {
            if(ui->trader_24->text() != "")
            {
                trader_trading[trader_ticked] = 32;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_25->isChecked())
        {
            if(ui->trader_25->text() != "")
            {
                trader_trading[trader_ticked] = 34;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_26->isChecked())
        {
            if(ui->trader_26->text() != "")
            {
                trader_trading[trader_ticked] = 35;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_27->isChecked())
        {
            if(ui->trader_27->text() != "")
            {
                trader_trading[trader_ticked] = 37;
                trader_ticked++;
                break;
            }
        }
        if(ui->trader_28->isChecked())
        {
            if(ui->trader_28->text() != "")
            {
                trader_trading[trader_ticked] = 39;
                trader_ticked++;
                break;
            }
        }
    }

    int tradee_ticked = 0;

    for(int count = 0; count < 28; count++)
    {
        if(ui->tradee_1->isChecked())
        {
            if(ui->tradee_1->text() != "")
            {
                tradee_trading[tradee_ticked] = 1;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_2->isChecked())
        {
            if(ui->tradee_2->text() != "")
            {
                tradee_trading[tradee_ticked] = 3;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_3->isChecked())
        {
            if(ui->tradee_3->text() != "")
            {
                tradee_trading[tradee_ticked] = 5;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_4->isChecked())
        {
            if(ui->tradee_4->text() != "")
            {
                tradee_trading[tradee_ticked] = 6;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_5->isChecked())
        {
            if(ui->tradee_5->text() != "")
            {
                tradee_trading[tradee_ticked] = 8;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_6->isChecked())
        {
            if(ui->tradee_6->text() != "")
            {
                tradee_trading[tradee_ticked] = 9;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_7->isChecked())
        {
            if(ui->tradee_7->text() != "")
            {
                tradee_trading[tradee_ticked] = 11;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_8->isChecked())
        {
            if(ui->tradee_8->text() != "")
            {
                tradee_trading[tradee_ticked] = 12;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_9->isChecked())
        {
            if(ui->tradee_9->text() != "")
            {
                tradee_trading[tradee_ticked] = 13;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_10->isChecked())
        {
            if(ui->tradee_10->text() != "")
            {
                tradee_trading[tradee_ticked] = 14;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_11->isChecked())
        {
            if(ui->tradee_11->text() != "")
            {
                tradee_trading[tradee_ticked] = 15;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_12->isChecked())
        {
            if(ui->tradee_12->text() != "")
            {
                tradee_trading[tradee_ticked] = 16;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_13->isChecked())
        {
            if(ui->tradee_13->text() != "")
            {
                tradee_trading[tradee_ticked] = 18;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_14->isChecked())
        {
            if(ui->tradee_14->text() != "")
            {
                tradee_trading[tradee_ticked] = 19;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_15->isChecked())
        {
            if(ui->tradee_15->text() != "")
            {
                tradee_trading[tradee_ticked] = 21;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_16->isChecked())
        {
            if(ui->tradee_16->text() != "")
            {
                tradee_trading[tradee_ticked] = 23;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_17->isChecked())
        {
            if(ui->tradee_17->text() != "")
            {
                tradee_trading[tradee_ticked] = 24;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_18->isChecked())
        {
            if(ui->tradee_18->text() != "")
            {
                tradee_trading[tradee_ticked] = 25;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_19->isChecked())
        {
            if(ui->tradee_19->text() != "")
            {
                tradee_trading[tradee_ticked] = 26;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_20->isChecked())
        {
            if(ui->tradee_20->text() != "")
            {
                tradee_trading[tradee_ticked] = 27;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_21->isChecked())
        {
            if(ui->tradee_21->text() != "")
            {
                tradee_trading[tradee_ticked] = 28;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_22->isChecked())
        {
            if(ui->tradee_22->text() != "")
            {
                tradee_trading[tradee_ticked] = 29;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_23->isChecked())
        {
            if(ui->tradee_23->text() != "")
            {
                tradee_trading[tradee_ticked] = 31;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_24->isChecked())
        {
            if(ui->tradee_24->text() != "")
            {
                tradee_trading[tradee_ticked] = 32;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_25->isChecked())
        {
            if(ui->tradee_25->text() != "")
            {
                tradee_trading[tradee_ticked] = 34;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_26->isChecked())
        {
            if(ui->tradee_26->text() != "")
            {
                tradee_trading[tradee_ticked] = 35;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_27->isChecked())
        {
            if(ui->tradee_27->text() != "")
            {
                tradee_trading[tradee_ticked] = 37;
                tradee_ticked++;
                break;
            }
        }
        if(ui->tradee_28->isChecked())
        {
            if(ui->tradee_28->text() != "")
            {
                tradee_trading[tradee_ticked] = 39;
                tradee_ticked++;
                break;
            }
        }
    }

    for(int count = 0; count < trader_ticked; count++)
    {
        int remove_trader_add_tradee = trader_trading[count];
        gamers[opdata.currently_playing()].remove_possessions(remove_trader_add_tradee);
        gamers[tradee_player].add_possessions(remove_trader_add_tradee);
    }

    for(int count = 0; count < tradee_ticked; count++)
    {
        int remove_tradee_add_trader = tradee_trading[count];
        gamers[tradee_player].remove_possessions(remove_tradee_add_trader);
        gamers[opdata.currently_playing()].add_possessions(remove_tradee_add_trader);
    }

    gamers[opdata.currently_playing()].subtract_money(trader_cash);
    gamers[tradee_player].add_money(trader_cash);

    gamers[tradee_player].subtract_money(tradee_cash);
    gamers[opdata.currently_playing()].add_money(tradee_cash);

    QMessageBox::information(this,"Trade Success!","The Trade was successfully completed");

    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();

}

