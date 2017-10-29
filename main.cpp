#include "homepage.h"
#include <QApplication>
#include "numberintake.h"
#include "data.h"
#include "gamedata.h"
#include "cards_details.h"

pdata gamers[6];
gamedata opdata;
int die1;
int die2;

int callingspecialcard;

int used_communitycards[16];
int used_chancecards[16];

int tradee_player = -1;

int calltomycards = -1;

int gobackto = -1;

int bankrupt_to = -1;

cards_information cardsinfo[40];
cards_information chestchance;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomePage w;
    w.show();

    return a.exec();
}
