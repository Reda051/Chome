//
// Created by reda on 24-9-29.
//
#include<stdio.h>
int main(void) {
    int nums[10];
    int max_val=0;
    for (int j = 0 ; j < 10 ; j++) {
        scanf ( "%d",&nums[j]);
    }
    for(int i =0 ; i<10; i++) {
        if(nums[i]>max_val) {
            max_val=nums[i];
        }
    }
    printf("%d",max_val);
    return 0;
}