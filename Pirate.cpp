#include "Pirate.h"

Pirate::Pirate() {
    looseList = {"Ninja", "Zombie"};
}
std::string Pirate::getName() {
    return "Pirate";
}

std::vector<std::string> Pirate::getLooseList(){
    return looseList;
}