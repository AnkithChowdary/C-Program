#include<stdio.h>
#include<stdlib.h>
struct node{
  int n;
  struct node *next;
}*head=NULL,*newnode,*ptr,*p;

void create()
{
  newnode=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&(newnode->n));
  newnode->next=NULL;
  if(head==NULL)
  head=ptr=newnode;
  else{
    ptr->next=newnode;
    ptr=newnode;

  }
  newnode->next=head;
}
void display(){
p=head;
do{
  printf("%d->",p->n);
p=p->next;
}while(p!=head);

}



int main(){
  
  int n;
  scanf("%d",&n);
  while(n-->0)
    create();
    display();
  
}