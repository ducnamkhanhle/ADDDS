#include "Computer.h"

Computer::Computer() : Player("Computer") {}
Computer::Computer(string name) : Player(name) {}
string Computer::getName(){
    return _name;
}

char Computer::makeMove(){
    _move = 'R';
}

char Computer::getMove(){
    return _move;
}