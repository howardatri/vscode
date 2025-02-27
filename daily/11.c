#include<stdio.h>
#include<math.h>
int main(void){
    int data;
    scanf("%d",&data);
    int i ;
    for(int i= 1  ; i<=data;i++)
    {
        if(i%11==0){
            printf("%d ",i);
        }
    }
}