#ifndef idiot_h
#define idiot_h

#include <string.h>
#include <ctype.h>

// 修正拼写错误的关键字
const char* fix_keyword(const char* word) {
    static const struct {
        const char* incorrect;
        const char* correct;
    } keyword_corrections[] = {
        {"inlcude", "include"},
        {"definee", "define"},
        {"strcut", "struct"},
        {"retrun", "return"},
        {"intger", "int"},
        {"whiel", "while"},
        {"swich", "switch"},
        {NULL, NULL}  // 结束标志
    };

    for (int i = 0; keyword_corrections[i].incorrect != NULL; i++) {
        if (strcmp(word, keyword_corrections[i].incorrect) == 0) {
            return keyword_corrections[i].correct;
        }
    }
    return word;  // 如果没有匹配，返回原字符串
}

// 全角转半角
void fullwidth_to_halfwidth(const char* input, char* output) {
    while (*input) {
        if (*input >= 0xEFBC81 && *input <= 0xEFBD9E) {
            *output = *input - 0xFEE0;  // 全角转半角字符范围
        } else if (*input == 0x3000) {  // 全角空格
            *output = ' ';
        } else {
            *output = *input;
        }
        input++;
        output++;
    }
    *output = '\0';  // 结束字符串
}

// 修正输入文本中的常见错误
void fix_text(const char* input, char* output) {
    char buffer[256];
    int i = 0, j = 0;

    while (*input) {
        if (isspace(*input) || ispunct(*input)) {
            buffer[i] = '\0';
            const char* fixed_word = fix_keyword(buffer);
            while (*fixed_word) {
                output[j++] = *fixed_word++;
            }
            output[j++] = *input++;
            i = 0;
        } else {
            buffer[i++] = *input++;
        }
    }
    buffer[i] = '\0';
    const char* fixed_word = fix_keyword(buffer);
    while (*fixed_word) {
        output[j++] = *fixed_word++;
    }
    output[j] = '\0';
}

#endif /* TEXT_FIXER_H */
