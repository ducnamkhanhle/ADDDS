#include "Human.h"
#include <iostream>

Human::Human() : Human("Human") {}
Human::Human(string name) : Player(name) {}
char Human::makeMove(){
    char move;
    cout << "Enter Move: ";
    cin >> move;
    return move;
}

string Human::getName(){
    return _name;
}