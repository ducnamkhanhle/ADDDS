#ifndef COMPUTER
#define COMPUTER
#include "Player.h"
#include "Move.h"
#include "Factory.h"

class Computer : public Player{
    private:
        Factory strToObj;
        
    public:
        Computer();
        Computer(string name);
        Move* makeMove();
        std::string getName();

};

#endif