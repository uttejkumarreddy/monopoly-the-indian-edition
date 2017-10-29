#include "confirmpurchase.h"
#include "ui_confirmpurchase.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"
#include "mainboard.h"

confirmpurchase::confirmpurchase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirmpurchase)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    int pos = gamers[opdata.currently_playing()].get_position();
    ui->purchased_place->setText(opdata.card_name(pos));
    ui->purchase_cost->setNum(cardsinfo[pos].get_price());
    ui->moneyremaining->setNum(gamers[opdata.currently_playing()].get_money());
    opdata.increment_current_player();
}
confirmpurchase::~confirmpurchase()
{
    delete ui;
}

void confirmpurchase::on_pushButton_clicked()
{
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
