#include <stdio.h>
#include <string.h>
char str[258];

void count(char *str,int *upper,int *lower,int *space,int *num,int *other){

    for(int i=0;i<strlen(str);i++){

        if(str[i]<='Z'&&str[i]>='A'){      

            (*upper)++;

		}else if(str[i]<='z'&&str[i]>='a'){

		    (*lower)++; 

        }else if(str[i]==' '){

            (*space)++;

        }else if(str[i]<='9'&&str[i]>='0'){

            (*num)++;

        }else{

		    (*other)++;

        }

    }

}

int main(){

    gets(str);

    int u=0,l=0,sp=0,num=0,o=0;

    count(str,&u,&l,&sp,&num,&o);

    printf("%d %d %d %d %d",u,l,sp,num,o);

}






