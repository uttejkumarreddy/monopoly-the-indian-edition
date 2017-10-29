#include "howtoplay.h"
#include "ui_howtoplay.h"

howtoplay::howtoplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::howtoplay)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

howtoplay::~howtoplay()
{
    delete ui;
}

void howtoplay::on_pushButton_clicked()
{
    hide();
}
