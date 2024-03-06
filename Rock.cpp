#include "Rock.h"
#include <vector>
Rock::Rock() {
    looseList = {"Paper"};
}
std::string Rock::getName() {
    return "Rock";
}

std::vector<std::string> Rock::getLooseList(){
    return looseList;
}