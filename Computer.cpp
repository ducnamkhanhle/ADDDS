#include "Computer.h"

Computer::Computer() : Player("Computer") {}
string Computer::getName(){
    return _name;
}

Move* Computer::makeMove(){
    return strToObj.getMoveObject("Rock");
}
