#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player* player1, Player* player2){
    char player1_move = player1->getMove(), player2_move = player2->getMove();

    if (player1_move == 'R'){
        if (player2_move == 'R') return nullptr;
        if (player2_move == 'P') return player2;
        if (player2_move == 'S') return player1;
    }
    else if (player1_move == 'P'){
        if (player2_move == 'R') return player1;
        if (player2_move == 'P') return nullptr;
        if (player2_move == 'S') return player2;
    }
    else if (player1_move == 'S'){
        if (player2_move == 'R') return player2;
        if (player2_move == 'P') return player1;
        if (player2_move == 'S') return nullptr;
    }
}