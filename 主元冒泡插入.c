#include<stdio.h>
#define M 50
int main(void){
int cmp=0,swap=0,minindex,i,j,k,r,a[M],std[M];
//主元
for(i=0;i<M;i++){
 scanf("%d",&a[i]);
 if(getchar()=='\n')
 break;
std[i]=a[i];
}
 for(i=0;i<M-1;i++){
   minindex=i;

    for(k=i+1;k<M;k++){

     minindex=a[k]<a[minindex]?k:minindex;
      cmp++;
      }
      r=a[i];a[i]=a[minindex];a[minindex]=r;
   swap++;
     }
     printf("%d %d ",cmp,swap);
     for(i=0;i<M;i++){
      a[i]=std[i];
     }
     //冒泡
int flag=1;
cmp=0;swap=0;
while(flag){
   flag=0;
   for(i=0;i<M-1;i++){
      
      if(a[i]>a[i+1]){
         r=a[i];a[i]=a[i+1];a[i+1]=r;
         flag=1;
swap++;
      }
   }
   
}
printf("%d %d",cmp,swap);
//插入
 for(i=0;i<M;i++){
      a[i]=std[i];
     }
cmp=0;swap=0;
for(i=1;i<M;i++){
   j=i-1;
   cmp++;
   while((a[j]>a[i]&&(j>=0))){
      swap++;
   j=j-1;}
   r=a[i];
   for(k=i-1;k>=j+1;k--)
   a[k+1]=a[k];
   a[j+1]=r;
}
printf("%d %d",cmp,swap);




 }

