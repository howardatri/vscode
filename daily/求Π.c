
#include <stdio.h>
#include <ctype.h>

int main(void) {
int n;
scanf("%d",&n);

double pai=1.0;
for(int i=1;i<=n;i++){
pai=pai*(2*i)/(2*i-1)*(2*i)/(2*i+1);

}
pai*=2.0;
printf("%.10lf",pai);

}

