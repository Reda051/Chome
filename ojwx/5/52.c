//
// Created by reda on 24-10-12.
//
#include <stdio.h>
int main (void) {
    double a,b,c;
    double max_val=0,mid_val=0,min_val=0;
    scanf("%f %f %f",&a,&b,&c);
    double nums[3]={a,b,c};
    max_val=nums[0];
    min_val=nums[0];
    for(int i = 1 ; i< 3;i++) {
        if(nums[i]>max_val) {
            max_val=nums[i];
        }
        if(nums[i]<min_val) {
            min_val=nums[i];
        }
    }

    for(int i = 0;i < 3 ; i++) {
        if(nums[i]!=min_val&&nums[i]!=max_val) {
            mid_val=nums[i];
        }
    }
    printf("%.2f %.2f %.2f",min_val,mid_val,max_val);
    return 0;
}