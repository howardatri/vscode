#include<stdio.h>
int main(){
int n,a,num[10][10];
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    scanf("%d",&a);
   num[i][j]=a;
}
}
int right=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(num[i][j]!=num[j][i]){
        right=0;
   
    break;
    }
    }
  
}
if(right==1)printf("YES");
else printf("NO");

}