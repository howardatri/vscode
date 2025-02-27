#include<stdio.h>
int main() {
int n,a[100];
int i = 0;
for (i = 0; i < 100; i++)a[i] = 0;
scanf("%d", &n);
int length;
length = n - 1;
for(i=0;i<=length;i++){
scanf("%d", &a[i]);
}
for (i = 0; i <= length; i++) {
if (a[i] == 0) {
int k = i;
for (k=i; k < length; k++) {
if (a[k + 1] == 0) i--;
a[k] = a[k + 1];
}
a[k] = 0;
length--;
}
}
for (i = 0; i < n; i++) {
printf("%d", a[i]);
if (i < n-1)printf(" ");
}
return 0;
}
