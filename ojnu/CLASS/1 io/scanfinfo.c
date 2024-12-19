#include <stdio.h>
#include <math.h>
int main(void) {
    char first_name[10];
    char last_name[10];
    char gender;
    //单个字符要用单引号才可以
    int birth_year,birth_month,birth_day;
    char weekday [10];
    int c_source,music_score,medicine_score;
    double mean = (c_source + music_score +medicine_score) / 3.0;
    double sd = sqrt(pow(c_source,2)+pow(music_score,2)+pow(medicine_score,2)/3.0);
    //sqrt开根号，属于math.h内的函数,cbrt立方根，同样是math.h内的文件.
    int rank;
    scanf("%s%s"
        ,&first_name,&last_name);
    format 格式化字符串
    数组名代表地址，char，int等变量取地址要加&
        在scanf中谨慎加-， 空格等字符
    空格也属于一个字符。
    7-7-7,scanf中有%d-%d-%，那么用户输入的时候也要按照这种格式！！！
    字符数组不需要加&！！！！！！
    mean,sd都是double类型，scanf中要用%lf来匹配
    %*lf,*意味着输入但是不保存。
    %9s,9代表识别字符的时候最多只有九个字符。[10]有一个给\0..........
    %[*][width]specifier
    %d __int
    %lf double
    %c do not skip white-spaces
    %s 字符串
     %s string
     %c characte
    printf("%s\t%s\t%c\n"
        "%.2d-%.2d-%.4d\t%.3s.\n"
        "%d\t%d\t%d\n"
        "%.1f\t%.2f%d%%\n",
        first_name,last_name,/*toupper*/(gender)
        ,birth_month,birth_day,birth_year,weekday);
return 0;
}