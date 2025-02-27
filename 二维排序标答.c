#include <stdio.h>
#include <string.h>
int a[51][51];
int b[3000];
void sort(int *a,int x){        //冒泡排序，相信大家都懂
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
        for(int j=0;j<m;j++){    //输入，并把输入保存到一个一维数组里
            scanf("%d",&a[i][j]);b[++flag]=a[i][j];
        }
    }
    sort(b,flag);flag=-1;        //对一维数组排序
    for(int i=0;i<n;i++){        //再把这个数组把一维数组重新赋值
        for(int j=0;j<m;j++){
            a[i][j]=b[++flag];
        }
	}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-1){         //一点也不华丽的输出
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