/*题目描述
输入a、b、c三个整数，按先大后小的顺序输出a、b和c。注意请使用指针变量的方式进行比较和输出。
输入
三个用空格隔开的整数a、b和c。
输出
按先大后小的顺序输出a、b和c，用空格隔开。
请注意行尾输出换行。
样例输入
9 0 10
样例输出
10 9 0*/


#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *pta=&a;
    int *ptb=&b;
    int *ptc=&c;
    if(*pta<*ptb)
    {
        int *temp = pta;
        pta=ptb;
        ptb=temp;
    }
    if(*pta<*ptc)
    {
        int *temp = pta;
        pta=ptc;
        ptc=temp;
    }
    if(*ptb<*ptc)
    {
        int *temp = ptb;
        ptb=ptc;
        ptc=temp;
    }
    printf("%d %d %d\n",*pta,*ptb,*ptc);
    return 0;
}

