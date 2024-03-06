#ifndef ROBOT
#define ROBOT

#include "Move.h"
#include<vector>
#include<string>

class Robot : public Move{
    public:
        Robot();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif