//
// Created by reda on 24-10-2.
//
#include "stdio.h"
int main(void) {
    int radius = 10;
    double circumference = 2 *3.14159 * radius;
    double area = 3.14159 * radius *radius;//double类型用%f或者%lf吧？
    printf("radius = %d\n circumference = %f\n area= %f",radius,circumference,area);
    小数点后保留————%f默认保存小数点后六位，两位的话就是%.2f;  .2不是小数点的含义，  .2: %f：的精度
    double类型表示的是小数点后的位数
    不要用_开头，会和c语言本身的标准所冲突
    f:format 格式化字符串——普通字符abcd =；%d就是占字符一类的东西要求是整数！！！
    取一个有意义的名字，不要让自己看不懂
    return 0;
}
