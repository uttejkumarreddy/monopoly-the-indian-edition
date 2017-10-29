#ifndef GAMEDATA_H
#define GAMEDATA_H
#include "QString"

class gamedata
{
    int undermortgage[30];
    int playersnumber;
    int current_player;
    QString cardnames[72];
    int bankrupts[6];
    int taken_positions[32];
    int playersplaying;

public:
    gamedata();
    int get_playersnumber();
    int currently_playing();
    void put_playersnumber(int);
    QString card_name(int);
    void card_functions(int);
    int positions_owned(int);
    void increment_current_player();
    void update_undermortgage(int);
    int get_undermortgage(int);
    void remove_undermortgage(int);
    void add_bankrupt(int);
    void update_playersplaying(int);
    int get_playersplaying();
};

 extern gamedata opdata;

 extern int calltomycards;

 extern int bankrupt_to;

#endif // GAMEDATA_H
