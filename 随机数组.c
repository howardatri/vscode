#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int define(int arr[],int len,int num) {
    for(int i=0; i<len; i++) {
        if(arr[i]==num) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int arr[10]= {0};
    int len=sizeof(arr)/sizeof(int);
    srand(time(NULL));
    for(int i=0; i<len;) {
        int num=rand()%100+1;
        int flag=define(arr,len,num);
        if(flag==0) {
            arr[i]=num;
            i++;
        }
    }
    for(int i=0; i<len; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}