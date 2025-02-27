#include<stdio.h>
char su(int x);
int main(void){
int i;
scanf("%d",&i);
printf("%c",su(i));

}

char su(int x){
    
    for(int i=2;i<x;i++){
        if((x%i)==0)
        return 'N';

    }
    return 'Y';
}