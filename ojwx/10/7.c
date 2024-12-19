#include <stdio.h>
int main(void)
{
    int a[3][4]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int i,j;
    scanf("%d %d",&i,&j);
    if(i>=0&&i<3&&j>=0&&j<4)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}
