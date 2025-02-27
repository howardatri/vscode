#include<stdio.h>


int main() {
    int x;
    int count = 0; // 用于计数，找到满足条件的最小数

    // 从7的倍数开始检查，因为7是条件中最大的数，这样可以减少检查的次数
    for(x = 7; ; x += 7) {
        if (x % 2 == 1 && x % 3 == 2 && x % 5 == 4) {
            count = x;
            break; // 找到满足条件的数，退出循环
        }
    }

    printf("最少共有%d阶。\n", count);
    return 0;
}