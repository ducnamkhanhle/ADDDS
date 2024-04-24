#include <iostream>
#include "BigNumCalc.h"

using namespace std;


int main() {
    BigNumCalc func;

    std::list<int> calc1, calc2;

    calc1 = func.buildBigNum("5");
    calc2 = func.buildBigNum("15");

    std::list<int> ans = func.sub(calc1, calc2);

    auto it = ans.begin();

    while (it != ans.end()){
        std::cout << *it; 
        it++;
    }
}