#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[10] = {0};//定义数组
    int len = sizeof(arr) / sizeof(arr[0]);//计算数组长度
    srand(time(NULL));
    for (int i = 0; i < len; i++)//生成随机数并将其赋予数组
    {
        int num = rand() % 100 + 1;
        arr[i] = num;
        for (int j = 0; j < i; j++)
        {
            if (num == arr[j])
            {
                
                i--;
            }
            
        }
    }
    int sum = 0;//定义一个变量求和
    for (int i = 0; i < len; i++) //求和
    {        
        sum = sum + arr[i];
    }
    double avr = (double)sum /(double) len;//求平均值
    printf("%d\n", sum);//输出总和
    printf("%.1lf\n", avr);//输出平均值
    int count = 0;//定义变量记录小于平均值的数
    for (int i = 0; i < len; i++) //遍历数组
    {
        printf("%d\n", arr[i]);
    }
    for (int i = 0; i < len; i++)//计出比平均值小的数
    {
        if (arr[i] < avr)
        {
            count++;
        }
    }
    printf("%d", count);//打印小于平均值的数的个数
}
