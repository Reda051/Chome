#include <stdio.h>
#include <ctype.h>
int main(void) {
    int pre;
    double frac,factor;
    char name[21],unit;
    scanf("%20s %d %lf %lf %c",&name,&pre,&frac,&factor,&unit);
    char new_unit=toupper(unit);
    double conv = (pre + frac) * factor;
    double sciEexp =pre + frac;
    printf("%.2s: %d (%.5lf) | %2.5e %.5lf %c\n",name,pre,frac,sciEexp,conv,new_unit);
    return 0;
}
/*
    scanf("%20s %d %lf %lf %c",&name, &pre, &frac, &factor, &unit);
    double sciEexp = pre + frac;
    double conv = sciEexp * factor;
    printf("%s: %d (%.5f) | %s %.5f %c\n", name, pre, frac, sciEexp, conv, toupper(unit));
    return 0;
}

/*
#include<stdio.h>
int main(void) {
    const char name,unit;
    int pre;
    double frac,factor;
    scanf("(%s %d %lf %lf %c)",&name,&pre,&frac,&factor,&unit);
    double sciEexp = pre + frac;
    double conv =(pre + frac)* factor;
    char new_unit = unit - 32;
    printf("%.2s. %d (%.5lf) %9.5lE %.5lf %c",name,pre,frac,sciEexp,conv,new_unit);
    return 0;
}





*/
// Created by reda on 24-10-4.
//
