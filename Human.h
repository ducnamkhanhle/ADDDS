#ifndef HUMAN
#define HUMAN
#include "Player.h"
using namespace std;

class Human : public Player{
    public:
        Human();
        Human(string name);
        Move* makeMove();
        string getName();
        char getMove();
};

#endif