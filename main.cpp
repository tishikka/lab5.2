#include <iostream>
#include <cmath>
#include "delt.h"

int main() {
    setlocale(LC_ALL, "russian");
    int x, y;
    std::cin >> x >> y;
    try{
        if (y==0) {
            throw "can't be divided by 0.";
        }
        std::cout << div1(x,y);
    }
    catch(const char* msg){
        std::cerr << msg << '\n';
        std::cerr << "returning 1." << '\n'; 
        return 1;
    }
    return 0;
}