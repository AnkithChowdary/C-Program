#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
  int n;
  struct node *next;
}*head=NULL,*newnode,*ptr,*pre;
 void create()
{
  newnode=malloc(sizeof(struct node));
  scanf("%d",&newnode->n);
}
if(head==NULL)
{
   head=newnode;
   head->next=NULL;
}else
{
  ptr=head;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
    
  }
  ptr->next=newnode;
  newnode->next=NULL;

}

}