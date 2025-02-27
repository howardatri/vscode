#include<stdio.h>
#include<string.h>
//题解：利用辅助一维储存二维
//巧妙利用变量自加，减少使用for来递增下标
//我是傻逼，scanf不加&
int a[50][50];
int b[2500];
void sort(int *a,int x){
    
    for(int i=0;i<=x;i++){
        for(int j=i+1;j<=x;j++){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int flag=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        b[++flag]=a[i][j];
        }
    }
    sort(b,flag);
    flag=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=b[++flag];

        }
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(j==m-1){
            printf("%d",a[i][j]);

        }else{
            printf("%d ",a[i][j]);
        }
    }
    if(i<n-1){
        printf("\n");
    }
  }

}