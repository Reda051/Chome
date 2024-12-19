//
// Created by reda on 24-10-11.
//
#include <stdio.h>
int main(void) {
    int na,ge;
    scanf("%d",&na);
    int bai = na / 100;
    ge=(na%100)%10;
    na= na - bai*100 +(ge*100) - ge +bai;
    printf("%d",na);
    return 0;
}