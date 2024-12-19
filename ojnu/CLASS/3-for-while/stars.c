//
// Created by reda on 24-10-12.
//
#include <stdio.h>

void PrintChar(char ch , int count,int lines);

int main (void) {
    int lines=0;
    scanf("%d",&lines);
    for (int i=0;i<lines;i++) {
        PrintChar('\n',lines,i);

}

void PrintChar(char ch , int count,int lines) {
    for(int i = 0;i<lines;i++){
        for(int j = 0;j<lines-1-i;++j) {
            printf(" ");
        }
        for(int j = 0;j<2*i +1;++j) {
            printf("*");
        }
        if(i <lines-1) {
            printf("\n");
        }
    }
}