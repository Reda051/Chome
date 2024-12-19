#include<stdio.h>
#define MAX 20
void YangHui(int arr[MAX][MAX],int n);
int main(void) {
    int n;
    scanf("%d",&n);
    int arr[MAX][MAX];
    YangHui(arr,n);
    for(int i=0;i<n;i++) {for(int j=0;j<n;j++) {printf("%d",arr[i][j]);}}
    return 0;
}
void YangHui(int arr[MAX][MAX],int n) {
    for(int i=0;i<n;i++) {
    arr[i][1]=1;
        arr[i][i]=1;
        arr[i][i+1]=arr[i-1][i]+arr[i-1][i];
    }
}