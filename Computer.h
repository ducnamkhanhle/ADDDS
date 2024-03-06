#ifndef COMPUTER
#define COMPUTER
#include "Player.h"
#include "Move.h"

class Computer : public Player{
    public:
        Computer();
        Computer(string name);
        Move* makeMove();
        std::string getName();

};

#endif