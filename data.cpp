#include "data.h"
#include "QString"
#include "cards_details.h"

pdata::pdata()
{
    playername = "**********";
    player_position = 0;
    possessions[32]={0};
    house = 0;
    hotel = 0;
    wallet = 200000;
    get_out_of_jail = 0;
    jail_status = 0;
    playing_status = 1;
    possessionnumber = 0;
    jail_tries = 0;
    bankrupt_status = 0;
}

void pdata::add_possessions(int place)
{
    int pos = 0;
    while(possessions[pos]!=0)
        pos++;
    possessions[pos] = place;
}

void pdata::subtract_money(int decrement)
{
    wallet = wallet - decrement;
}

void pdata::add_money(int increment)
{
    wallet = wallet + increment;
}

void pdata::insert_name(QString name)
{
    playername = name;
}

void pdata::remove_possessions(int place)
{
    int pos;
    int cnt;
    for(pos = 0; pos<22 ; pos++)
    {
        if(possessions[pos]==place)
            break;
    }
    for(cnt = pos ; cnt<22 ; cnt++)
    {
        possessions[cnt]=possessions[cnt+1];
    }
}

void pdata::update_position(int place)
{
    player_position= place % 40;
}

QString pdata::get_playername()
{
    return playername;
}

int pdata::get_position()
{
    return player_position;
}

int pdata::get_money()
{
    return wallet;
}

int pdata::get_possessions(int input)
{
    return possessions[input];
}

void pdata::jail_free(int input)
{
    get_out_of_jail = get_out_of_jail + input;
}

int pdata::get_jailstatus()
{
    return jail_status;
}

void pdata::updata_jailstatus(int state)
{
    jail_status = state;
}

int pdata::get_house()
{
    return house;
}

int pdata::get_hotel()
{
    return hotel;
}

void pdata::declared_bankrupt()
{
    playing_status = 0;
}

int pdata::get_jailfreecards()
{
    return get_out_of_jail;
}

void pdata::increment_hotel()
{
    hotel++;
}

void pdata::increment_house()
{
    house++;
}

void pdata::increment_possessionnumber()
{
    possessionnumber++;
}

int pdata::get_possessionnumber()
{
    return possessionnumber;
}

void pdata::update_jail_tries()
{
    jail_tries++;
}

int pdata::get_jail_tries()
{
    return jail_tries;
}

void pdata::update_bankruptstatus(int input)
{
    bankrupt_status = input;
}

int pdata::get_bankruptstatus()
{
    return bankrupt_status;
}
