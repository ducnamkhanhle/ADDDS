#include "Zombie.h"

Zombie::Zombie() {
    looseList = {"Robot", "Ninja"};
}
std::string Zombie::getName() {
    return "Zombie";
}

std::vector<int,std::string> Zombie::getLooseList(){
    return looseList;
}