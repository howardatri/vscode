//涉及？的用法
//e1 ? e2:e3
#include<stdio.h>
#define COV 350
int main(void){
int feet;
int cans;
printf("pls input the num of sqr feet painted:\n");
while(scanf("%d",&feet)==1){
    cans=feet/COV;
    cans+=((feet%COV==0))?0:1;
    printf("you need %d %s of paint\n",cans,
    cans==1?"can":"cans");
    printf("enter next value(q to quit):\n");

}
return 0;
}