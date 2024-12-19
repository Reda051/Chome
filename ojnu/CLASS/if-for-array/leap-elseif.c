//
// Created by reda on 24-10-8.
//
#include <stdio.h>
int main(void) {
    int leap = 0,year;
    if(year % 4 !=0){
    leap = 0;
    }   else {
        if(year % 100 !=0) {
            leap = 1;
        }else {
            leap = 0;
        }
    }
    return 0;
}