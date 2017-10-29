#include "specialcards.h"
#include "ui_specialcards.h"
#include "mainboard.h"
#include "gamedata.h"
#include "data.h"
#include "mainboard.h"
#include "cards_details.h"
#include "QPixmap"
#include "playerstatus.h"
#include "rolled_occ_deficit.h"
#include "QMessageBox"

SpecialCards::SpecialCards(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpecialCards)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    int widthpic,heightpic;

    ui->specialcard_dice1->setNum(die1);
    ui->specialcard_dice2->setNum(die2);

    switch(callingspecialcard)
    {
    case 40:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic40.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 41:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic41.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 42:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic42.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 43:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic43.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 44:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic44.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 45:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic45.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 46:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic46.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 47:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic47.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 48:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic48.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 49:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic49.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 50:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic50.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 51:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic51.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 52:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic52.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 53:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic53.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 54:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic54.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 55:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic55.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 56:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic56.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 57:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic57.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 58:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic58.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 59:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic59.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 60:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic60.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 61:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic61.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 62:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic62.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 63:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic63.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 64:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic64.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 65:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic65.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 66:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic66.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 67:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic67.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 68:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic68.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 69:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic69.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 70:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic70.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 71:
    {
        QPixmap pix(":/ChanceandCommunity/ChanceandCommunity/pic71.jpg");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 4:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD4.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 38:
    {
        QPixmap pix(":/CardsPictures/CardsPictures/CARD38.png");
        widthpic = ui->specialcard_pic->width();
        heightpic = ui->specialcard_pic->height();
        ui->specialcard_pic->setPixmap(pix.scaled(widthpic,heightpic,Qt::KeepAspectRatio));
        break;
    }
    case 30:
    {
        ui->specialcard_pic->setText("You landed on GO TO JAIL! You are now in jail.");
        break;
    }
    default:
        ui->specialcard_pic->setText("NO IMAGE AVAILABLE");
        break;
    }
}

SpecialCards::~SpecialCards()
{
    delete ui;
}

void SpecialCards::on_specialcard_OK_clicked()
{
    if(callingspecialcard > 39 && callingspecialcard < 56)
    {
        chestchance.community_chest(callingspecialcard);
        playerstatus statuswindow;
        statuswindow.setModal(true);
        hide();
        statuswindow.exec();
    }
    else if(callingspecialcard > 55 && callingspecialcard < 72)
    {
        chestchance.chance(callingspecialcard);
        playerstatus statuswindow;
        statuswindow.setModal(true);
        hide();
        statuswindow.exec();
    }
    else if(callingspecialcard == 4)
    {
        if(gamers[opdata.currently_playing()].get_money() < 200000)
        {
            rolled_occ_deficit deficit;
            deficit.setModal(true);
            hide();
            deficit.exec();
        }
        else
        {
            gamers[opdata.currently_playing()].subtract_money(200000);
            playerstatus statuswindow;
            statuswindow.setModal(true);
            hide();
            statuswindow.exec();
        }
    }
    else if(callingspecialcard == 38)
    {
        if(gamers[opdata.currently_playing()].get_money() < 100000)
        {
            rolled_occ_deficit deficit;
            deficit.setModal(true);
            hide();
            deficit.exec();
        }
        else
        {
            gamers[opdata.currently_playing()].subtract_money(100000);
            playerstatus statuswindow;
            statuswindow.setModal(true);
            hide();
            statuswindow.exec();
        }
    }
    else if(callingspecialcard == 30)
    {
        QMessageBox::information(this,"Jail Options","In jail: You can buy your way out by throwing same number on both dice or by paying 10000/-");
        opdata.increment_current_player();
        MainBoard board;
        board.setModal(true);
        hide();
        board.exec();
    }

}
