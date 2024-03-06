#ifndef PAPER
#define PAPER

#include "Move.h"
#include<vector>
#include<string>

class Paper : public Move{
    public:
        Paper();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif