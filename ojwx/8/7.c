 #include <stdio.h>
double Average(double arr[],double h);
int main(void) {
 int n,m;
 scanf("%d %d",&n,&m);
 if(n<=50 && m<=50) {
   double arr[n],arr2[m];
  for(int i=0;i<n;i++) {
   scanf("%lf",&arr[i]);
  }
  for(int i=0;i<m;i++) {
   scanf("%lf",&arr2[i]);
  }
  double ans=Average(arr,n);
  double ans2=Average(arr2,m);
  printf("%.2lf %.2lf",ans,ans2);
 }

 return 0;
}
double Average(double arr[],double h) {
 double sum=0;
 double avg=0;
 for(int i=0;i<h;i++) {
  sum+=arr[i];
  avg=sum/h;
 }
 return avg;
}