#include "DocumentManager.h"
#include<iostream>
#include<string>
using namespace std;

int sum(int n){
    if (n == 1) return 1;

    return n + sum(n - 1);
}

int Power(int x, int n){
    if (n == 1) return x;

    return x * Power(x, n - 1); 
}

int GCD(int a, int b){
    if (b == 0) return a;

    return GCD(b, a % b);
}

int SumDigit(int x){
    if (x == 0) return 0;

    return x % 10 + SumDigit(x / 10);
}

string ReverseString(string s){
    if (s.size() == 0) return "";

    cout << s.substr(s.size() - 1, 1) << " " << s.substr(0, s.size() - 1) << endl;

    return s.substr(s.size() - 1, 1) + ReverseString(s.substr(0, s.size() - 1));
}

int recursive_func(int n) {
    if (n == 1) 
        return 1;
    if (n == 2) return 1;

    return recursive_func(n - 1) * recursive_func(n - 2);
}

int main(){
   cout << recursive_func(3) << endl;
}