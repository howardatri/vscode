#include<stdio.h>
int main(void){
int i=0;
float x,re=1.0,item=1.0;
scanf("%f",&x);
while(i<=99){
i++;
item=item*x/i;
re+=item;

}
printf("%.2f",re);

}