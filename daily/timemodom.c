#include<stdio.h>
#include<math.h>
int main(void){
    int secs;
    printf("pls input secs:\n");
    scanf("%d",&secs);
    int sec,min;
    min = secs/60;
    sec = secs%60;
    printf("the secs = %d,turns into %d min %d sec\n",secs,min,sec);
}