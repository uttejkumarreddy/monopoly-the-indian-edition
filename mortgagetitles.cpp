#include "mortgagetitles.h"
#include "ui_mortgagetitles.h"
#include "mainboard.h"
#include "gamedata.h"
#include "data.h"
#include "cards_details.h"
#include "QMessageBox"
#include "rolled_occ_deficit.h"

mortgagetitles::mortgagetitles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mortgagetitles)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

mortgagetitles::~mortgagetitles()
{
    delete ui;
}

//go to mainboard
void mortgagetitles::on_pushButton_2_clicked()
{
    if(gobackto == 9)
    {
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
    }

    if(gobackto == 8)
    {
        rolled_occ_deficit nocashtopayrent;
        nocashtopayrent.setModal(true);
        hide();
        nocashtopayrent.exec();
    }

}

//mortgaging cards
void mortgagetitles::on_pushButton_clicked()
{
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
        default:
            break;
        }
    }

    int trader_trading[gamers[opdata.currently_playing()].get_possessionnumber()];
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

    for(int count = 0; count < trader_ticked; count++)
    {
        int position = gamers[opdata.currently_playing()].get_position();
        int mortgagemoney = cardsinfo[position].get_mortgage();
        cardsinfo[position].update_mortgagestatus(opdata.currently_playing());
        gamers[opdata.currently_playing()].add_money(mortgagemoney);
        QMessageBox::information(this,"Status","Mortgage Successful!");
    }
}
