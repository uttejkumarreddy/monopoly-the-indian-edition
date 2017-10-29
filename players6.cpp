#include "players6.h"
#include "ui_players6.h"
#include "mainboard.h"
#include "data.h"
#include "gamedata.h"

players6::players6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::players6)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

players6::~players6()
{
    delete ui;
}

void players6::on_six_OK_clicked()
{
    gamers[0].insert_name(ui->six_name1->text());
    gamers[1].insert_name(ui->six_name2->text());
    gamers[2].insert_name(ui->six_name3->text());
    gamers[3].insert_name(ui->six_name4->text());
    gamers[4].insert_name(ui->six_name5->text());
    gamers[5].insert_name(ui->six_name6->text());
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
