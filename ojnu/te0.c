#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_STRINGS 129
#define MAX_STRING_LENGTH 1025
int require_parameter(char first[], int length, char bejudgeed) {
    int parameter_value_position[MAX_STRING_LENGTH]={0};int p=0;
    for(int i=0;i<length;i++) {
        if(first[i]==':'){parameter_value_position[p]=i-1;p++;}
    }
        for(int j=0;j<p;j++) {
            if(bejudgeed==first[parameter_value_position[j]]) {
                return 1;
            }
        }
    return 0;
}
int isletter(char string[MAX_STRING_LENGTH][MAX_STRING_LENGTH],int point) {
    if((string[point][1]>='a'&&string[point][1]<='z')||(string[point][1]>='A'&&string[point][1]<='Z')) {
        return 1;
    }
    return 0;
}
int main(void) {
    char strings[MAX_STRINGS][MAX_STRING_LENGTH];
    int count = 0;
    char input[1000];
    char firstline[MAX_STRING_LENGTH]={'\0'};
    scanf("%s",firstline);getchar();
    scanf(" %[^\n]%*c", input);
    getchar();
    bool valid=true;bool require=true;
    int pointer=0;
    int m=0;int n=0;int t=0;
    int len1=strlen(firstline);
    int parameter_value_position[MAX_STRINGS]={0};
    char *token = strtok(input, " ");
    while (token != NULL && count < MAX_STRINGS) {
        strncpy(strings[count], token, MAX_STRING_LENGTH - 1);
        strings[count][MAX_STRING_LENGTH - 1] = '\0';
        count++;
        token = strtok(NULL, " ");
    }
printf("%s",strings[0]);
    for(int i=1;i<count;i++) {
        if((strings[i][0]=='-')&&((strings[i][1]>='a'&&strings[i][1]<='z')||(strings[i][1]>='A'&&strings[i][1]<='Z'))&&(strlen(strings[i])==2)) {
            char *ptr=strchr(firstline,strings[i-1][1]);
            if(strchr(firstline,strings[i][1])==NULL) {if(i>1){
                if(ptr==NULL||(firstline[ptr-&firstline[0]+1]!=':')) {
                    valid=false;m=i;break;}
                else continue;
                }if(i==1){valid=false;printf(": invalid option -- '%c'",strings[i][1]);return 0;}
            }
        }
    }
    if(valid==false){printf(": invalid option -- '%c'",strings[m][1]);return 0;}
    for(int i=0;i<len1;i++) {
        if(firstline[i]==':') {
            parameter_value_position[n]=i-1;n++;
        }
    }
    for(int i=1;i<count;i++) {
        for(int j=0;j<=len1;j++) {
            if(strings[i][0]=='-'&&((strings[i][1]>='a'&&strings[i][1]<='z')||(strings[i][1]>='A'&&strings[i][1]<='Z'))&&strlen(strings[i])==2) {
               if(strings[i][1]==firstline[parameter_value_position[j]]) {
                   if(i+1>=count) {
                       require=false;t=i;break;
                   }
               }
            }
        }
    }
    if(require==false){printf(": option requires an argument -- '%c'",strings[t][1]);return 0;}
    if(valid==true&&require==true) {
        if(count==1){printf("\n");}
        else if(count>1) {
            pointer=1;
            for(int pointer=1;pointer<count;) {if(((strings[pointer][0]=='-')&&(isletter(strings,pointer))&&(strlen(strings[pointer])==2))&&(require_parameter(firstline,len1,strings[pointer][1])))
            {pointer=pointer+2;
            }
            else if(((strings[pointer][0]=='-')&&(isletter(strings,pointer))&&(strlen(strings[pointer])==2))&&(require_parameter(firstline,len1,strings[pointer][1])==0))
            {if(strchr(firstline,strings[pointer][1])==NULL){printf(": invalid option -- '%c'",strings[pointer][1]);return 0;}//得看看这个不需要参数解释的出没出现过
            else if(strchr(firstline,strings[pointer][1])!=NULL) {pointer=pointer+1;}
            }
            }
            for(int pointer=1;pointer<count;) {
                if(((strings[pointer][0]=='-')&&(isletter(strings,pointer))&&(strlen(strings[pointer])==2))&&(require_parameter(firstline,len1,strings[pointer][1])))
                    {printf("\n%c=%s",strings[pointer][1],strings[pointer+1]);
                    pointer=pointer+2;
                }
                else if(((strings[pointer][0]=='-')&&(isletter(strings,pointer))&&(strlen(strings[pointer])==2))&&(require_parameter(firstline,len1,strings[pointer][1])==0))
                    {if(strchr(firstline,strings[pointer][1])!=NULL) {printf("\n%c",strings[pointer][1]);}
                    pointer=pointer+1;
                }
                else pointer++;
            }
        }
    }
    return 0;
}