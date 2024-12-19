#include <stdio.h>
#define STUDENT_NUM 10
#define COURSE_NUM 5
void stu_avg (double grade[][STUDENT_NUM]);
void cou_avg (double grade[][STUDENT_NUM]);
void highest (double grade[][STUDENT_NUM]);
void variance (double grade[][STUDENT_NUM]);
int main(void) {
    double grade[COURSE_NUM][STUDENT_NUM];
    for (int i = 0; i < COURSE_NUM; i++) {
        for (int j = 0; j < STUDENT_NUM; j++) {
            scanf("%lf", &grade[i][j]);
        }
    }
    stu_avg(grade);
    cou_avg(grade);
    highest(grade);
    variance(grade);
    return 0;
}
void stu_avg (double grade[][10]) {
    double sum[STUDENT_NUM] = {0};
    for(int i =0;i<STUDENT_NUM;i++) {
        for(int j =0;j<COURSE_NUM;j++) {
            sum[i]+=grade[j][i];
        }
    }
    for (int i = 0; i < STUDENT_NUM; i++) {
        printf("%.2lf ", sum[i] / COURSE_NUM);
    }
    printf("\n");
}

void cou_avg (double grade[][STUDENT_NUM]) {
    double sum[COURSE_NUM] = {0};
    for(int i =0;i<COURSE_NUM;i++) {
        for(int j =0;j<STUDENT_NUM;j++) {
            sum[i]+=grade[i][j];
        }
    }
    for (int i = 0; i < COURSE_NUM; i++) {
        printf("%.2lf ", sum[i] / STUDENT_NUM);
    }
    printf("\n");
}
void highest (double grade[][10]) {
    double max = grade[0][0];
    int maxStudent = 0, maxCourse = 0;
    for (int i = 0; i < COURSE_NUM; i++) {
        for (int j = 0; j < STUDENT_NUM; j++) {
            if (grade[i][j] > max) {
                max = grade[i][j];
                maxCourse = i;
                maxStudent = j;
            }
        }
    }
    printf("%.2lf %d %d\n",max,maxCourse,maxStudent);
}
void variance(double grade[][10]) {
    double sum[STUDENT_NUM] = {0};
    double avg[STUDENT_NUM] = {0};
    for (int i = 0; i < STUDENT_NUM; i++) {
        for (int j = 0; j < COURSE_NUM; j++) {
            sum[i] += grade[j][i];
        }
        avg[i] = sum[i] / COURSE_NUM;
    }
    double overall_avg = 0;
    for (int i = 0; i < STUDENT_NUM; i++) {
        overall_avg += avg[i];
    }
    overall_avg /= STUDENT_NUM;

    double variance_sum = 0;
    for (int i = 0; i < STUDENT_NUM; i++) {
        variance_sum += (avg[i] - overall_avg) * (avg[i] - overall_avg);
    }

    double variance_result = variance_sum / STUDENT_NUM;
    printf("%.2lf\n", variance_result);
}
