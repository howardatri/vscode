#include<stdio.h>
int main(void){
    int a=1;
    int b=2;
    a =a^b;
    b=a^b;
    a=a^b;
    printf("%d\n",a);
    //异或处理数组中某个数出现奇数次其他出现偶数次
    int eor=0;
    int arr[9]={1,2,3,2,3,1,1};
    for(int i=0;i<9;i++){
        eor=eor^ arr[i];
    }
    printf("%d",eor);
    /*异或处理数组中两个出现奇数次的数a与b
    eor循环异或，得到eor=a^b
    然后eor'=a|b->b

    然后eor^eor'得到其中另一个
    eor从头异或-eor=a^b-eor!=0--
    eor必有一位置为1--rightone=eor&(~eor+1)
    提取最右侧1---
    接下来准备onlyone=eor'(0)
   数组每个数与rightone&==1（或者0) ,在&条件下eor'^数组内每个数
    只取一边，得到a或者b；
    
    */
    //提取最右侧的1
    //int rightone=eor&(~eor +1)
}