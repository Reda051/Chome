//
// Created by along on 24-11-5.
//
#include <stdio.h>
#include <stdbool.h>

bool seqsearch (int n,int x,int arr[]);
int main(void) {
    int x;
    scanf("%d",&x);
    int arr[6]={10,7,11,5,13,8};
    if(seqsearch(x,10,arr)) {
        printf("true\n");
    }else{printf("false\n");}
}

bool seqsearch(int n,int x,int arr[]) {
    int index=0;
    while(x!=arr[index]) {
        index++;
        if(index>6) {
        return false;
            }
    }
    return true;
}