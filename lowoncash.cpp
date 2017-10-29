#include "lowoncash.h"
#include "ui_lowoncash.h"
#include "tradepreliminaries.h"
#include "data.h"
#include "mortgagetitles.h"

lowoncash::lowoncash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lowoncash)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

lowoncash::~lowoncash()
{
    delete ui;
}

//pushbutton is mortgage
//pushbutton 2 is declare bankruptcy
//pushbutton 3 is trading options

void lowoncash::on_pushButton_3_clicked()
{
    gobackto = 3;

    tradepreliminaries prelims;
    prelims.setModal(true);
    hide();
    prelims.exec();
}

void lowoncash::on_pushButton_clicked()
{
    mortgagetitles gotobank;
    gotobank.setModal(true);
    hide();
    gotobank.exec();
}
