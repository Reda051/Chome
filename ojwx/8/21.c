#include <stdio.h>
#include <string.h>
#include <ctype.h>
void DataAnalysis(char str[], int answer[]);
int main(void) {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int answer[4] = {0};
    DataAnalysis(str, answer);
    for (int i = 0; i < 4; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    return 0;
}
void DataAnalysis(char str[], int answer[]) {
    int alpha = 0, num = 0, space = 0, digit = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            alpha++;
        } else if (isdigit(str[i])) {
            num++;
        } else if (isspace(str[i])) {
            space++;
        } else {
            digit++;
        }
    }
    answer[0] = alpha;
    answer[1] = num;
    answer[2] = space;
    answer[3] = digit;
}
