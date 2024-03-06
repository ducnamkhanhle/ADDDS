#ifndef MONKEY
#define MONKEY

#include "Move.h"
#include<vector>
#include<string>

class Monkey : public Move{
    private:
        std::vector<std::string> looseList;
    public:
        Monkey();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif