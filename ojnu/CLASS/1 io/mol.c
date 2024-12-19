//
// Created by reda on 24-10-3.
//
#include "stdio.h"
#include <math.h>
int main(void) {
    const double MOL = 6.02E23;
    const int gram_per_mol = 32.0;
    int mass = 6.0;
    double quantity = 1.0 * mass / gram_per_mol *MOL ;
    printf("quantity = %.3e\n quantity = %5.g\n",quantity,quantity);
    //科学技术法用%e表示，是指数的含义，用小数点后保留三位还是精度。
    //保留五位有效数字，%.5g，g是有效数字？复杂
    //%g，%d，%f看手册
    //1.0把数据运算改成小数，不再是保留在整数内。要*1.0
    return 0;
}

