/*题目描述
有一个班级，有3名学生，各学4门课，查找有一门或一门以上课程不及格的学生，并输出他们的所有成绩。
输入
共四行。
前三行中，每行有四个用空格隔开的整数表示一个学生的成绩。保证输入的所有整数在0和100之间（包含0和100）。
输出
每一个有不及格情况的学生成绩一行，每个成绩之后输出一个空格。
请注意行尾输出换行。
样例输入
65 57 70 60
58 87 90 81
90 99 100 98
样例输出
65 57 70 60
58 87 90 81 */
#include <stdio.h>
#define student_NUM 3
struct StudentGrade
{
    int class1;
    int class2;
    int class3;
    int class4;
};
int main(void)
{
    struct StudentGrade students[student_NUM];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &students[i].class1);
        scanf("%d", &students[i].class2);
        scanf("%d", &students[i].class3);
        scanf("%d", &students[i].class4);
    }
        for (int i = 0; i < student_NUM; i++)
        {
            if (students[i].class1 < 60||students[i].class2 < 60||students[i].class3 < 60||students[i].class4 < 60)
            {
                printf("%d %d %d %d\n",students[i].class1,students[i].class2,students[i].class3,students[i].class4);
            }
        }
    return 0;
}
