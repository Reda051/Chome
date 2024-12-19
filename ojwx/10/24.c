/*
题目描述
在main函数中输入10个等长的字符串，另外写一个函数对它们按字典序从小到大排序。并在main函数中输出这10个已经排好序的字符串。
输入
共有10行，每行一个字符串。输入保证每行的字符串长度相等且不超过100个字符。但是请注意字符串中有可能包含空格。
输出
与输入格式相同，每行输出一个排好序之后的字符串。
请注意行尾输出换行。
*/
#include <stdio.h>
#include <string.h>

void Sortstrings(char *str[]);
int main(void) {
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char str5[100];

    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    fgets(str3, 100, stdin);
    fgets(str4, 100, stdin);
    fgets(str5, 100, stdin);

    char *str[100]={str1,str2,str3,str4,str5};
    Sortstrings(str);
    for(int i =0;i <5;i++) {
        printf("%s",str[i]);
    }
    return 0;
}
void Sortstrings(char *str[]) {
    for(int i =0;i <4;i++) {
        for(int j =0;j <5-i-1;j++) {
            if(strcmp(*(str+j),*(str+j+1))>0) {
                char *temp = *(str+j);
                *(str+j) = *(str+j+1);
                *(str+j+1) = temp;
            }
        }
    }
}

/*
样例输入 复制
String D
String E
string A
String C
string G
string J
String I
String H
string F
String B
样例输出 复制
String B
String C
String D
String E
String H
String I
string A
string F
string G
string J
*/
