#include<stdio.h>
int main(void){

    int i = 0;
    char *s="hello world";
    char*s2="hello world";
    char s3[]="hello world";
    //数组，在本地，可修改
    //指针，只读，函数参数，字符串不知道在哪
    //动态分配空间用指针
    //构造->数组 处理->指针
    //s[0]='b';
    printf("%p\n",&i);
    printf("%p\n",s);
    printf("%p\n",s2); 
    printf("%p\n",s3);
}