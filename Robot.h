#ifndef ROBOT
#define ROBOT

#include "Move.h"

class Robot : public Move{
    public:
        Robot();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif