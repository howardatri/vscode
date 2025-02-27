#include<stdio.h>
void prone(int a);
int main() {
 int a, hundred, ten, one;
 scanf("%d", &a);
 if (a >= 0 && a < 1000) {
 one = a % 10;
 hundred = a / 100;
 ten = a / 10 - 10 * hundred;
 if (hundred != 0) {
 prone(hundred);
 printf(" hundred");
 if (ten != 0)printf(" and ");
 if (ten == 0 && one != 0) {
 printf(" and ");
 prone(one);
 }
 }
 if (ten == 1) {
 switch (one)
 {
 case 0:printf("ten"); break;
 case 1:printf("eleven"); break;
 case 2:printf("twelve"); break;
 case 3:printf("thirteen"); break;
 case 4:printf("forteen"); break;
 case 5:printf("fifteen"); break;
 case 6:printf("sixteen"); break;
 case 7:printf("seventeen"); break;
 case 8:printf("eighteen"); break;
 case 9:printf("nineteen"); break;
 }
 }
 if (ten >= 2) {
 switch (ten)
 {
 case 2:printf("twenty"); break;
 case 3:printf("thirty"); break;
 case 4:printf("forty"); break;
 case 5:printf("fifty"); break;
 case 6:printf("sixty"); break;
 case 7:printf("seventy"); break;
 case 8:printf("eighty"); break;
 case 9:printf("ninety"); break;
 }
 if (one != 0) {
 printf("-");
 prone(one);
 }
 }
 if (hundred == 0 && ten == 0) {
 prone(one);
 }
 }
 else printf("ERR");
 return 0;
}
void prone(int a) {
 switch (a)
 {
 case 0:printf("zero"); break;
 case 1:printf("one"); break;
 case 2:printf("two"); break;
 case 3:printf("three"); break;
 case 4:printf("four"); break;
 case 5:printf("five"); break;
 case 6:printf("six"); break;
 case 7:printf("seven"); break;
 case 8:printf("eight"); break;
 case 9:printf("nine"); break;
 }
}
