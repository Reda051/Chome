#include <stdio.h>
void Selection(int arr[],int n);
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    Selection(arr,n);
    for (int i = 0; i < n; i++) {printf("%d ", arr[n-i-1]);}
    return 0;
}
void Selection(int arr[],int n) {

    for (int i = 0; i < n; i++) {
        int min=i;
        for(int j = i+1; j < n; j++) {
            if(arr[j]<arr[min]){min=j;}
        }
            if(min!=i) {
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }
}