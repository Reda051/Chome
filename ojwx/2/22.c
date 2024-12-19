//
// Created by reda on 24-10-11.
//
#include <stdio.h>
int main(void) {
    int score[50];
    int id[50];
    for(int i=0 ; i<50 ; i++) {
        scanf("%d %d",&id[i],&score[i]);
    }
    for(int j = 0 ;j<50;j ++) {
        if(score[j]>=80) {
            printf("%d %d\n",id[j],score[j]);
        }
    }
    return 0;
}