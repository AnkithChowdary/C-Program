#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int n;
  struct node* next;
}node;
node *head=NULL,*ptr,*newnode;
void removeDup(){
  node *pi;
  ptr=head;
  
  while(ptr->next!=NULL){
    pi=ptr;
    While(pi->next!=NULL){
      
    if(ptr->n==pi->next->n)
    pi->next=pi->next->next;
    else
    pi=pi->next;
    }
    ptr=ptr->next;
  }
}
void create(int v)
{
    newnode=malloc(sizeof(node));
    printf("Enter the number: ");
    newnode->n=v;
    newnode->next = NULL;
    
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void main(){
  int n;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  while(n--){
    int c;
    printf("Enter the numbers:");
    scanf("%d",&c);
    create(c);
  }
  removeDup();
}

