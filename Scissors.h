#ifndef SCISSORS
#define SCISSORS

#include "Move.h"
#include<vector>
#include<string>

class Scissors : public Move{
    public:
        Scissors();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif