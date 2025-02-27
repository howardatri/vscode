#include<stdio.h>
int judge(long long i);
int main(void){
    long long  n;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        if(judge(i))
        {
            printf("%lld ",i);
        }
    }
}
int judge(long long i){
long long t=i*i;
while(i!=0)
{
    if(i%10!=t%10)
    {
        return 0;
            }
i/=10;
t/=10;
}
return 1;

}