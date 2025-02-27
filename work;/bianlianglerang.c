#include<stdio.h>
int main(void){
int n,i;
float x,r1,r2,r;
scanf("%f %d",&x,&n);
if(n==0)
r=1;
else{
if(n==1)
r=x;
else{
    r1=1;
    r2=x;
    for(i=2;i<=n;i++){
        r=(2*i-1)*x*r2/i-(i-1)*r1/i;
        r1=r2;
        r2=r;
    }
}
}
printf("%.2f",r);



}