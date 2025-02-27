#include<stdio.h>
int main (void){
    long long i;
scanf("%lld",&i);
int n;
long long x=0l;
if(i>=0){
while(i>0){
    n=i%10;
    x=x*10+n;
    i/=10;
}
printf("%lld",x);
}else 
printf("NULL");

}
//我没想出来用i*10+i来进位存储倒过来的位数，反而用循环，搞得很复杂，涉及数组’不过也有用到数组的时候，比如700-007这种
//这是本题的关键
// 要变成007
//在%10前输出n，最后不输出结果即可 =----这样是相当于执行了三次 即0 0 7 不分行不空格输出在while里依次输出
