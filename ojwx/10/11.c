 /*
题目描述
读入两个整数a和b，使用函数指针的方式调用函数，求出a和b两者中较大的值。
输入
两个用空格隔开的整数a和b。
输出
a和b中较大的值。
请注意行尾输出换行。
样例输入
5 9
样例输出
9
*/
#include <stdio.h>
int max (int a,int b);
int main(void)
{
int a,b;scanf("%d %d",&a,&b);
 int (*pmax)(int,int);
 pmax=max;
 printf("%d",pmax(a,b));
 return 0;
}
int max (int a,int b)
{
 return a>b?a:b;
}