#include <stdio.h>
#include <math.h>
int main(void) {
    double PI, PI_QUARTER;
    PI = (log(pow(5280.0, 3) * pow((236674.0 + 30303.0 * sqrt(61.0)), 3) + 477.0)) / sqrt(427.0);
    PI_QUARTER = 6 * atan(1.0 / 8.0) + 2 * atan(1.0 / 57.0) + atan(1.0 / 239.0);
    printf("%.15lf\n", PI);
    printf("%.15lf\n", PI_QUARTER);
    return 0;
}




#
/*
#include <stdio.h>
#include <math.h>
int main(void) {
    // 使用pow和log函数计算π
    double PI = (log(pow(5280, 3) * pow((236674 + 30303 * sqrt(61)), 3) + 477)) / sqrt(427.0);
    // 使用atan函数计算π的四分之一
    double PI_quarter = 4 * atan(1.0);
    // 输出结果，保留15位小数
    printf("π = %.15lf\n", PI);
    printf("π的四分之一 = %.15lf\n", PI_quarter / 4.0);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(void) {
    double PI,PI_QUARTER;
    PI = (log(pow(5280, 3) * pow((236674 + 30303 * sqrt(61)), 3) + 477)) / sqrt(427.0);
    PI_QUARTER = 6 * atan (1.0 / 8.0) + 2 * atan (1.0 / 57.0) + atan (1.0 / 239.0);
    printf("%.15lf\n", PI);
    printf("%.15lf\n", PI_QUARTER);
    return 0;
}

include <stdio.h>
#include <math.h>
int main(void) {
    double PI;
    PI=(log(pow(5280,3)*pow((236674+30303*sqrt(61)),3)+ 477 ))/ sqrt(427.0);
    double PI4;
    PI4=6*atan(1.0/8.0) +2*atan(1.0/57.0) + atan(1.0/239.0);

    printf("%.15lf\n",PI);
    printf("%.15lf\n",PI4);
    return 0;
}

*/