#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int max_val=len1>len2?len1:len2;
    for(int i =0;i <len1;i++)
    {
        s1[i]=0;
    }
    for(int i=0;i<max_val;i++)
    {
        s1[i]=s2[i];
    }
    s1[max_val]='\0';
    printf("%s\n",s1);
    return 0;
}
