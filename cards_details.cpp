#include "cards_details.h"
#include "data.h"
#include "gamedata.h"

cards_information::cards_information()
{
    possessed_by = -1;
    houses = 0;
}
\
void cards_information::set_data(int number)
{
    switch(number)
    {
    case 1:
        price = 60000;
        rent_0 = 2000;
        rent_1 = 10000;
        rent_2 = 30000;
        rent_3 = 90000;
        rent_4 = 160000;
        rent_5 = 250000;
        mortgage = 30000;
        house_cost = 50000;
        break;
    case 3:
        price = 60000;
        rent_0 = 4000;
        rent_1 = 20000;
        rent_2 = 60000;
        rent_3 = 180000;
        rent_4 = 320000;
        rent_5 = 450000;
        mortgage = 300000;
        house_cost = 50000;
        break;
    case 6:
        price = 100000;
        rent_0 = 6000;
        rent_1 =30000;
        rent_2 =90000;
        rent_3 =270000;
        rent_4 =400000;
        rent_5 =550000;
        mortgage =50000;
        house_cost =50000;
        break;
    case 8:
        price = 100000;
        rent_0 = 6000;
        rent_1 =30000;
        rent_2 =90000;
        rent_3 =270000;
        rent_4 =400000;
        rent_5 =550000;
        mortgage =50000;
        house_cost =50000;
        break;
    case 9:
        price = 120000;
        rent_0 =8000;
        rent_1 =40000;
        rent_2 =100000;
        rent_3 =300000;
        rent_4 =450000;
        rent_5 =600000;
        mortgage =600000;
        house_cost =50000;
        break;
    case 11:
        price = 140000;
        rent_0 =10000;
        rent_1 =50000;
        rent_2 =150000;
        rent_3 =450000;
        rent_4 =625000;
        rent_5 =750000;
        mortgage =70000;
        house_cost =100000;
        break;
    case 13:
        price = 140000;
        rent_0 =10000;
        rent_1 =50000;
        rent_2 =150000;
        rent_3 =450000;
        rent_4 =625000;
        rent_5 =750000;
        mortgage =70000;
        house_cost =100000;
        break;
    case 14:
        price = 160000;
        rent_0 =12000;
        rent_1 =60000;
        rent_2 =180000;
        rent_3 =500000;
        rent_4 =700000;
        rent_5 =900000;
        mortgage =80000;
        house_cost =100000;
        break;
    case 16:
        price =180000;
        rent_0 =14000;
        rent_1 =70000;
        rent_2 =200000;
        rent_3 =550000;
        rent_4 =750000;
        rent_5 =950000;
        mortgage =90000;
        house_cost =100000;
        break;
    case 18:
        price =180000;
        rent_0 =14000;
        rent_1 =70000;
        rent_2 =200000;
        rent_3 =550000;
        rent_4 =750000;
        rent_5 =950000;
        mortgage =90000;
        house_cost =100000;
        break;
    case 19:
        price =200000;
        rent_0 =16000;
        rent_1 =80000;
        rent_2 =220000;
        rent_3 =600000;
        rent_4 =800000;
        rent_5 =1000000;
        mortgage =100000;
        house_cost =100000;
        break;
    case 21:
        price = 220000;
        rent_0 =18000;
        rent_1 =90000;
        rent_2 =250000;
        rent_3 =700000;
        rent_4 =875000;
        rent_5 =1050000;
        mortgage =110000;
        house_cost =150000;
        break;
    case 23:
        price = 220000;
        rent_0 =18000;
        rent_1 =90000;
        rent_2 =250000;
        rent_3 =700000;
        rent_4 =875000;
        rent_5 =1050000;
        mortgage =110000;
        house_cost =150000;
        break;
    case 24:
        price = 240000;
        rent_0 =20000;
        rent_1 =100000;
        rent_2 =300000;
        rent_3 =750000;
        rent_4 =925000;
        rent_5 =1100000;
        mortgage =120000;
        house_cost =150000;
        break;
    case 26:
        price = 260000;
        rent_0 =22000;
        rent_1 =110000;
        rent_2 =330000;
        rent_3 =800000;
        rent_4 =975000;
        rent_5 =1150000;
        mortgage =130000;
        house_cost =150000;
        break;
    case 27:
        price = 260000;
        rent_0 =22000;
        rent_1 =110000;
        rent_2 =330000;
        rent_3 =800000;
        rent_4 =975000;
        rent_5 =1150000;
        mortgage =130000;
        house_cost =150000;
        break;
    case 29:
        price = 280000;
        rent_0 =24000;
        rent_1 =120000;
        rent_2 =360000;
        rent_3 =850000;
        rent_4 =1025000;
        rent_5 =1200000;
        mortgage =140000;
        house_cost =150000;
        break;
    case 31:
        price = 300000;
        rent_0 =26000;
        rent_1 =130000;
        rent_2 =390000;
        rent_3 =900000;
        rent_4 =1100000;
        rent_5 =1275000;
        mortgage =150000;
        house_cost =200000;
        break;
    case 32:
        price = 300000;
        rent_0 =26000;
        rent_1 =130000;
        rent_2 =390000;
        rent_3 =900000;
        rent_4 =1100000;
        rent_5 =1275000;
        mortgage =150000;
        house_cost =200000;
        break;
    case 34:
        price = 320000;
        rent_0 =28000;
        rent_1 =150000;
        rent_2 =450000;
        rent_3 =1000000;
        rent_4 =1200000;
        rent_5 =1400000;
        mortgage =160000;
        house_cost =200000;
        break;
    case 37:
        price = 350000;
        rent_0 =35000;
        rent_1 =175000;
        rent_2 =500000;
        rent_3 =1100000;
        rent_4 =1300000;
        rent_5 =1500000;
        mortgage =175000;
        house_cost =200000;
        break;
    case 39:
        price = 400000;
        rent_0 =50000;
        rent_1 =200000;
        rent_2 =600000;
        rent_3 =1400000;
        rent_4 =1700000;
        rent_5 =2000000;
        mortgage =200000;
        house_cost =200000;
        break;
    case 5:
        price = 200000;
        rent_0 = 25000;
        rent_1 = 50000;
        rent_2 = 100000;
        rent_3 = 200000;
        mortgage = 100000;
        rent_4 = rent_5 = house_cost = 0;
        break;
    case 15:
        price = 200000;
        rent_0 = 25000;
        rent_1 = 50000;
        rent_2 = 100000;
        rent_3 = 200000;
        mortgage = 100000;
        rent_4 = rent_5 = house_cost = 0;
        break;
    case 25:
        price = 200000;
        rent_0 = 25000;
        rent_1 = 50000;
        rent_2 = 100000;
        rent_3 = 200000;
        mortgage = 100000;
        rent_4 = rent_5 = house_cost = 0;
        break;
    case 35:
        price = 200000;
        rent_0 = 25000;
        rent_1 = 50000;
        rent_2 = 100000;
        rent_3 = 200000;
        mortgage = 100000;
        rent_4 = rent_5 = house_cost = 0;
        break;
     case 12:
        price = 150000;
        rent_0 = 4000 * (die1 + die2);
        rent_1 = 10000 * (die1 + die2);
        mortgage = 75000;
        rent_2 = rent_3 = rent_4 = rent_5 = house_cost =0;
        break;
    case 28:
        price = 150000;
        rent_0 = 4000 * (die1 + die2);
        rent_1 = 10000 * (die1 + die2);
        mortgage = 75000;
        rent_2 = rent_3 = rent_4 = rent_5 = house_cost =0;
        break;
    default:
         price = rent_0 = rent_1 = rent_2 = rent_3 = rent_4 = rent_5 = mortgage = house_cost =0;
         break;
    }
}

