#ifndef FACTORY
#define FACTORY
#include "Move.h"

class Factory{
    public:
        Factory();  
        Move* getMoveObject(std::string move);

};

#endif