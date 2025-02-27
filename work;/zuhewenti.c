//阶乘是关键
#include<stdio.h>
int main(void)
{
    int m,n,t;
    long long sum1=1,sum2=1,sum3=1;
    scanf("%d %d",&m,&n);
    if(m>0&&n>0){
   if(m<n){
   printf("0");
 
   }else if(m==n){
   printf("1");

   }else if (m>n){
    t=m-n;
    for(int i=1;i<=m-n;i++){
       sum1*=i;
        
    }
for(int i=1;i<=m;i++){
    sum2*=i;
}
for(int i=1;i<=n;i++){
    sum3*=i;
}
printf("%d",sum2/(sum1*sum3));
   }
    }else {
        printf("-1");}
   }

    
//学习如何阶乘


