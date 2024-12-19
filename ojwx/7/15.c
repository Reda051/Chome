#include <stdio.h>
int main(void){
    int arr[15];
    for(int i=0;i<15;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    int flag=0;
    scanf("%d",&x);
    int mid=8;
    for(int i=0;i<15;i++)
    {
        if(arr[mid]==x)
        {
            flag=1;
            break;
        }
        if(arr[mid]>x)
        {
            mid--;
        }
        if(arr[mid]<x)
        {
            mid++;
        }

    }
    if(flag==1)
    {
        printf("%d",mid);
    }else
    {
        printf("NO");
    }

    return 0;
}