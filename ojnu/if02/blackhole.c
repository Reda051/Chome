#include <stdio.h>
int main(void) {
    int n,a,b,c,new_n,det,maxx,minn;
    int max_val,mid_val,min_val,sum = 0;
    scanf("%d",&n);
    if (n> 0 && n <=999&& n/ 100!= n % 10 && (n / 10) % 10 != n / 100 && (n / 10) % 10 != n % 10) {
        while (n!=495) {a = n /100;b = (n / 10) % 10;c = n % 10;
            if (a>= b&& a >= c) {max_val = a;
                if (b >=c) {mid_val = b;min_val = c;}
                else {mid_val =c;min_val=b;}
            } else if (b>=a&&b>=c) {max_val=b;
                if (a>=c) {mid_val=a;min_val=c;}
                else {mid_val=c;min_val=a;}}
            else {max_val=c;
                if (a>= b) {mid_val=a;min_val=b;
                } else {mid_val=b;min_val=a;
                }
            }
            maxx=max_val*100+mid_val*10+min_val;
            minn=min_val*100+mid_val*10+max_val;
            new_n=maxx-minn;
            det=n-new_n;
            if (det>0) {
                sum+=det;
            }
            n=new_n;
        }
    }
    printf("%d\n",sum);
    return 0;
}
















/*#include <stdio.h>
int main(void) {
    int n, a, b, c;
    scanf("%d", &n);
    int sigma= 0;
    if ((n / 100!= (n / 10) % 10) && (n / 100 != n % 10) && ((n / 10) % 10 != n % 10)) {
        for (;;) {
            a=n/100;
            b=(n/10)%10;
            c=n%10;
            int arr[3] ={a, b, c};
            int max_val =arr[0];
            int min_val =arr[0];
            int mid_val =arr[0];
            for (int i = 1; i < 3; i++) {
                if (arr[i]> max_val) { max_val = arr[i]; }
                if (arr[i]< min_val) { min_val = arr[i]; }
            }
            for (int i = 0; i < 3; i++) {
                if (arr[i] != max_val && arr[i] != min_val) {mid_val = arr[i];break; }
            }
            int maxn = max_val * 100 + mid_val * 10 + min_val;
            int minn = min_val * 100 + mid_val * 10 + max_val;
            int newn = maxn - minn;
            if ((n - newn) > 0) {
                sigma += n - newn;
                n = newn;
            }
            if (n == 495) {break;}
        }
    }
    printf("%d\n", sigma);
    return 0;
}*/