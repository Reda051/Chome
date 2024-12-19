//
// Created by reda on 24-10-8.
//
#include <stdio.h>
int main(void) {
    int a=0,b=0,c=0;
    scanf("%d%d%d",&a<&b,&c);
    int min=0;
    if(a<b) {
        if (a<c) {
            min = a;
        }else {
            min =c;
        }
    }   else {
        if(b>c) {
            min=c;
        }   else {
            min=b;
        }
    }//大概这个意思，代码现不管了（狗头）
    printf("min=%d",min);
    return 0;
}