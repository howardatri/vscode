#include <stdio.h>
#include <string.h>

int main() {
    char str[256]; // 声明一个长度为256的字符数组，用于存储输入的字符串
    
    fgets(str, 256, stdin); // 读取用户输入的字符串，包括空格，直到遇到换行符或达到255字符

    int len = strlen(str); // 计算字符串的长度
    // 去除可能的换行符
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // 反序输出字符串
    
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]); // 输出字符串的每个字符
    }
    putchar('\n'); // 输出换行符

    return 0;
}










