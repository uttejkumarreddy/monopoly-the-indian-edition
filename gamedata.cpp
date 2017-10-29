#include "gamedata.h"
#include "data.h"

gamedata::gamedata()
{
    playersnumber = 0;
    current_player = 0;
    taken_positions[32] = {0};
    undermortgage[30] = -1;
    playersplaying = 0;

    cardnames[0] = "GO";
    cardnames[1] = "VISAKHAPATNAM";
    cardnames[2] = "COMMUNITY CHEST";
    cardnames[3] = "DEHRADUN";
    cardnames[4] = "INCOME TAX";
    cardnames[5] = "KANPUR STATION";
    cardnames[6] = "SURAT";
    cardnames[7] = "CHANCE";
    cardnames[8] = "THIRUVANTHANAPURAM";
    cardnames[9] = "NASHIK";
    cardnames[10] = "JUST VISITING: JAIL";
    cardnames[11] = "MYSORE";
    cardnames[12] = "ELECTRIC COMPANY";
    cardnames[13] = "INDORE";
    cardnames[14] = "SHIMLA";
    cardnames[15] = "KANPUR CENTRAL";
    cardnames[16] = "COIMBATORE";
    cardnames[17] = "COMMUNITY CHEST";
    cardnames[18] = "NAGPUR";
    cardnames[19] = "PUNE";
    cardnames[20] = "FREE PARKING";
    cardnames[21] = "AHMEDABAD";
    cardnames[22] = "CHANCE";
    cardnames[23] = "MADHURAI";
    cardnames[24] = "CHANDIGARH";
    cardnames[25] = "NEW DELHI STATION";
    cardnames[26] = "GURGAON";
    cardnames[27] = "NOIDA";
    cardnames[28] = "WATER WORKS";
    cardnames[29] = "KOLKATA";
    cardnames[30] = "GO TO JAIL";
    cardnames[31] = "NEW DELHI";
    cardnames[32] = "BANGALORE";
    cardnames[33] = "COMMUNITY CHEST";
    cardnames[34] = "HYDERABAD";
    cardnames[35] = "HOWRAH JUNCTION RAILWAY STATION";
    cardnames[36] = "CHANCE";
    cardnames[37] = "CHENNAI";
    cardnames[38] = "LUXURY TAX";
    cardnames[39] = "DELHI";

}

void gamedata::put_playersnumber(int input)
{
    playersnumber = input;
}

int gamedata::get_playersnumber()
{
    return playersnumber;
}

int gamedata::currently_playing()
{
    return current_player;
}

QString gamedata::card_name(int input)
{
    return cardnames[input];
}

int gamedata::positions_owned(int input)
{
    return taken_positions[input];
}

void gamedata::increment_current_player()
{
    current_player++;
    current_player = current_player % playersnumber;
    if(gamers[opdata.currently_playing()].get_bankruptstatus() == 1)
    {
        current_player++;
        current_player = current_player % playersnumber;
    }
}

void gamedata::update_undermortgage(int input)
{
    int count;
    for(count = 0; undermortgage[count] == -1; count++)
    {}
    undermortgage[count] = input;
}

int gamedata::get_undermortgage(int input)
{
    return undermortgage[input];
}

void gamedata::remove_undermortgage(int input)
{
    int count;
    for( count = 0; undermortgage[count] != input; count++)
    {}
    for(int count2 = count; count2 < 29; count2++)
    {
        undermortgage[count2] = undermortgage[count2 + 1];
    }
    undermortgage[29] = -1;
}

void gamedata::update_playersplaying(int input)
{
    playersplaying = playersplaying + input;
}

int gamedata::get_playersplaying()
{
    return playersplaying;
}
