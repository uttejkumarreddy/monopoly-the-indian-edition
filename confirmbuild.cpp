#include "confirmbuild.h"
#include "ui_confirmbuild.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"
#include "QMessageBox"
#include "mainboard.h"
#include "rolled_own.h"

confirmbuild::confirmbuild(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmbuild)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    if(cardsinfo[gamers[opdata.currently_playing()].get_position()].get_houses() < 3)
        ui->build_type->setText("HOUSE");
    else
        ui->build_type->setText("HOTEL");
    ui->costofhotel->setNum(cardsinfo[gamers[opdata.currently_playing()].get_position()].get_housecost());
    ui->mymoney->setNum(gamers[opdata.currently_playing()].get_money());
}

confirmbuild::~confirmbuild()
{
    delete ui;
}

void confirmbuild::on_build_yes_clicked()
{
    int house_cost = cardsinfo[gamers[opdata.currently_playing()].get_position()].get_housecost();
    int budget = gamers[opdata.currently_playing()].get_money();
    if(budget < house_cost)
    {
        QMessageBox::information(this,"Error","Insufficient funds");
        opdata.increment_current_player();
        hide();
        MainBoard board;
        board.setModal(true);
        board.exec();
    }
    else
    {
        gamers[opdata.currently_playing()].subtract_money(house_cost);
        if(cardsinfo[gamers[opdata.currently_playing()].get_position()].get_houses() < 3)
            gamers[opdata.currently_playing()].increment_house();
        else
            gamers[opdata.currently_playing()].increment_hotel();
        cardsinfo[gamers[opdata.currently_playing()].get_position()].increment_houses();
        rolled_own ownspace;
        ownspace.setModal(true);
        hide();
        ownspace.exec();
    }
}
