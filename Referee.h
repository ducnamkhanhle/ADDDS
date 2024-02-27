#ifndef REFEREE
#define REFEREE
#include "Player.h"
using namespace std;

class Referee{
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);

};

#endif