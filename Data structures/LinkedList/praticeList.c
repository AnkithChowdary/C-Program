#include<stdio.h>
struct node{
  int n;
  struct node *next;
}*head=NULL,*ptr,*newnode,*pre;
void create(){
  newnode=malloc(sizeof(struct node));
  printf("Enter the number:");
  scanf("%d",&(newnode->n));
  
  if(head==newnode){
    head=newnode;
  }else{
    ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=newnode;
    newnode->next=NULL;
  }
}
void middle(){
  ptr=head;
  int c=0;
  while(ptr!=NULL){
    ptr=ptr->next;
    c++;
  }
  int m=ceil(c/2);
}
void display(){
  ptr=head;
  while(ptr!=NULL)
  printf("%d ",ptr->n);
}
void deleteEnd(){
  ptr=head;
  while(ptr->next->next!=NULL)
  ptr=ptr->next;
  ptr->next=NULL;
}
void deleteBeg(){
  ptr=head;
  head=head->next;
}
void insertBeg(){
   newnode=malloc(sizeof(struct node));
  printf("Enter the number:");
  scanf("%d",&(newnode->next));
  newnode->next=head;
  head=newnode;
}
void deletepos(int k){
   int c=0;
   ptr=head;
   while(c<k-1){
   ptr=ptr->next;
   c++;
   }
   ptr=ptr->next->next;
}
void insertpos(int k){
  newnode=malloc(sizeof(struct node));
  printf("Enter the number:");
  scanf("%d",&(newnode->next));
  int c=0;
  ptr=head;
  while(c<k-1){
    ptr=ptr->next;
    c++;
  }
  pre=ptr->next;
  ptr->next=newnode;
  newnode->next=pre;
}

void main(){
   int n;
   printf("1.Create\n2.Delete at end\n3.Display\n4.Delete at Specific position\n5.Insert at specific position\nEnter your choice:");
   scanf("%d",&n);
   switch(n){
    case 1:
    Create();
    break;
    
    case 2:
    deleteEnd();
    break;
    case 3:
    display();
    break;

    case 4:
    int k;
    printf("Enter the position:");
    Scanf("%d",&k);
    deletepos(k);
     break;
    case 5:
    int p;
    printf("Enter the position:");
    Scanf("%d",&p);
     insertpos(p);
   }
}