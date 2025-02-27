#include <stdio.h>
#include <math.h>
int main(void)
{
float a,b,c,delta;
printf("please set a b c\n");
scanf("%f%f%f",&a,&b,&c);
if(a!=0){
delta = b*b-4*a*c;
if(delta>0)
printf("x1=%f,x2=%f",(-b+sqrt(delta))/(2*a));
else
if(delta==0)
printf("x1=x2=%f",-b/2*a);
else
printf("x1=%f+%fi,x2=%f-%fi",-b/(2*a),(-b+sqrt(-delta))/2*a);

}
if (b!=0)
printf("x=%f\n",-c/b);
else
if(c==0)
printf("0=0");
else 
printf("%f",c);
}
