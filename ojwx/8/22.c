#include <stdio.h>
#include <string.h>
//use #define to limit the MAX
void LongestWord(char str[][100]);
//char *str替换了str[][];
int main(void) {
//一维数组代替二维数组
    char str[100][100];
    fgets(str, 100, stdin);
//去掉字符串末尾的换行符???,fgets是\n好像是要把他换成\0.
    LongestWord(str);
    return 0;
}

void LongestWord(char str[][100]) {
    int len = strlen(str);
    int count=0;
    int record=0;
    int arr[100];
    for (int i = 0; count < len; i++) {
        for (int j = 0;str[i][j]!=' '; j++) {
            count++;
        }
        record++;
    }
    for(int i =0;i<record;i++) {
        for(int j=0;str[i][j]!=' ';j++) {
            arr[i]++;
        }
    }
    int index=0;
    int max=arr[0];
    for(int i=0;i<record;i++) {
        if(arr[i]>max) {
        index=i;
        }
    }
    printf("%s",str[index]);
}