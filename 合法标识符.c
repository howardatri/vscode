#include<stdio.h>
#include<string.h>
//傻逼oj，和你妈标答一样，五错四
int n;
int b[2];
char a[256];
int judge(char *a){
    if((a[0]!='_')&&!(a[0]<='z'&&a[0]>='a')&&!(a[0]<='Z'&&a[0]>='A')&&!(a[0]>='0'&&a[0]<='9'))
      return 0;
    for(int i=1;i<strlen(a);i++){
        if(a[i]=='_'||(a[i]<='z'&&a[i]>='a')||(a[i]>='A'&&a[i]<='Z')){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        gets(a);
        if(judge(a)){
            b[0]++;
        }else{
        b[1]++;}
    
for(int i=0;i<strlen(a);i++){//初始化
    a[i]='\0';
     }
    }
    printf("Valid:%d\n",b[0]);
     printf("Invalid:%d",b[1]);
}
