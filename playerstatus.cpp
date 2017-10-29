#include "playerstatus.h"
#include "ui_playerstatus.h"
#include "data.h"
#include "gamedata.h"
#include "mainboard.h"
#include "cards_details.h"

playerstatus::playerstatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playerstatus)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->playerstatus_money->setNum(gamers[opdata.currently_playing()].get_money());
    ui->playerstatus_position->setText(opdata.card_name(gamers[opdata.currently_playing()].get_position()));
    ui->playerstatus_jailfreecards->setNum(gamers[opdata.currently_playing()].get_jailfreecards());
}

playerstatus::~playerstatus()
{
    delete ui;
}

void playerstatus::on_pushButton_clicked()
{
    opdata.increment_current_player();
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
