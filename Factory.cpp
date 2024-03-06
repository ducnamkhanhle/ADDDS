#include "Factory.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"

Factory::Factory() {}

Move* Factory::getMoveObject(std::string move){
    if (move == "Pirate"){
        Move* moveObject = new Pirate();
        return moveObject;
    }
    if (move == "Monkey"){
        Move* moveObject = new Monkey();
        return moveObject;
    }
    if (move == "Robot"){
        Move* moveObject = new Robot();
        return moveObject;
    }
    if (move == "Zombie"){
        Move* moveObject = new Zombie();
        return moveObject;
    }
    if (move == "Ninja"){
        Move* moveObject = new Ninja();
        return moveObject;
    }

}