#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 21
void sortStrings(char **strings, int count);
int main(void) {
    char str1[MAX_STRING_LENGTH];
    char str2[MAX_STRING_LENGTH];
    char str3[MAX_STRING_LENGTH];
    char *strings[] = {str1, str2, str3};
    fgets(str1, MAX_STRING_LENGTH, stdin);
    fgets(str2, MAX_STRING_LENGTH, stdin);
    fgets(str3, MAX_STRING_LENGTH, stdin);
    for (int i = 0; i < 3; i++) {
        int len = strlen(strings[i]);
        if (strings[i][len - 1] == '\n') {
            strings[i][len - 1] = '\0';
        }
    }
    sortStrings(strings, 3);
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
void sortStrings(char **strings, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}
