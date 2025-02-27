//void qsort(void *base, size_t num, size_t size, int (*comparator)(const void *, const void *));
/*
base：指向要排序的数组的指针。
num：数组中的元素数量。
size：每个元素的大小（以字节为单位）。
comparator：一个比较函数的指针，用于比较数组中的两个元素。


*/
#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于比较两个整数
int compare_ints(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    int array[] = {5, 3, 8, 4, 2};
    int n = sizeof(array) / sizeof(array[0]);

    // 使用 qsort 排序
    qsort(array, n, sizeof(int), compare_ints);

    // 打印排序后的数组
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}