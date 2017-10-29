#include "credits.h"
#include "ui_credits.h"

credits::credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

credits::~credits()
{
    delete ui;
}

void credits::on_pushButton_clicked()
{
    hide();
}
