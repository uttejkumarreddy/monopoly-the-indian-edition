#include "players2.h"
#include "ui_players2.h"
#include "mainboard.h"
#include "data.h"
#include "gamedata.h"

Players2::Players2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Players2)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

Players2::~Players2()
{
    delete ui;
}

void Players2::on_two_OK_clicked()
{
    gamers[0].insert_name(ui->two_name1->text());
    gamers[1].insert_name(ui->two_name2->text());
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
