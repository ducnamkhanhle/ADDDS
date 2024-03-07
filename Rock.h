#ifndef ROCK
#define ROCK

#include "Move.h"


class Rock : public Move{
    public:
        Rock();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif