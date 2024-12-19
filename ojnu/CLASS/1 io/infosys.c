//
// Created by reda on 24-10-3.
//
#include <math.h>
#include "stdio.h"
//#include <ctype.h>
//字符串char
int main(void) {
    char first_name[] = "David";
    char last_name[]="Lee";
    char gender =('a'+'A');
    //单个字符要用单引号才可以
    int birth_year= 2005;
    int birth_month = 11;
    int birth_day = 10;
    char weekday [] = "Monday";
    int c_source = 50;
    int music_score = 100 ;
    int medicine_score = 80;
    double mean = (c_source + music_score +medicine_score) / 3.0;
    double sd = sqrt(pow(c_source,2)+pow(music_score,2)+pow(medicine_score,2)/3.0);
    //sqrt开根号，属于math.h内的函数
    int rank = 10;
    printf("%s\t%s\t%c\n"
        "%.2d-%.2d-%.4d\t%.3s.\n"
        "%d\t%d\t%d\n"
        "%.1f\t%.2f%d%%\n",
        first_name,last_name,/*toupper*/(gender)
        ,birth_month,birth_day,birth_year,weekday);
    \0是no字符，字符串以\0结尾的。
    \0是c语言编译器自动加上的，不需要写。
    c语言中不存在字符串这个数据类型。
%.3s.  3最多三个字符，后面的.表示缩写。
    char gender = 'm' -32;
    32: magic number,最好避免一下
    字符串输出用%s,/t转移序列，是一个tab,%c,c=char
   ctype.h是toupper的调用库
   各种字符存储在计算机中都是整数，不存在小数之类的
        char name[5]="";
        5是4+1,因为\0多出来，所以限制字符长度的时候需要为\0多算一位
        %[flags][width][.[precision]]specifier
                  -flags表示左对齐
                  %d int
                        %f double
                        %e %E double
                        %c char
                        %s C string
                        %%= %

        mean是double类型，要用%f来匹配。
        未定义行为 GG





return 0;
}
