#include "players3.h"
#include "ui_players3.h"
#include "mainboard.h"
#include "data.h"
#include "gamedata.h"

players3::players3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::players3)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

players3::~players3()
{
    delete ui;
}

void players3::on_three_OK_clicked()
{
    gamers[0].insert_name(ui->three_name1->text());
    gamers[1].insert_name(ui->three_name2->text());
    gamers[2].insert_name(ui->three_name3->text());
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
