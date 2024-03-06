#include "Paper.h"

Paper::Paper() {
    looseList = {"Scissors"};
}
std::string Paper::getName() {
    return "Paper";
}

std::vector<std::string> Paper::getLooseList(){
    return looseList;
}