#include<stdio.h>
int a[1001];
int main(){
    int n,s,m;
    scanf("%d %d %d",&n,&s,&m);
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    s--;//s也是0开始
    while(1){
        if(n==1){
            printf("%d",a[0]);
            break;
        }
    
    s=s+m-1;
    if(s>n-1)
    s=s%n;
   printf("%d ",a[s]);
   for(int i=s;i<n;i++){
    a[i]=a[i+1];
   }
   n--;
    }
}