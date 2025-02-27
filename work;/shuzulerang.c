
#include <stdio.h>

int main(void) 
{
int n;
double x;
scanf("%lf %d",&x,&n);
if(n==0){
printf("%d",1);
}else if(n==1){
printf("%lf",x);
}
else {
double p[n+1];  
p[0]=1;
p[1]=x;
for(int i =2;i<=n;i++){
    p[i]=(((2*i-1)*x*p[i-1])-((i-1)*p[i-2]))/i;
}
printf("%.2lf",p[n]);
}
}














