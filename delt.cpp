#include <iostream>
#include <cmath>

int div1(int x, int y){
    int count = 0;
    bool x_znak=false;
    bool y_znak=false;
    if (x<0) {
        x_znak=true;
        x=-x;
    }
    if (y<0) {
        y_znak=true;
        y=-y;
    } 
    while (x > y){
        count++;
        for (int i=0; i<y; ++i) x -= 1;
    }

    if (x_znak != y_znak){
        count=-count;
    }
    return count;
}