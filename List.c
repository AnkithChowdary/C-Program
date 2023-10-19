#include<stdio.h>
#include<stdlib.h>
struct node
{
  int n;
  struct node *next;
}*head=NULL,*newnode,*ptr,*pre;
void main()
{
  do{
  int n;
  printf("1.Create\n2.insert\n3.delete\n4.DelFirst\n");
  scanf("%d",&n);
  switch (n)
  {
  case 1:
    create();
    break;
  case 2:
   insert();
   case 3:
   delete();
  default:
    break;
  }
  }while(1);
}
create()
{
  newnode=malloc(sizeof(struct node));
  scanf("%d",newnode->n);
}
insert(){
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
min()
{
  int min=head->n;
  ptr=head;
  while(ptr!=NULL)
  {
    if(ptr->n<min)
    {
      min=ptr->n;
    }
    ptr=ptr->next;
  }
  printf("%d",min);
}
deleteBeg()
{
  ptr=head;
  head=head->next;
  ptr->next=NULL;
  free(ptr);

}
deleteEnd()
{
  ptr=head;
  pre=head;
  while(ptr->next!=NULL)
  {
    pre=pre->next;
    ptr=ptr->next;
     
  }
}
