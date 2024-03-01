#include<stdio.h>
#include<stdlib.h>
struct node{
  int n;
  struct node *next;
  struct node *pre;
}*head=NULL,*tail,*ptr,*newnode,*p,*k,*z,*slow,*fast;
void create(){
  newnode=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&(newnode->n));
  newnode->next=NULL;
  newnode->pre=NULL;
  if(head==NULL){
    head=tail=newnode;
  }else{
tail->next=newnode;
tail=newnode;
  }
}

void deleteEnd(){
  p=head;
  while(p->next!=NULL){
k=p;
  p=p->next;
  }
  k->next=NULL;
  free(p);
}
void deleteBeg(){
  k=head;
  k->next=NULL;
  head=head->next;
  head->pre=NULL;
  free(k);
}
void insertBeg(){
  newnode=(struct node*)malloc(sizeof(struct node));
printf("\nenter the value:");
scanf("%d",&(newnode->n));
newnode->next=head;
head->pre=newnode;
newnode->pre=NULL;
head=newnode;
}

void deletePos(int x){
  ptr=head;
  int i=1;
  while(i<x){
    p=ptr;
    ptr=ptr->next;
  }
  k=ptr->next;
  ptr->next=NULL;
  ptr->pre=NULL;
  k->pre=p;
  free(ptr);
  p->next=p->next->next;

}
void insertPos(int x){
  newnode=malloc(sizeof(struct node));
  scanf("%d",&(newnode->n));
  
   ptr=head;
  int i=1;
  while(i<x){
    p=ptr;
    ptr=ptr->next;
  }
  p->next=newnode;
  newnode->pre=p;
  newnode->next=ptr;
  ptr->pre=newnode;
}
void middle()
{
  slow=fast=head;
while(fast!=NULL&&fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
printf("\nThe middle element is:%d\n",slow->n);
}

void max(){
  ptr=head;
  int max=ptr->n;
  while(ptr!=NULL){
    if(max<ptr->n)
    max=ptr->n;
  }
  printf("The maximum element is:%d\n",max);

}
void min(){
  ptr=head;
  int min=ptr->n;
  while(ptr!=NULL)
  {
    if(min>ptr->n)
    min=ptr->n;
  }
}

void display(){
  p=head;
  while(p!=NULL){
    printf("%d ",p->n);
    ptr=ptr->next;
  }
}


void main(void){
  int n;
  printf('')
}