//
// Created by reda on 24-10-12.
//
#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int number);
int main(void) {
    int max =0;
    int count = 0;
    scanf("%d",&max);
    for(int i = 2;i <=max;i++) {
        //——Bool
        //C99:bool
        //_bool 宏,true(1),false(0)
        if(IsPrime) {
            count++;
            printf("%d ",i);
        }
    }
    printf("\n%d",count);
    return 0;
}
//caller调用者
//callee被调用者
bool IsPrime(int number) {
    bool Is_Prime= true;
    for(int j = 2;j *j<= number;j++) {
        if(number %j==0 ) {
            return false;
            //scope 定义域
        }
    }
    return true;
}