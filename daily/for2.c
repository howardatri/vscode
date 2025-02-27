#include <stdio.h>
#define n 4
#define p 50
int main(void)
{
    float sum;
    int k,m,i;
    for(i=1;i<=p;i++)
    {
        sum = 0;
        k = 1;
        do{
            printf("inputNo%2d-%2d achieve:",i,k);
            scanf("%d",&m);
            sum = sum +m;
            k = k +1;

         } while(k <=n);
printf("No%2d: aver: %5.2f\n", i , sum/n);

    }
}