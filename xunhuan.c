#include<stdio.h>

int main() {

int a[100], n, j, i;

scanf("%d %d", &n, &j);

for (i = 0; i < n; i++)scanf("%d", &a[i]);

if (j > n) j %= n;

for (i = (n - j); i < n; i++) {

printf("%d ", a[i]);

}

for (i = 0; i < n - j; i++) {

printf("%d", a[i]);

if (i < n - j-1)printf(" ");

}

}

