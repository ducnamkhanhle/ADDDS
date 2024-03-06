#include "Ninja.h"

Ninja::Ninja() {
    looseList = {"Monkey", "Robot"};
}
std::string Ninja::getName() {
    return "Ninja";
}

std::vector<std::string> Ninja::getLooseList(){
    return looseList;
}