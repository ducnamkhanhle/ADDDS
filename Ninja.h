#ifndef NINJA
#define NINJA

#include "Move.h"
#include<vector>
#include<string>

class Ninja : public Move{
    private:
        std::vector<std::string> looseList;
    public:
        Ninja();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif