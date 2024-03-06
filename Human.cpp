#include "Human.h"
#include "Factory.h"


Human::Human() : Human("Human") {}
Human::Human(string name) : Player(name) {}
Move* Human::makeMove(){
    string move;
    cout << "Enter Move: ";
    cin >> move;
    
    Factory strToObj;
    return strToObj.getMoveObject(move);
}


string Human::getName(){
    return _name;
}