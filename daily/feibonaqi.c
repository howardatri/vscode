#include<stdio.h>

int main(void){
    int i,k,n;
    scanf("%d",&n);
    i = 1;
    k = 1;
    for(n=1;n<=20;n++)
    {

i=i+k;
k=i+k;

    
printf("%d %d\n",i,k);
    }
}