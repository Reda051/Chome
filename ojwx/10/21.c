#include <stdio.h>
#include <string.h>
#include <ctype.h>

void DataAnalysis(char str[], int answer[]);

int main(void) {
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0'; // 去除字符串末尾的换行符
    }
    int answer[5] = {0};
    DataAnalysis(str, answer);

    for (int i = 0; i < 5; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    return 0;
}

void DataAnalysis(char str[], int answer[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            answer[0]++;
        } else if (islower(str[i])) {
            answer[1]++;
        } else if (isspace(str[i])) {
            answer[2]++;
        } else if (isdigit(str[i])) {
            answer[3]++;
        } else {
            answer[4]++;
        }
    }
}
