#include "Referee.h"

Referee::Referee(){}
Player* Referee::refGame(Player* player1, Player* player2){
    Move* player1_move = player1->makeMove();
    Move* player2_move = player2->makeMove();

    Move checkMove;
    bool isLoose = checkMove.isLoostAgainst(player1_move, player2_move);
    bool isDraw = checkMove.isDrawAgains(player1_move, player2_move);
    if (!isLoose){
        return player1;
    }
    else if (isDraw){
        
        return nullptr; 
    }
    else{
        return player2;
    }


}