#include <stdio.h>
#include <string.h>
void removeNewline(char str[]) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
int main(void) {
    char str1[100];
    char str2[100];
    char str3[200];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    removeNewline(str1);
    removeNewline(str2);
    int i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    printf("%s\n", str3);
    return 0;
}


/*
#include <stdio.h>

int main(void) {
    int left, right, mid; // 定义二分查找的边界
    int n;
    scanf("%d", &n);
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    left = 0;
    right = 14;
    int found = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == n) {
            printf("%d\n", arr[mid]);
            found = 1;
            break;
        } else if (arr[mid] > n) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if (!found) {
        printf("无此值\n");
        printf("李大卫的作业\n");
    }
    return 0;
}
*/



/*#include <stdio.h>
int main(void)
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i <9;i++)
    {
        int minindex=i;
        for(int j=i+1;j<9;j++){
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    for(int i = 0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
}*/