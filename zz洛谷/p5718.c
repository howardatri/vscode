#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=1;
    for(int i=0;i<n;i++){
        if(a[i]==0){printf("0");
        break;}
        else
       {
        if(a[i]<a[i+1])
        min=a[i];
       }
    }
    printf("%d",min);
}