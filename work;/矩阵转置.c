#include<stdio.h>
//3/5
int main(void){
    int n;
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
}


for(int j=0;j<n;j++){
for(int i=0;i<n;i++){
printf("%d",arr[i][j]);
if(i<n-1)
printf(" ");


}
if(j<n-1)
printf("\n");
}
}