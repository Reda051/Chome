#include <stdio.h>
int main(void){
    int m;
    scanf("%d",&m);
    if(m>100){
        printf("Wrong");
        return 0;
    }
    if(m>=90){
        printf("A");
    }else if(m>=80){
        printf("B");
    }else if(m>=70){
        printf("C");
    }else if(m >=60){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}