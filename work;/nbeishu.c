#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define X 200
void sort(int* a, int l);
int main(){
 int num[X], n;
 int f=0, a[X];
 for (n = 0; n < X; n++)
 num[n] = 0;
 scanf("%d", &n);
 if (n != 0) {
 int j;
 while (scanf("%d", &num[0])) {
 j = 0;
 if (num[0] == 0 || n == 0) {
 a[f] = 0;
 f++;
 }
 else
 {
 if (num[0] == -1) break;
 for (j = 1; j < X; j++) {
 scanf("%d", &num[j]);
 if (num[j] == 0)break;
 }
 sort(num, j);
 int sum = 0;
 for (int i = 1; i < j; i++) {
 for (int k = 0; k < i; k++) {
 if (num[i] / num[k] == n && num[i] % num[k] == 0)
  sum++;
 }
 }
 a[f] = sum;
 f++;
 }
 }
 for (int g = 0; g < f; g++) {
 printf("%d", a[g]);
 if (g < f - 1)printf("\n");
 }
 }
 else printf("%d", 0);
 return 0;
}
void sort(int* a, int l)//a为数组地址，l为数组长度。
{
 int i, j;
 int v;
 //排序主体
 for (i = 0; i < l - 1; i++)
 for (j = i + 1; j < l; j++)
 {
 if (a[i] > a[j])//如前面的比后面的大，则交换。
 {
 v = a[i];
 a[i] = a[j];
 a[j] = v;
 }
 }
}
