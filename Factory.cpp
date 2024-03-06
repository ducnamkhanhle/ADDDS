#include "Factory.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Paper.h"
#include "Scissors.h"
#include "Rock.h"

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
    if (move == "Rock"){
        Move* moveObject = new Rock();
        return moveObject;
    }
    if (move == "Paper"){
        Move* moveObject = new Paper();
        return moveObject;
    }
    if (move == "Scissors"){
        Move* moveObject = new Scissors();
        return moveObject;
    }
}