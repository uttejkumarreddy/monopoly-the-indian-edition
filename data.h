#ifndef DATA_H
#define DATA_H
#include <QString>


class pdata
{
    QString playername;
    int player_position;
    int possessions[32];
    int possessionnumber;
    int wallet;
    int house;
    int hotel;
    int get_out_of_jail;
    int jail_status;
    int playing_status;
    int jail_tries;
    int bankrupt_status;
public:
    pdata();
    QString get_playername();
    QString get_positionname(int);
    void insert_name(QString);
    void add_money(int);
    void subtract_money(int);
    int get_money();
    void update_position(int);
    void add_possessions(int);
    void remove_possessions(int);
    int get_position();
    int get_possessions(int);
    void jail_free(int);
    int get_jailstatus();
    void updata_jailstatus(int);
    void increment_house();
    void increment_hotel();
    int get_house();
    int get_hotel();
    void declared_bankrupt();
    int get_jailfreecards();
    int get_possessionnumber();
    void update_jail_tries();
    int get_jail_tries();
    void update_bankruptstatus(int);
    int get_bankruptstatus();
    void increment_possessionnumber();
};

extern pdata gamers[6];

extern int die1;
extern int die2;

extern int used_communitycards[16];
extern int used_chancecards[16];

extern int callingspecialcard;

extern int tradee_player;

extern int gobackto;

//extern int owner;

#endif // DATA_H
