#ifndef SCISSORS
#define SCISSORS

#include "Move.h"

class Scissors : public Move{
    public:
        Scissors();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif