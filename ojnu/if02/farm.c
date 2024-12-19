#include <math.h>
#include "stdio.h"
int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (1<= a&&a<=10000 &&1<=b &&b<=10000 &&1<=c &&c<=10000 &&(a+b<=c||b+c<=a||a+c<=b)) {
        printf("not triangle");
    }else {
        if(pow(a,2)+pow(b,2)==pow(c,2)){
            printf("right triangle");
        }else{if(a==b && a==c) {
            printf("equilateral triangle");
        }else {
            if(pow(a,2)+pow(b,2)>pow(c,2)) {
                printf("acute ");
            }else {
                printf("obtuse ");
            }
            if((a==b||b==c||a==c)&&pow(a,2)+pow(b,2)!=pow(c,2)) {
                printf("isosceles ");
            }
            printf("triangle");

        }
        }
    }
    return 0;
}
        /*
        //printf("not triangle");
    }else {
        if (a==b==c) {
            printf("equilateral triangle");
        }
        if(pow(a,2)+pow(b,2)==pow(c,2)||
                (pow(a,2))+pow(c,2)==pow(b,2)||
                (pow(c,2))+pow(b,2)==pow(a,2)){
            printf("right triangle");
                }
        if(pow(a,2)+pow(b,2)>pow(c,2)||
              (pow(a,2))+pow(c,2)>pow(b,2)||
              (pow(c,2))+pow(b,2)>pow(a,2)) {
            printf("acute ");
              }else {if(pow(a,2)+pow(b,2)<pow(c,2)||
                       (pow(a,2))+pow(c,2)<pow(b,2)||
                       (pow(c,2))+pow(b,2)<pow(a,2)) {
                  printf("obtuse ");
                       }
              }
        if(a==b||b==c||a==c) {printf("isosceles triangle");
        }else {printf("triangle");
        }
    }
    return 0;
  }
  */
