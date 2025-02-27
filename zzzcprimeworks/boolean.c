#include<stdio.h>
int main (void){
    long num;
    long sum = 0L;
    _Bool inp;
    printf("pls input an int to be summed:");
    printf("(q to quit)");
    inp = (scanf("%ld",&num)==1);
    while(inp)
    {
        sum = sum + num;
        printf("pls inptu next int(q to quit):");
        inp = (scanf("%ld",&num)==1);
    }
printf("sum to be %ld\n",sum);
}