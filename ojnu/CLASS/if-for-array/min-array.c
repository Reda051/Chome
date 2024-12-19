//
// Created by reda on 24-10-8.
//
#include <stdio.h>
#define num 5
int main(void) {
    //VLA variable - length array可变常数数组
    int numbers[5]={1,2,3,4,5};
    //不推荐[]里用变量来限制;
    int min =numbers;
    for (int i =1 ;i <num ; i++) {
        if(numbers[i]<min) {
            min = numbers[i];
        }
    }
    return 0;
}