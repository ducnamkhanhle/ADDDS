#ifndef ZOMBIE
#define ZOMBIE

#include "Move.h"
#include<vector>
#include<string>

class Zombie : public Move{
    private:
        std::vector<std::string> looseList;
    public:
        Zombie();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif