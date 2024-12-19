//
// Created by reda on 24-10-11.
//
#include<stdio.h>
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
   int jia,jian,cheng,chu,yu;
    jia=a+b;
    jian=a-b;
    cheng=a*b;
    chu=a/b;
    yu=a%b;
    printf("%d\n%d\n%d\n%d\n%d\n",jia,jian,cheng,chu,yu);
//在C语言中，整数限制在40000以内通常是由于数据类型的范围和计算机的内存限制。
//C语言中的常用整数类型 int 一般是16位或32位的，具体取决于平台。
//对于16位整数，其范围是-32768到32767
//对于32位整数，其范围是-2147483648到2147483647
//所以40000超出了16位整数的范围，容易导致溢出错误。确保数据运算时的整数在合理范围内可以防止溢出和其他意想不到的问题

    return 0;
  }