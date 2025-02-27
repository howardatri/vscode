
#include <stdio.h>
#include <string.h>
char a[258];
int b[2],n;       
int pd(char *a){
    if((a[0]!='_')&&!(a[0]<='z'&&a[0]>='a')&&!(a[0]<='Z'&&a[0]>='A')){
        return 0;
	}
    for(int i=1;i<strlen(a);i++){
        if(a[i]=='_'||(a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A')||(a[i]<='9'&&a[i]>='0')){
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
        if(pd(a)){     
		    b[0]++;    
        }else{
            b[1]++;
        }
        for(int i=0;i<strlen(a);i++){
            a[i]='\0';
        }
    }
    printf("Valid:%d\n",b[0]);
	printf("Invalid:%d",b[1]);
}
 

 
