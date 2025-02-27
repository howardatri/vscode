#include<stdio.h>
int main() {
int n, a[100];
int i = 0;
for (i = 0; i < 100; i++)
a[i] = 0;
scanf("%d", &n);
int length;
length = n - 1;
for (i = 0; i <= length; i++) {
scanf("%d", &a[i]);
}

//以下开始判断是否重复 利用循环结构 遇到相等的 前移 并且 length -1
int j, k;
for (i = 0; i <= length; i++) {
for (j = i+1; j <= length; j++) {
if (a[j] != a[i]) {
continue;
}
else {
for (k = j; k <= length; k++) {
a[k] = a[k + 1];
//printf("- ");
}
length--;
}
if (a[i] == a[i + 1]) j--;
}
}
// for (i = 0; i <= length; i++) {
// for (j = i + 1; j <= length; j++) {
// if (a[j] != a[i]) {
// continue;
// }
// else {
// for (k = j; k <= length; k++) {
// a[k] = a[k + 1];
// //printf("- ");
// }
// length--;
// }
// if (a[i] == a[i + 1]) j--;
// }
// }
for (i = 0; i <= length; i++) {
printf("%d", a[i]);
if (i <= length - 1)printf(" ");
}
return 0;
}
