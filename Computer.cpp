#include "Computer.h"
#include "Factory.h"

Computer::Computer() : Player("Computer") {}
Computer::Computer(string name) : Player(name) {}
string Computer::getName(){
    return _name;
}

Move* Computer::makeMove(){
    Factory strToObj;
    return strToObj.getMoveObject("Rock");
}
