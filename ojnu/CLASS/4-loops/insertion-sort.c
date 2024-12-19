#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 10000
#define RANGE 10
int main(void) {
    int numbers[MAX_LEN]={0};
    int size=0;
    scanf("%d",&size);
    srand(time(NULL));
    for(int i=0;i<size;i++) {
        numbers[i]=rand()%RANGE;
    }


    return 0;

}


#include<stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    int arr[50];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int insertnum=0;
    int j=n-1;
    scanf("%d",&insertnum);
    while(insertnum<arr[j]&&j>0) {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=insertnum;
    for(int i=0;i<n+1;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}