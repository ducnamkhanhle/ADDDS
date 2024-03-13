#include "Reverser.h"
#include<cmath>

int Reverser::reverseDigit(int value){
    if (value < 0) return -1;
    if (value < 10) return value;

    return (value % 10) * pow(10,(int)log10(value/10) + 1) + reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string characters){
    if (characters.size() == 0) return "ERROR";
    if (characters.size() == 1) return characters;

    return characters.substr(characters.size()-1,1) + reverseString(characters.substr(0, characters.size()-1));
}