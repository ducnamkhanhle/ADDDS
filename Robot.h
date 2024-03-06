#ifndef ROBOT
#define ROBOT

#include "Move.h"
#include<vector>
#include<string>

class Robot : public Move{
    private:
        std::vector<std::string> looseList;
    public:
        Robot();
        std::string getName();
        std::vector<std::string> getLooseList();

};

#endif