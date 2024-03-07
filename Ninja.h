#ifndef NINJA
#define NINJA

#include "Move.h"

class Ninja : public Move{
    public:
        Ninja();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif