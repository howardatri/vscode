#include<stdio.h>
void Selection_Sort(int arr[10]);
void Bubble_Sort(int arr[10]);
void Insert_Sort(int arr[10]);
void Subsequence_Sort(int arr[10]);
int main() {
 int a[10] = { 0,0,0,0,0,0,0,0,0,0 };
 int b[10] = { 0,0,0,0,0,0,0,0,0,0 };
 int c[10] = { 0,0,0,0,0,0,0,0,0,0 };
 for (int n = 0; n < 10; n++) {
 scanf("%d", &a[n]);
 c[n] = b[n] = a[n];
 }
 Selection_Sort(a);
 printf(" ");
 Bubble_Sort(b);
 printf(" ");
 Subsequence_Sort(c);
}
void Selection_Sort(int arr[10]) {
 int lenght, minIndex, temp, i, j;
 int Comparison_times = 0, Move_times = 0;
 //lenght = sizeof(arr) / sizeof(arr[0]);
 for (i = 0; i < 10 - 1; i++) {
 minIndex = i;
 for (j = i + 1; j < 10; j++) {
 if (arr[j] < arr[i])minIndex = j;
 Comparison_times++;
 }
 temp = arr[i];
 arr[i] = arr[minIndex];
 arr[minIndex] = temp;
 Move_times++;
 }
 printf("%d %d", Comparison_times, Move_times);
 //for (i = 0; i < 10; i++)printf("%d", arr[i]);
}
void Bubble_Sort(int arr[10]) {
 int lenght, temp, i, j;
 int Comparison_times = 0, Move_times = 0;
 //lenght = sizeof(arr) / sizeof(arr[0]);
 for (i = 0; i < 10 - 1; i++) {
 int  flag = 0;
 for (j = 0; j < 10 - 1-i; j++) {
 if (arr[j] > arr[j + 1]) {
 temp = arr[j + 1];
 arr[j + 1] = arr[j];
 arr[j] = temp;
 Move_times++;
 flag = 1;
 }
 //Comparison_times++;
 }
 if (!flag)
 break;
 }
 Comparison_times = (i + 1) * 9;
 printf("%d %d", Comparison_times, Move_times);
 //for (i = 0; i < 10; i++)printf("%d", arr[i]);
}
void Insert_Sort(int arr[10]) {
 int lenght, temp, i, j;
 int Comparison_times = 0, Move_times = 0;
 int preIndex;
 for (i = 1; i < 10; i++) {
 preIndex = i - 1;
 temp = arr[i];
 while (preIndex >= 0 && arr[preIndex] > temp) {
 Comparison_times++;
 arr[preIndex + 1] = arr[preIndex];
 preIndex--;
 }
 arr[preIndex + 1] = temp;
 Move_times++;
 }
 printf("%d %d", Comparison_times, Move_times);
 //for (i = 0; i < 10; i++)printf("%d", arr[i]);
}
void Subsequence_Sort(int arr[10]) {
 int lenght, temp, i, j;
 int Comparison_times = 0, Move_times = 0;
 int preIndex;
 int flag;
 for (i = 1; i < 10; i++) {
 preIndex = i - 1;
 flag = 1;
 temp = arr[i];
 while (preIndex >= 0 && arr[preIndex] > temp) {
 Comparison_times++;
 arr[preIndex + 1] = arr[preIndex];
 preIndex--;
 }
 for (j = i - 1; j >= preIndex + 1; j--)
 {
 arr[j + 1] = arr[j];
 if (flag)
 {
 Move_times += i - preIndex;
 flag = 0;
 }
 }
 arr[preIndex + 1] = temp;
 //Move_times++;
 }
 printf("%d %d", Comparison_times+9, Move_times);
 //for (i = 0; i < 10; i++)printf("%d", arr[i]);
}
