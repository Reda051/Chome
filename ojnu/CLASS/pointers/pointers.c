//
// Created by along on 24-11-13.
//
#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    int radius_1= 100;
    //&radius_1 address of.
    printf("radius_1 = %d\n", radius_1);
    printf("&radius_1 = %p\n", &radius_1);
    //&取地址符，address of Object.
    //%p表示地址,取地址符取地址.
    radius_1=200;//当左值用.放到这个变量所在的内存空间里去。
    //给radius赋值 是发生了一个从左值到右值的转换.
    //储存在变量内存里的就是左值，储存在...?
    //左值和右值的理解: Q

    double circumference =2*PI *radius_1;
    printf("circumference = %lf\n", circumference);
    //常量是很经典的右值
    //左值有储存空间，右值没有.
    //define的宏是...?

    int *ptr_radius_1=&radius_1;
    //如果没有*，需要?
    //指针变量加个*？
    // int*这个指针指向一个int类型。
    //value:&radius_1.
    //
    
}
