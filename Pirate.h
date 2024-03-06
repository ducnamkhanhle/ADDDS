#ifndef PIRATE
#define PIRATE

#include "Move.h"
#include<vector>
#include<string>

class Pirate : public Move{
    public:
        Pirate();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif