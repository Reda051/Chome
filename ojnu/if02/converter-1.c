#include <stdio.h>
int main(void) {
    int n;
    int bai,shi,ge;
    scanf("%d",&n);
    bai=n/100;
    ge=n%10;
    shi=(n/10)%10;
    if (n<100) {
        if (n<=20) {
            switch (n) {
                case 0: printf("zero"); break;
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                case 10: printf("ten"); break;
                case 11: printf("eleven"); break;
                case 12: printf("twelve"); break;
                case 13: printf("thirteen"); break;
                case 14: printf("fourteen"); break;
                case 15: printf("fifteen"); break;
                case 16: printf("sixteen"); break;
                case 17: printf("seventeen"); break;
                case 18: printf("eighteen"); break;
                case 19: printf("nineteen"); break;
                case 20: printf("twenty"); break;
                default: break;
            }
        } else if (n > 20 && n % 10 != 0) {
            switch (shi) {
                case 2: printf("twenty-"); break;
                case 3: printf("thirty-"); break;
                case 4: printf("forty-"); break;
                case 5: printf("fifty-"); break;
                case 6: printf("sixty-"); break;
                case 7: printf("seventy-"); break;
                case 8: printf("eighty-"); break;
                case 9: printf(}
"ninety-"); break;
                default: break;
            }
            switch (ge) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                default: break;}
        } else if (n > 20 && n % 10 == 0) {
            switch (shi) {
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("forty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
                default: break;}
        }
    }   else if (n >= 100&&n%100!=0) {
        switch (bai) {
            case 1: printf("one hundred and "); break;
            case 2: printf("two hundred and "); break;
            case 3: printf("three hundred and "); break;
            case 4: printf("four hundred and "); break;
            case 5: printf("five hundred and "); break;
            case 6: printf("six hundred and "); break;
            case 7: printf("seven hundred and "); break;
            case 8: printf("eight hundred and "); break;
            case 9: printf("nine hundred and "); break;
            default: break;
        }
        if (n % 100 <= 20) {
            switch (n % 100) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                case 10: printf("ten"); break;
                case 11: printf("eleven"); break;
                case 12: printf("twelve"); break;
                case 13: printf("thirteen"); break;
                case 14: printf("fourteen"); break;
                case 15: printf("fifteen"); break;
                case 16: printf("sixteen"); break;
                case 17: printf("seventeen"); break;
                case 18: printf("eighteen"); break;
                case 19: printf("nineteen"); break;
                case 20: printf("twenty"); break;
                default: break;
            }
        } else if (n % 10 != 0 && n % 100 > 20) {
            switch (shi) {
                case 2: printf("twenty-"); break;
                case 3: printf("thirty-"); break;
                case 4: printf("forty-"); break;
                case 5: printf("fifty-"); break;
                case 6: printf("sixty-"); break;
                case 7: printf("seventy-"); break;
                case 8: printf("eighty-"); break;
                case 9: printf("ninety-"); break;
                default: break;
            }
            switch (ge) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                default: break;
            }
        } else if (n % 100 > 20 && n % 10 == 0) {
            switch (shi) {
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("forty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
                default: break;
            }
        }
    }else {
        switch (bai) {
            case 1: printf("one hundred"); break;
            case 2: printf("two hundred"); break;
            case 3: printf("three hundred"); break;
            case 4: printf("four hundred"); break;
            case 5: printf("five hundred"); break;
            case 6: printf("six hundred"); break;
            case 7: printf("seven hundred"); break;
            case 8: printf("eight hundred"); break;
            case 9: printf("nine hundred"); break;
            default: break;
        }
    }
    return 0;
}
