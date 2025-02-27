#include<stdio.h>
int main(void){
int a[100],n,i;
int right =1;
scanf("%d",&n);
for(i=0;i<n*n;i++){
    scanf("%d",&a[i]);

}

for(i=0;i<n*n;i++){
    if(right==0)
    break;
    for(int j=i+1;j<n*n;j++){
        if(a[i]==a[j]){
            right=0;
            printf("YES");
            break;
        }
    }
}
if(n==1){
    right=0;
    printf("YES");

}
if(right==1)printf("NO");
return 0;
}