#include <stdio.h>
//二分查找
//适合已经排序的数组，不然GG
int binarySearch(int arr[], int size,int x);
int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",binarySearch(arr,n,10));
    return 0;
}

int binarySearch(int arr[], int size,int x) {
    int low, high, mid;
    int index=-1;
    low=0;
    high=size-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==x) {
            return mid;
        }
         {if(arr[mid]>x) {
            high=mid-1;
        }else {if(arr[mid]<x) {
            low=mid+1;
        }
        }
        }
    }
    return -1;
}