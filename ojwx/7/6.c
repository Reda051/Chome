#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int CountWords(char *str);
int main(void) {
    char str[100];
    fgets(str, 100, stdin);
    printf("%d\n", CountWords(str));
    return 0;
}
int CountWords(char str[]) {
    int count = 0;
    bool InWord = false;
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(isalpha(str[i])) {
            InWord = false;
        }else {
            if(isdigit(str[i])) {InWord=false;}else{        if(!InWord) {
                InWord = true;
                count++;
            }}
        }
    }
    return count;
}