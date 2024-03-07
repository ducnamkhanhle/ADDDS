#ifndef MONKEY
#define MONKEY

#include "Move.h"

class Monkey : public Move{     
    public:
        Monkey();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif