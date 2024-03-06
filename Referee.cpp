#include "Referee.h"

Referee::Referee(){}
Move* Referee::refGame(Player* player1, Player* player2){
    Move* player1_move = player1->makeMove();
    Move* player2_move = player1->makeMove();

    Move checkMove;
    bool isLoose = checkMove.isLoostAgainst(player1_move, player2_move);

    if (isLoose == false){
        return player1_move;
    }
    else {
        return player2_move;
    }


}