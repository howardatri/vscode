#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main(void){
    char c,prev;
    long nchars=0L;
    int nlines=0,nwords=0,plines=0;
    bool inword = false;
    printf("enter text to be analysed(to terminate):\n");
    prev='\n';
    while((c=getchar())!=STOP)
    {
        nchars++;
        if(c=='\n')
        nlines++;
        if(!isspace(c)&&!inword){
            inword=true;
            nwords++;

        }
        if(isspace(c)&&inword)
        inword=false;
        prev=c;
    }
    if(prev!='\n')
    plines=1;
    printf("chars=%ld,word=%d,lines=%d ",
    nchars,nwords,nlines);
    printf("partial lines=%d\n",plines);
    return 0;
}