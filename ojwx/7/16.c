#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char str1[80], str2[80], str3[80];
    fgets(str1, 80, stdin);
    fgets(str2, 80, stdin);
    fgets(str3, 80, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    str3[strcspn(str3, "\n")] = '\0';
    int upc =0,loc=0,kongge=0,other=0,shuzi=0;
    for (int i = 0; i < strlen(str1); i++) {
        if (isupper(str1[i])) { upc++; }
        else if (islower(str1[i])) { loc++; }
        else if (isspace(str1[i])) { kongge++; }
        else if (isdigit(str1[i])) { shuzi++; }
        else { other++; }
    }
    for (int i = 0; i < strlen(str2); i++) {
        if (isupper(str2[i])) { upc++; }
        else if (islower(str2[i])) { loc++; }
        else if (isspace(str2[i])) { kongge++; }
        else if (isdigit(str2[i])) { shuzi++; }
        else { other++; }
    }
    for (int i = 0; i < strlen(str3); i++) {
        if (isupper(str3[i])) { upc++; }
        else if (islower(str3[i])) { loc++; }
        else if (isspace(str3[i])) { kongge++; }
        else if (isdigit(str3[i])) { shuzi++; }
        else { other++; }
    }
    printf("%d %d %d %d %d\n",upc,loc,shuzi,kongge,other);
    return 0;
}
