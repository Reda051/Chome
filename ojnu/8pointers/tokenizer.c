#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define LEN 5000

const char *operators[] = {"+", "-", "*", "/", "=", "==", "!=", ">=", "<=", ">", "<", NULL};
const char *reserved[] = {"const", "int", "float", "double", "long", "static", "void", "char", "extern", "return", "break", "enum", "struct", "typedef", "union", "goto", NULL};

bool is_reserved(const char *word) {
    for (int i = 0; reserved[i] != NULL; i++) {
        if (strcmp(word, reserved[i]) == 0) {
            return true;
        }
    }
    return false;
}

bool is_operator(const char *word) {
    for (int i = 0; operators[i] != NULL; i++) {
        if (strcmp(word, operators[i]) == 0) {
            return true;
        }
    }
    return false;
}

bool is_integer(const char *word) {
    if (!isdigit(word[0])) return false;
    for (int i = 1; word[i]; i++) {
        if (!isdigit(word[i])) return false;
    }
    return true;
}

bool is_float(const char *word) {
    bool dot_found = false;
    for (int i = 0; word[i]; i++) {
        if (word[i] == '.') {
            if (dot_found) return false;  // Multiple dots
            dot_found = true;
        } else if (!isdigit(word[i])) {
            return false;
        }
    }
    return dot_found;
}

bool is_variable(const char *word) {
    if (!isalpha(word[0]) && word[0] != '_') return false;
    for (int i = 1; word[i]; i++) {
        if (!isalnum(word[i]) && word[i] != '_') return false;
    }
    return true;
}

void process(const char *stmt) {
    char buffer[LEN] = {0};
    char word[LEN] = {0};
    const char *p = stmt;
    bool valid = true;

    while (*p) {
        while (isspace(*p)) p++;  // 跳过空格
        if (*p == '\0') break;

        int len = 0;
        if (isalnum(*p) || *p == '.' || *p == '_') {
            while (isalnum(*p) || *p == '.' || *p == '_') {
                word[len++] = *p++;
            }
        } else if (*p == '-' || *p == '+') {
            word[len++] = *p++;
        } else {
            word[len++] = *p++;
        }
        word[len] = '\0';

        if (is_reserved(word)) {
            strcat(buffer, "reserved ");
        } else if (is_operator(word)) {
            strcat(buffer, "operator ");
        } else if (is_integer(word)) {
            strcat(buffer, "integer ");
        } else if (is_float(word)) {
            strcat(buffer, "float ");
        } else if (is_variable(word)) {
            strcat(buffer, "variable ");
        } else {
            valid = false;
            break;
        }
    }

    if (!valid) {
        printf("Compile Error\n");
        return;
    }
    printf("%s\n", buffer);
}

int main(void) {
    char input[4096];
    char stmt[4096];
    fgets(input, sizeof(input), stdin);
    const char *p = input;
    while (*p) {
        while (isspace(*p)) p++;  // 跳过空白符
        if (*p == '\0') break;

        char *semicolon = strchr(p, ';');
        if (!semicolon) {
            printf("Compile Error\n");
            return 0;
        }

        size_t len = semicolon - p;
        strncpy(stmt, p, len);
        stmt[len] = '\0';
        p = semicolon + 1;

        process(stmt);
    }

    return 0;
}