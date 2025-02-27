// #include<stdio.h>
// #include<string.h>
// char s[256];
// char* delete(char *s,int v,int w){
//     for(int i=v-1;i<strlen(s)-w;i++){
//         s[i]=s[i+w];
//     }
//     return s;
// }

// int main(){
//     int v,w;
//     scanf("%d %d",&v,&w);
//     getchar();//消耗换行符
//    gets(s);
//    delete(s,v,w);
//    for(int i=0;i<strlen(s)-w;i++)
//    printf("%c",s[i]);
// }
//vs能跑，学习通报错
//其他答案
#include <stdio.h>
#include <string.h>
char s[257];
char *s_delete(char *s,int v,int w){
    for(int i=v-1;i<strlen(s)-w;i++){   //第v个字符所以下标减一，由于要删除w个字符所以循环到
        s[i]=s[i+w];                    //strlen(s)-w就好，然后给被删除的位置重新赋值
    }
    return s;
}
int main(){
    int v,w;
    scanf("%d %d",&v,&w);
    getchar();          
    gets(s);
    s_delete(s,v,w);
    for(int i=0;i<strlen(s)-w;i++){
        printf("%c",s[i]);
    }
}