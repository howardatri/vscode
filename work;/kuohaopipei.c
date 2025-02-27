#include<stdio.h>
#include<stdlib.h>
//初试栈,数组实现
//真正栈bool push函数 pop函数
//定义长度-》声明（数组-》给一个栈顶指针int top;
int main() {
    int ch = 0;
    int a[1000], b[1000];
    int i = 0, n = 0;
    int m = 0;
    for (; i < 1000; i++)a[i] = b[i] = 0;
    i = 0;
    int x = 0;
    while ((ch = getchar()) != '@') {
        if (ch == '@')
        break;
        if (ch == '(' || ch == '[' || ch == '{') { 
            a[i++] = ch; //压入
            n = i - 1; //标
        }
        if (ch == ')' || ch == ']' || ch == '}') { 
            x = ch - a[n--]; //弹出
            if (x != 1 && x != 2) {//判断交叉 因为左右括号第一个差1，二三差2；
                m = 1;
            }
        }
        }
    if (m == 0)printf("YES");
    else printf("NO");
    return 0;
    }
