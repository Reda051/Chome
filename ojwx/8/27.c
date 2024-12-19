#include <stdio.h>
#include <string.h>
int BubbleSort(int arr1[], char arr2[][20], int n);
int BinarySearch(int arr1[], char arr2[][20], int n, int target);
int main(void) {
    int arr1[10];
    char arr2[10][20];
    for (int i = 0; i < 10; i++) {
        scanf("%s %d", arr2[i], &arr1[i]);
    }
    BubbleSort(arr1, arr2, 10);
    int target;
    scanf("%d", &target);
    for (int i = 0; i < 10; i++) {
        printf("%s %d\n", arr2[i], arr1[i]);
    }
    int index = BinarySearch(arr1,arr2,10,target);
    if (index != -1) {
        printf("%s\n", arr2[index]);
    }
    return 0;
}
int BubbleSort(int arr1[], char arr2[][20], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                char tempName[20];
                strcpy(tempName, arr2[j]);
                strcpy(arr2[j], arr2[j + 1]);
                strcpy(arr2[j + 1], tempName);
            }
        }
    }
    return 0;
}
int BinarySearch(int arr1[], char arr2[][20], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr1[mid] == target) {
            return mid;
        } else if (arr1[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
