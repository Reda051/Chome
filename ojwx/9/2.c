#include <stdio.h>
#define CALCULATE(a,b)((a)%(b))
int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);

    int temp=CALCULATE(a,b);

    printf("%d",temp);
}