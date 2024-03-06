#ifndef FACTORY
#define FACTORY
#include<string>
#include "Move.h"

class Factory{
    public:
        Factory();  
        Move* getMoveObject(std::string move);

};

#endif