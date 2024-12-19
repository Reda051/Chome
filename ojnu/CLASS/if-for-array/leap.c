#include <stdio.h>
#include <stdbool.h>
//多个变量的声明涉及到变量的定义域里面.
//block function
// prototype scope
//year:formal parameter(形参）
bool IsLeapYear(int year);//函数的声明.
int main(void) {
    int year=0;
    //block scope.(块作用域),在main函数里有用.
    scanf("%d",&year);
    //从实参到形参的赋值过程.
    //
    bool leap = IsLeapYear(year);
    if(leap==true) {printf("Leap Year");}else {
        printf("Not a Leap Year");
    }
    return 0;
}
//function definition.
bool IsLeapYear(int year) {
    bool leap=false;
    if((year%4==0)&&year%100!=0||
        year%400==0) {
        leap=true;
        }
    return leap;
}