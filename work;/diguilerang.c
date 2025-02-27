#include <stdio.h>



double f(double x, int n) {

    if (n == 0) {

        return 1;

    }

    else if (n == 1) {

        return x;

    }

    else {

        return ((2 * n - 1) * x * f(x, n - 1) - (n - 1) * f(x, n - 2)) / n;

    }

}



int main(void) {

    double x, y;

    int n;

    scanf("%lf %d", &x, &n);

    y = f(x, n);

    printf("%.2lf", y);

    return 0;

}