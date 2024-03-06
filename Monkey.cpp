#include "Monkey.h"

Monkey::Monkey() {
    looseList = {"Zombie", "Pirate"};
}
std::string Monkey::getName() {
    return "Monkey";
}

std::vector<std::string> Monkey::getLooseList(){
    return looseList;
}