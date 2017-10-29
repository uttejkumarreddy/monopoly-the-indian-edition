#include "messagewindows.h"
#include "ui_messagewindows.h"
#include "data.h"
#include "gamedata.h"
#include "mainboard.h"

Messagewindows::Messagewindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Messagewindows)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    ui->message_die1->setNum(die1);
    ui->message_die2->setNum(die2);
    if(callingspecialcard == 10)
        ui->Message_text->setText("You are Just Visiting the Jail");
    if(callingspecialcard == 20)
        ui->Message_text->setText("You are in Free Parking");
    if(callingspecialcard == 0)
        ui->Message_text->setText("You have landed on GO. 200000 added.");
}

Messagewindows::~Messagewindows()
{
    delete ui;
}

void Messagewindows::on_message_ok_clicked()
{
    opdata.increment_current_player();
    MainBoard board;
    board.setModal(true);
    hide();
    board.exec();
}
