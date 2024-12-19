//
// Created by reda on 24-10-8.
//
#include <stdio.h>
int main(void) {
    int year = 0;
    scanf("%d",&year);
    int leap =0 ;
    // boolean;indicator;flag
    if (year % 4 ==0) {
        if (year %100 == 0) {
            if(year %400 == 0) {
                leap = 1;
            }   else {
                leap = 0;
            }
        }
    }   else {
        leap =0;
    }

    if(leap =1) {
        printf ("");
    }   else {
        printf("");
    }
    return 0;
}


//逻辑 主框架。
//头重脚轻