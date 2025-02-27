#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}node;
struct linkedlist{
    struct node* head;
    struct node* tail;
}ll = {NULL,NULL};
struct node* initNode(int value){
 struct node*p = malloc(sizeof(*p));
p->data =value;
p->next=NULL;
return p;
}
void append(struct node *newnode){
    if(ll.head!=NULL&& ll.tail!=NULL){
     ll.head=newnode;
     ll.tail=newnode;
     newnode->next=ll.head;

    }else{
        ll.tail->next=newnode;
    ll.tail=newnode;
    newnode->next =ll.head;

    }
}
int main(void){
   for(int i=0;i<41;i++){
    append(initNode(i));
     
   }
        

   


}