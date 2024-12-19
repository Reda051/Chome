#include <stdio.h>
int main (void) {
    int st = 0;
    scanf ("%c",&st);
    char newst=st-32;
    printf("%c",newst);
    return 0;
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void){
    char st=0;
    scanf("%c",&st);
    printf("%c",toupper(st));
    return 0;
}*/