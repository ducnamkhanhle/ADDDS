#include "Scissors.h"

Scissors::Scissors() {
    looseList = {"Rock"};
}
std::string Scissors::getName() {
    return "Scissors";
}

std::vector<std::string> Scissors::getLooseList(){
    return looseList;
}