void cards_information::community_chest(int choice)
{
    switch(choice)
    {
    case 40:
        gamers[opdata.currently_playing()].add_money(20000);
        break;
    case 41:
        gamers[opdata.currently_playing()].add_money(50000);
        break;
    case 42:
        gamers[opdata.currently_playing()].add_money(1000*opdata.get_playersnumber());

        break;
    case 43:
        gamers[opdata.currently_playing()].add_money(25000);
        break;
    case 44:
        gamers[opdata.currently_playing()].jail_free(1);
        break;
    case 45:
        gamers[opdata.currently_playing()].update_position(0);
        gamers[opdata.currently_playing()].add_money(200000);
        break;
    case 46:
        gamers[opdata.currently_playing()].subtract_money(100000);
        break;
    case 47:
        gamers[opdata.currently_playing()].add_money(10000);
        break;
    case 48:
        gamers[opdata.currently_playing()].add_money(200000);
        break;
    case 49:
        gamers[opdata.currently_playing()].add_money(100000);
        break;
    case 50:
        gamers[opdata.currently_playing()].update_position(10);
        gamers[opdata.currently_playing()].updata_jailstatus(1);
        break;
    case 51:
        gamers[opdata.currently_playing()].subtract_money(50000);
        break;
    case 52:
        gamers[opdata.currently_playing()].subtract_money(10000);
        break;
    case 53:
        gamers[opdata.currently_playing()].subtract_money(50000);
        break;
    case 54:
        gamers[opdata.currently_playing()].update_position(20);
        break;
    case 55:
        gamers[opdata.currently_playing()].add_money(100000);
        break;
    default:
        break;
    }
}

