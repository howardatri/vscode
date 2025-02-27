#include<stdio.h>
int main(void){
    int n;
    int flag=0;
    scanf("%d",&n);
    int p[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",p[i][j]);
        }
    }
    for(int m=0;m<n;m++){
        if(p[m][m]=p[m++][m++])
flag=1;
else break;
    }
if(flag==1)
printf("YES");
else printf("NO");

}