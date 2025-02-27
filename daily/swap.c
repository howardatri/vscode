#include <stdio.h>

void swap(int *a,int *b);

int main(void)
{
     int x,y;
     scanf("%d %d",&x,&y);

    swap(&x,&y);
    printf("x is %i,y is %i\n",x,y);

}
void swap(int *a,int *b)
{
    int tmp =*a;
    *a = *b;
   *b = tmp;
}