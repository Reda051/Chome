#include <stdio.h>
/*题目描述
输入a和b两个整数，按先大后小的顺序输出a和b。注意请使用指针变量的方式进行比较和输出。
输入
两个用空格隔开的整数a和b。
输出
按先大后小的顺序输出a和b，用空格隔开。
请注意行尾输出换行。
样例输入
5 9
样例输出
9 5*/
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    if(*p>*q)
    {
        printf("%d %d",*p,*q);
    }else
    {
        printf("%d %d",*q,*p);
    }
}