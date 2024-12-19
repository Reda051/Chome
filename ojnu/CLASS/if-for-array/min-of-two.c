//
// Created by reda on 24-10-8.
//
#include <stdio.h>
int main(void) {
    int a=0,b=0;
    scanf("%d%d",&a,&b);
    int min =0;
    if(a<b) {
        min =a;
    }   else {
        min=b;
    }
    printf("min(%d %d)=%d",a,b,min);
    return 0;
}
若else只有一个条件，可以不加花括号运行。
但是推荐加上花括号。
格式化就是对齐