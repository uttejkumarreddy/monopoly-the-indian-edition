#include "players4.h"
#include "ui_players4.h"
#include "mainboard.h"
#include "data.h"
#include "gamedata.h"

players4::players4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::players4)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

players4::~players4()
{
    delete ui;
}

void players4::on_four_OK_clicked()
{
    gamers[0].insert_name(ui->four_name1->text());
    gamers[1].insert_name(ui->four_name2->text());
    gamers[2].insert_name(ui->four_name3->text());
    gamers[3].insert_name(ui->four_name4->text());
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
