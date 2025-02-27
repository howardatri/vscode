//原理：运用另一个数组统计出现次数
//string.h中的memset函数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VALUE 1000 // 假设数组中元素的最大值

// 函数声明
void findDuplicatesIn2DArray(int arr[][10], int rows, int cols);

int main() {
    // 定义一个二维数组
    int arr[5][10] = {
        {1, 2, 3, 4, 5},
        {6, 7, 1, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 1} // 注意这里1是重复的
    };
    
    // 调用函数查找重复元素
    findDuplicatesIn2DArray(arr, 5, 10);
    
    return 0;
}

// 函数定义
void findDuplicatesIn2DArray(int arr[][10], int rows, int cols) {
    int frequency[MAX_VALUE + 1]; // 用于记录每个元素的出现次数
    memset(frequency, 0, sizeof(frequency)); // 初始化频率数组为0

    // 遍历二维数组，记录每个元素的出现次数
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = arr[i][j];
            if (++frequency[value] > 1) { // 如果元素出现次数大于1，说明是重复的
                printf("int  %d rer\n", value);
            }
        }
    }
}


//memset 是 C 语言标准库中的一个函数，用于设置内存块的内容。它的原型定义在 <string.h> 头文件中，其作用是将给定的值赋给内存块中的每个字节。

//函数原型如下：

/*
void *memset(void *s, int c, size_t n);
参数说明：

s：指向要设置的内存块的指针。
c：要设置的值，对于非字符指针，这个值会被转换为无符号字符，然后每个字节都会被设置为这个值。
n：要设置的字节数。
返回值：

memset 返回指向内存块 s 的指针。
使用示例：

c
char buffer[10];
memset(buffer, 0, sizeof(buffer)); // 将buffer数组的所有字节设置为0
在这个示例中，memset 函数将 buffer 数组的前 10 个字节都设置为 0。这通常用于初始化数组或清空数组的内容。

memset 通常用于以下场景：

初始化数组或结构体为零值。
将数组或内存块设置为某个特定的值。
清空或重置内存块的内容。
需要注意的是，memset 函数不适用于设置浮点数或结构体等复杂类型的内存，
因为这些类型可能需要特殊对齐或初始化方式。此外，memset 函数不会检查内存重叠问题，如果内存块有重叠，可能会导致未定义的行为。
*/