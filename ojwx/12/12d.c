#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    while (fgets(str, 101, stdin) != NULL) {
        int len = strlen(str);
        if (str[len-1] == '\n') {
            str[len-1] = '\0';
        }
        bool in_word = false;
        for (int i = 0; i < len; i++) {
            if (isspace(str[i]) || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
                in_word = false;
            } else {
                if (!in_word && islower(str[i])) {
                    str[i] = toupper(str[i]);
                }
                in_word = true;
            }
        }

        printf("%s\n", str);
    }

    return 0;
}
