#include <stdio.h>
typedef struct {
    int id;
    int scores[5];
} Student;
void ClassAvg(Student students[], int n);
void Nopass(Student students[], int n);
void Excellent(Student students[], int n);
int main(void) {
    Student students[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &students[i].id);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].scores[j]);
        }
    }
    ClassAvg(students, 4);
    Nopass(students, 4);
    Excellent(students, 4);
    return 0;
}
void ClassAvg(Student students[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += students[i].scores[0];
    }
    printf("%.2f\n", total / n);
}
void Nopass(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        int failCount = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].scores[j] < 60) {
                failCount++;
            }
        }
        if (failCount >= 2) {
            double avg = 0;
            for (int j = 0; j < 5; j++) {
                avg += students[i].scores[j];
            }
            avg /= 5.0;
            printf("%d", students[i].id);
            for (int j = 0; j < 5; j++) {
                printf(" %d", students[i].scores[j]);
            }
            printf(" %.2f\n", avg);
        }
    }
}
void Excellent(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        double avg = 0;
        int allAbove85 = 1;
        for (int j = 0; j < 5; j++) {
            avg += students[i].scores[j];
            if (students[i].scores[j] < 85) {
                allAbove85 = 0;
            }
        }
        avg /= 5.0;
        if (avg >= 90 || allAbove85) {
            printf("%d ", students[i].id);
        }
    }
    printf("\n");
}
