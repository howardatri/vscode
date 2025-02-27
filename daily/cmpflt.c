#include<stdio.h>
#include<math.h>
int main(void){
    const double ANSWER = 3.14159;
    double response;
    printf("what's value:\n");
    scanf("%lf",&response);
    while (fabs(response - ANSWER)>0.0001)
    {
        printf("try again!\n");
        scanf("%lf",&response);

    }
    printf("enough!\n");
    return 0;
}