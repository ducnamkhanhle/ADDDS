#ifndef PAPER
#define PAPER

#include "Move.h"


class Paper : public Move{
    public:
        Paper();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif