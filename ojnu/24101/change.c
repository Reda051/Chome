//
// Created by reda on 24-10-4.
//
#include <stdio.h>
int main (void) {
    int yuan,fif,twt,ten,fiv,one;
    scanf("%d",&yuan); //这个&是罪魁祸首，写入地址
    if(yuan>=0||yuan<=10000) {
        fif=yuan/50;
        yuan=yuan-50*fif;
        twt=yuan/20;
        yuan=yuan-20*twt;
        ten=yuan/10;
        yuan=yuan-10*ten;
        fiv=yuan/5;
        yuan=yuan - 5*fiv;
        one=yuan/1;
        printf("%d\n",fif);
        printf("%d\n",twt);
        printf("%d\n",ten);
        printf("%d\n",fiv);
        printf("%d\n",one);
    }
    return 0;
}