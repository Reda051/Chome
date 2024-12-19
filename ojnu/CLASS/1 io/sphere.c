#include "stdio.h"
#include <math.h>
//每个结果占一行；小数点后保留四位；每个结果至少占15字符，左对齐；
int main(void){
  int radius = 100;

//const修饰后 变量变为常数量，不允许修改[不重新赋值]
    const double PI = 3.14159;
  double surface_area =  4 * PI * pow(radius,2);
  double volume = 4.0 / 3 * PI * pow(radius,3);
  printf("%-15.4f:surface_area\n%.4f :volume\n %-15.4f",surface_area,volume);
//%字符数.保留小数 类型
    //15表示输出的宽度
    //%-.f，-在前面就是在前面对齐

    return 0;
  }


