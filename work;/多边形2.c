#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double d(double x1, double y1, double x2, double y2);
int main() {
int n,j;
double sum=0;
double x[10], y[10];
for (j = 0; j < 10; j++) {
x[j] = y[j] = 0;
}
scanf("%d", &n);
for (j=0; j <n; j++) {
scanf("%lf %lf", &x[j], &y[j]);
}
for (j = 0; j < n - 1; j++) {
sum += d(x[j], y[j], x[j + 1], y[j + 1]);
}
if(n>2)sum += d(x[0], y[0], x[j], y[j]);
printf("%.2lf", sum);
return 0;
}
double d(double x1, double y1, double x2, double y2 ) {
double result;
result = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)* (y2 - y1));
return result;
}
