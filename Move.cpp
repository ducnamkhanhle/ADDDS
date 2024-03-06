#include "Move.h"

Move::Move() {}
std::string Move::getName() {}
std::vector<std::string> Move::getLooseList() {}
bool Move::isLoostAgainst(Move* move1, Move* move2){
    std::vector<std::string> loostList = move2->getLooseList();
    std::string theMove = move1->getName();

    for (int i = 0; i < loostList.size(); i++){
        if (loostList[i] == theMove){
            return false;
        }
    }

    return true;
}
bool Move::isDrawAgains(Move* move1, Move* move2){
    std::string player1_move = move1->getName();
    std::string player2_move = move2->getName();

    if (player1_move == player2_move) return true;
    else return false;
}