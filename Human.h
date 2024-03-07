#ifndef HUMAN
#define HUMAN
#include "Player.h"


class Human : public Player{
    private:
        string move;
    public:
        Human();
        Human(string name);
        Move* makeMove();
        std::string getName();
};

#endif