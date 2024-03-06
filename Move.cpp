#include "Move.h"

Move::Move() {}
std::string Move::getName() {}
std::vector<std::string> MovegetLooseList() {}
bool Move::isLoostAgainst(Move* move1, Move* move2){
    std::vector<std::string> loostList = move2->getLooseList();
    std::string theMove = move1->getName();

    for (int i = 0; i < loostList.size(); i++){
        if (loostList[i] == theMove){
            return true;
        }
    }

    return false;
}