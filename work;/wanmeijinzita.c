#include <stdio.h>

int main() {
    int n, i, j, k, num;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        // 打印前导空格
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // 打印递增数字
        for(j = 1; j <= i; j++) {
            num = j %10;
            //若想打出11，则去%，print空格替换2d
            printf("%2d", num); // 使用%2d确保数字占两
        }
        // 打印递减数字，不包括中间的数字
        for(j = i - 1; j >= 1; j--) {
            num = j % 10;
            printf("%2d", num);
        }
        printf("\n"); // 换行
    }
    return 0;
}