#ifndef COMPUTER
#define COMPUTER
#include "Player.h"
using namespace std;

class Computer : public Player{
    public:
        Computer();
        Computer(string name);
        char makeMove();
        string getName();
        char getMove();

};

#endif