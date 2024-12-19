#include <stdio.h>
#define SWAP(a,b){int temp=a;a=b;b=temp;}
int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);
    SWAP(a,b);
    printf("%d %d\n",a,b);
    return 0;

}