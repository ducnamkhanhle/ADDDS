#ifndef REFEREE
#define REFEREE
#include "Player.h"
#include "Move.h"

class Referee{
    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);

};

#endif