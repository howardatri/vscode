#include <stdio.h>
#include <math.h>
void main()
{
    float x1,x2,b,d;
    float length,width,area;
    printf("please input length width area:\n");
    scanf("%f %f %f",&length,&width,&area);
    b = -2.0*(length+width);
    d = sqrt(b*b - 4.0*4.0*(length*width-area));
    x1 =(-b+d)/(2*4);
    x2 =(-b-d)/(2*4);
    printf("x1=%.2f\n x2=%.2f\n",x1,x2);
}