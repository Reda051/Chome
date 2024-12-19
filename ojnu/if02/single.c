#include <stdio.h>
int main(void){
    long int n;
    int j;
    int size[1000005]={0};
    scanf("%d",&n);
    for(long int i = 0 ; i < (2*n-1) ; i++){
        scanf("%d",&j);
        size[j]=size[j]+1;
    }
    for (long int i = 0 ; i <1000000 ; i++){
        if(size[i]==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}









/*
//n 个整数中有n−1个整数都成双成对（出现了两次），却有1个整数落单（只出现了一次），请找出那个落单的整数。
//已知三种解法
//输入包含两行，第一行为一个正整数n,1⩽n⩽10e5。
//第二行包含2n-1个正整数，1<=x<=10*n,空格开
/*第一种双重循环
#include <stdio.h>
int main(void) {
    int n,single = 0;
    scanf("%d",&n);
    if( n>=1 && n<=1e5 ) {
        int size = 2*n - 1;
        int num[size];
        for(int i =0 ; i < size;i++) {
            scanf("%d",&num[i]);
        }
        for(int i = 0;i< size ;i++) {
            int count = 0;
            for(int j = 0;j <size;j ++) {
                if (num[i] == num[j]) {
                    count++;
                }
            }
            if(count == 1){
                single = num[i];
                break;
                }

            }
        printf("%d",single);
}
    return 0;
    }
#1#

/*
#include <stdio.h>
void bucket() {
    int arr[];
    int n;
    int min_val = arr[0];
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {min_val = arr[i];}
        if (arr[i] > max_val) {max_val = arr[i];}
    }
    int bucketsize = 2;
    int bucketcount = (max_val - min_val) / bucketsize + 1;
    int buckets[bucketcount][n];
    int bucketsizes[bucketcount];
    for (int i = 0; i < bucketcount; i++) {
        bucketsizes[i] =0;
    ]
        for(int i = 0;i <n;i++) {
    int index = (arr[i]- min_val)/ bucketsize;
            buckets[index][bucketsizes[index]]= arr[i];
            bucketsizes[index]++;
        }
        #1#

/*第三种XOR
#include <stdio.h>
int XOR(void) {
    int nums,size,i;
    for(i=0;i<size;i++) {

    }
    return 0;
}
#1#

#include <stdio.h>

int main(void) {
    int n, single = 0;
    int nums[100]; // 假设最多100个数字
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count == 1) {
            single = nums[i];
            break;
        }
    }

    printf("%d\n", single);
    return 0;
}
*/









