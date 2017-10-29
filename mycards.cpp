#include "mycards.h"
#include "ui_mycards.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"
#include "QPixmap"
#include "mainboard.h"
#include "tradingoptions.h"

mycards::mycards(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mycards)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    int count = 0;
    int cardnumber;
    int callingplayer;

    if(calltomycards == -1)
        callingplayer = opdata.currently_playing();
    else
        callingplayer = calltomycards;

    while(gamers[callingplayer].get_possessions(count) != 0)
    {
        cardnumber = gamers[callingplayer].get_possessions(count);
        switch(cardnumber)
        {
        case 1:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD1.jpg");
            ui->SHOW1->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 3:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD3.jpg");
            ui->SHOW3->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 5:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD5.png");
            ui->SHOW5->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 6:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD6.jpg");
            ui->SHOW6->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 8:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD8.jpg");
            ui->SHOW8->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 9:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD9.jpg");
            ui->SHOW9->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 11:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD11.jpg");
            ui->SHOW11->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 12:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD12.png");
            ui->SHOW12->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 13:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD13.jpg");
            ui->SHOW13->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 14:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD14.jpg");
            ui->SHOW14->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 15:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD15.png");
            ui->SHOW15->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 16:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD16.jpg");
            ui->SHOW16->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 18:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD18.jpg");
            ui->SHOW18->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 19:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD19.jpg");
            ui->SHOW19->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 21:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD21.jpg");
            ui->SHOW21->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 23:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD23.jpg");
            ui->SHOW23->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 24:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD24.jpg");
            ui->SHOW24->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 25:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD25.png");
            ui->SHOW25->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 26:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD26.jpg");
            ui->SHOW26->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 27:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD27.jpg");
            ui->SHOW27->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 28:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD28.png");
            ui->SHOW28->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 29:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD29.jpg");
            ui->SHOW29->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 31:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD31.jpg");
            ui->SHOW31->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 32:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD32.jpg");
            ui->SHOW32->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 34:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD34.jpg");
            ui->SHOW34->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 35:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD35.png");
            ui->SHOW35->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 37:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD37.jpg");
            ui->SHOW37->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        case 39:
        {
            QPixmap pic(":/CardsPictures/CardsPictures/CARD39.jpg");
            ui->SHOW39->setPixmap(pic.scaled(136,189,Qt::KeepAspectRatio));
            break;
        }
        }
        count++;
    }

}

mycards::~mycards()
{
    delete ui;
}

void mycards::on_pushButton_clicked()
{
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
