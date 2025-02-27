#include<stdio.h>
int main(void){
    int n,zero=0;
    scanf("%d",&n);
    int a[101];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            zero++;
        }else
        printf("%d ",a[i]);
    }
    for(int i=0;i<zero;i++){
        printf("%d",0);
        if(i<zero-1){
            printf(" ");
        }
    }
        
    
}