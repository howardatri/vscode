#include<stdio.h>
int main(){
int n,a,num[10][10];
scanf("%d",&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++){
    scanf("%d",&a);
   num[i][j]=a;
}
for(int i=0;i<n;i++){
    while(num[i][i]!=num[i+1][i+1]){
    printf("NO");
    return 0;}

    printf("YES");
    return 1;
}


}

//void duijiao(int *p,int m){
   //// for(int i=0;i<10;i++){
   //     if(p[i+1][i+1]==p[i][i]){

  //      }
           
 //   }

//}