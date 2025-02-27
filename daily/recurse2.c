#include<stdio.h>
int main(void){
    char x;
    int i;
    for(x='A';x<='F';x++){

    for(i=1;i<=(5-(x-'A'))*2;i++)
    printf(" ");
    for(i=1;i<=2*(x-'A')+1;i++)
    printf("%c",x);
    printf("\n");
    }
    for(x='E';x>='A';x--){
        for(i=1;i<=(5-(x-'A'))*2;i++)
        printf(" ");
        for(i=1;i<=2*(x-'A')+1;i++)
        printf("%c",x);
    printf("\n");

    }

    }

