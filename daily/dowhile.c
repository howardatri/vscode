#include <stdio.h>
int main(void){
    int i,k;
    k = 234;
    printf("guess kid \n:");
    scanf("%d",&i);
   
   do{
    i = i + 1 ;
printf("%d\n",i);
   }while(i<k);



    printf("KID WELL DONE.it's %d\n",i);
}
