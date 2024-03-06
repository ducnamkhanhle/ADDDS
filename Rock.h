#ifndef ROCK
#define ROCK

#include "Move.h"
#include<vector>
#include<string>

class Rock : public Move{
    public:
        Rock();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif