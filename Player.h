#ifndef PLAYER
#define PLAYER
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Player{
    protected:
        string _name;
        char _move;
    public:
        Player();
        Player(string name);
        virtual char makeMove() = 0;
        virtual string getName() = 0;
        virtual char getMove() = 0;
};

#endif