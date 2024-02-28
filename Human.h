#ifndef HUMAN
#define HUMAN
#include "Player.h"
using namespace std;

class Human : public Player{
    public:
        Human();
        Human(string name);
        char makeMove();
        string getName();
};

#endif