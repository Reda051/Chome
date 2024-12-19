//
// Created by reda on 24-9-27.
//
#include <stdio.h>
int main(void) {
    int year;
    scanf("%d",&year);
    if(year>=0&&year<=2500) {
        if(year % 4 ==0) {
            if(year % 100 == 0) {
                if (year % 400 == 0) {
                    printf("leap year");
                }else {
                    printf("not leap year");
                }
            }else {
                printf("leap year");
            }
        }else {
            printf("not leap year");
        }
    }
return 0;
}