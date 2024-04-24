#include "BigNumCalc.h"
#include <iostream>

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> li;
    for (unsigned int i = 0; i < numString.size(); i++){
        std::string tmp = numString.substr(i, 1);
        li.push_back(stoi(tmp));
    }
    return li;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    if (num1.size() < num2.size()){
        while (num1.size() != num2.size()){
            num1.push_front(0);
        }
    } else if (num1.size() > num2.size()){
        while (num1.size() != num2.size()){
            num2.push_front(0);
        }
    }

    long long remainder = 0;
    std::list<int> ans; 
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() && it2 != num2.rend()){
        ans.push_front((*it1 + *it2 + remainder)%10);
        // std::cout << (*it1 + *it2 + remainder)%10 << " ";
        if (remainder + *it1 + *it2 > 9) remainder = 1;
        else remainder = 0;
        // std::cout << remainder << " " << *it1 << " " << *it2 <<  std::endl;
        it1++, it2++;   
    }

    if (remainder != 0) ans.push_front(remainder);

    return ans;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
        if (num1.size() < num2.size()){
        while (num1.size() != num2.size()){
            num1.push_front(0);
        }
    } else if (num1.size() > num2.size()){
        while (num1.size() != num2.size()){
            num2.push_front(0);
        }
    }

    long long remainder = 0;
    std::list<int> ans; 
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() && it2 != num2.rend()){
        ans.push_front((*it1 + 10 - *it2 - remainder)%10);
        // std::cout << (*it1 + *it2 + remainder)%10 << " ";
        if (*it1 - *it2 - remainder < 0) remainder = 1;
        else remainder = 0;
        // std::cout << remainder << " " << *it1 << " " << *it2 <<  std::endl;
        it1++, it2++;   
    }

    if (remainder != 0) ans.push_front(remainder);

    return ans;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {

}