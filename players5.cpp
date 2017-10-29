#include "players5.h"
#include "ui_players5.h"
#include "mainboard.h"
#include "data.h"
#include "gamedata.h"

players5::players5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::players5)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

players5::~players5()
{
    delete ui;
}

void players5::on_five_OK_clicked()
{
    gamers[0].insert_name(ui->five_name1->text());
    gamers[1].insert_name(ui->five_name2->text());
    gamers[2].insert_name(ui->five_name3->text());
    gamers[3].insert_name(ui->five_name4->text());
    gamers[4].insert_name(ui->five_name5->text());
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