void cards_information::chance(int choice)
{
    int temp;
    switch(choice)
    {
    case 56:
        gamers[opdata.currently_playing()].update_position(39);
        break;
    case 57:
        gamers[opdata.currently_playing()].update_position(0);
        gamers[opdata.currently_playing()].add_money(200000);
        break;
    case 58:
        temp = (40 * gamers[opdata.currently_playing()].get_house()) + (115 * gamers[opdata.currently_playing()].get_hotel());
        gamers[opdata.currently_playing()].subtract_money(temp);
        break;
    case 59:
        gamers[opdata.currently_playing()].update_position(10);
        gamers[opdata.currently_playing()].updata_jailstatus(1);
        break;
    case 60:
        gamers[opdata.currently_playing()].add_money(50000);
        break;
    case 61:
        temp = gamers[opdata.currently_playing()].get_position();
        if(temp == 0)
            temp = 37;
        if(temp == 1)
            temp = 38;
        if(temp == 2)
            temp = 39;
        if(temp == 3)
            temp = 0;
        gamers[opdata.currently_playing()].update_position(temp);
        break;
    case 62:
        gamers[opdata.currently_playing()].subtract_money(150000);
        break;
    case 63:
        temp = (25 * gamers[opdata.currently_playing()].get_house()) + (100 * gamers[opdata.currently_playing()].get_hotel());
        break;
    case 64:
        gamers[opdata.currently_playing()].subtract_money(15000);
        break;
    case 65:
        gamers[opdata.currently_playing()].add_money(100000);
        break;
    case 66:
        gamers[opdata.currently_playing()].add_money(150000);
        break;
    case 67:
        gamers[opdata.currently_playing()].jail_free(1);
        break;
    case 68:
        if(gamers[opdata.currently_playing()].get_position() > 14)
            gamers[opdata.currently_playing()].add_money(200000);
        gamers[opdata.currently_playing()].update_position(14);
        break;
    case 69:
        if(gamers[opdata.currently_playing()].get_position() > 5)
            gamers[opdata.currently_playing()].add_money(200000);
        gamers[opdata.currently_playing()].update_position(5);
        break;
    case 70:
        if(gamers[opdata.currently_playing()].get_position() > 24)
            gamers[opdata.currently_playing()].add_money(200000);
        gamers[opdata.currently_playing()].update_position(24);
        break;
    case 71:
        gamers[opdata.currently_playing()].subtract_money(20000);
        break;
    default:
        break;
    }
}

int cards_information::get_price()
{
    return price;
}

int cards_information::get_mortgage()
{
    return mortgage;
}

int cards_information::get_rent()
{
    if(houses == 0)
        return rent_0;
    if(houses == 1)
        return rent_1;
    if(houses == 2)
        return rent_2;
    if(houses == 3)
        return rent_3;
    if(houses == 4)
        return rent_4;
    if(houses == 5)
        return rent_5;
    return 0;
}

void cards_information::increment_houses()
{
            houses++;
}

int cards_information::status()
{
    return possessed_by;
}

void cards_information::update_possession(int player)
{
    possessed_by = player;
}

int cards_information::get_possession()
{
    return possessed_by;
}

int cards_information::get_houses()
{
    return houses;
}
int cards_information::get_housecost()
{
    return house_cost;
}

void cards_information::update_mortgagestatus(int input)
{
    mortgagestatus = input;
}

int cards_information::get_mortgagestatus()
{
    return mortgagestatus;
}
