// #include<stdio.h>



// int strlen1(char *str) {

// int i;

// for (i = 0; *(str + i) != '\n'; i++);
//报错原因，不支持for里含有指针运算判断？

// return i;

// }



// int main() {

// char ch[256];

// fgets(ch, 255,stdin);

// printf("%d", strlen1(ch));

// return 0;

// }
//ac版本如下
#include <stdio.h>

char str[256];

int strlen1(char *str){

    int flag=0;

    for(int i=0;i<255;i++){   //字符串长度小于255（属于投机取巧了） 

        if(str[i]=='\0'){

            flag=i;           //找到结尾 

            break;

        } 

    }

	return flag;

}

int main(){

    gets(str);

	printf("%d",strlen1(str));

}

