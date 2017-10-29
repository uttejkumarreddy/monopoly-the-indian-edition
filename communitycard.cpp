#include "communitycard.h"
#include "ui_communitycard.h"

communitycard::communitycard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::communitycard)
{
    ui->setupUi(this);
}

communitycard::~communitycard()
{
    delete ui;
}
