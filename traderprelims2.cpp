#include "traderprelims2.h"
#include "ui_traderprelims2.h"
#include "data.h"
#include "mainboard.h"
#include "tradingoptions.h"
#include "lowoncash.h"
#include "rolled_occ_deficit.h"

traderprelims2::traderprelims2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traderprelims2)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->the_tradee->setText(gamers[tradee_player].get_playername());
}

traderprelims2::~traderprelims2()
{
    delete ui;
}

void traderprelims2::on_nototrade_clicked()
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

void traderprelims2::on_yestotrade_clicked()
{
    tradingoptions gotrade;
    gotrade.setModal(true);
    hide();
    gotrade.exec();
}
