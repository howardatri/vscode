#include<stdio.h>
int main(void){
    int i=1;
    printf("%p",&i);

    int ptr,val;
    ptr =22;
    int *temp =&ptr;
    val = *temp;
    printf("val is%d\n",val);
    
}