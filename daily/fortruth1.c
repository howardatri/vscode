#include<stdio.h>
int main(void){
    int n;
   scanf("%d",&n);
    while(n)
    printf("%2d is true\n",n--);
    printf("%2d is false\n",n);

}