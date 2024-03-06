#include "Robot.h"

Robot::Robot() {
    looseList = {"Monkey", "Pirate"};
}
std::string Robot::getName() {
    return "Robot";
}

std::vector<std::string> Robot::getLooseList(){
    return looseList;
}