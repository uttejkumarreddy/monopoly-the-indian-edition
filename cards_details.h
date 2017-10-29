#ifndef CARDS_DETAILS_H
#define CARDS_DETAILS_H


class cards_information
{
    int price;
    int mortgage;
    int rent_0;
    int rent_1;
    int rent_2;
    int rent_3;
    int rent_4;
    int rent_5;
    int possessed_by;
    int houses;
    int house_cost;
    int mortgagestatus;

public:
    cards_information();
    void set_data(int);
    int get_price();
    int get_rent();
    int get_mortgage();
    void increment_houses();
    int status();
    void community_chest(int);
    void chance(int);
    void update_possession(int);
    int get_possession();
    int get_houses();
    int get_housecost();
    void update_mortgagestatus(int);
    int get_mortgagestatus();

};

extern cards_information cardsinfo[40];
extern cards_information chestchance;

#endif // CARDS_DETAILS_H
