#include <stdio.h>
#include <string.h>
char StringR(char *str1,char *str2);

int main(void)
{
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    strcspn('\0',str1);
    StringR(str1,str2);
    int len1=strlen(str1);
    str2[len1]='\0';
    printf("%s",str2);
    return 0;
}

char StringR(char str1[],char str2[])
{
    int len1=strlen(str1);
    for(int i=0;i<len1;i++)
    {
        str2[i]=str1[len1-i-1];
    }
    return str2[len1];
}
