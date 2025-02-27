//0°C 以下的天气数
#include<stdio.h>
int main (void){
const int FREEZ=0;
float temp;
int coldday=0;
int allday=0;
printf("input list day low temperture:\n");
printf("using celsius,enter q to quit\n");
while(scanf("%f",&temp)==1)
{

    allday++;
    if(temp<FREEZ)
    coldday++;
}
if(allday!=0)
printf("%d days total:%.1f%% were freezing\n",
allday,100.0*(float)coldday/allday);
if(allday==0)
printf("no data in!\n");
return 0;

}