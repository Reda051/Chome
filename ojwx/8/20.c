#include <stdio.h>
void PrintSpace(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    PrintSpace(n);
    return 0;
}


void PrintSpace(int n)
{
    int a,b,c,d;
    a=n/1000;
    b=n%1000/100;
    c=n%100/10;
    d=n%10;
    printf("%d %d %d %d",a,b,c,d);
}