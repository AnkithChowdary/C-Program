#include<stdio.h>
#include<stdlib.h>
struct node{
	int n;
	struct node *next;
	
}*start=NULL,*newnode,*ptr,*pre;
void main()
{
	int ch;
	do
	{
		printf("enter 1 for create\n");
		printf("enter 2 for insertbeg\n");
		printf("enter 3 for insertend\n");
		printf("enter 4 for insertpos\n");
		printf("enter 5 for deletebeg\n");
		printf("enter 6 for deleteend\n");
		printf("enter 7 for deletepos\n");
		printf("enter 8 for display\n");
		printf("enter 9 for maximum\n");
		printf("enter 10 for minimum\n");
		printf("enter 11 for count\n");
		printf("enter 12 for search\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : create();
			break;
			case 2 : insertbeg();
			break;
			case 3 : insertend();
			break;
			case 4 : insertpos();
			break;
			case 5 : deletebeg();
			break;
			case 6 : deleteend();
			break;
			case 7 : deletepos();
			break;
			case 8 : display();
			break;
			case 9 : maximum();
			break;
			case 10 : minimum();
			break;
			case 11 : count();
			break;
			case 12 : search();
			break;
			default : ;
		}
		printf("\n DO you want to continue\n");
	}while(ch!='n');
}
  create()
{
	 newnode = malloc(sizeof(struct node));
	 printf("enter the value");
	 scanf("%d",&newnode->n);
	  if(start==NULL)
	  {
	  	start=newnode;
	  	newnode->next=NULL;
		  }
		  
		  else{
		  	ptr=start;
		  	while(ptr->next!=NULL)
		  	ptr=ptr->next;
		  	ptr->next=newnode;
		  	newnode->next=NULL;
		  }
}



insertbeg()
{
	newnode=malloc(sizeof(struct node));
	printf("enter the value");
	 scanf("%d",&newnode->n);
	 newnode->next=start;
	 start=newnode;	
}


insertend()
{
		newnode=malloc(sizeof(struct node));
	printf("enter the value");
	 scanf("%d",&newnode->n);
	ptr=start;
	while(ptr->next!=NULL)
		  	ptr=ptr->next;
		  	ptr->next=newnode;
		  	newnode->next=NULL;
}

 display()
 {
 	ptr=start;
 	while(ptr!=NULL)
 	 { 
	  printf("%d ",ptr->n);
 	  ptr=ptr->next;
	 }
 }
 
 count()
 {
 ptr=start;
 int x=0;
 while(ptr!=NULL)
 {x++;
 ptr=ptr->next;
	 }
	 printf("%d",x);	
 }
 
 
 
 deletebeg()
 {
 	ptr=start;
 	start=start->next;
 	free(ptr);
 }
 
 
 
 deleteend()
 {
 	ptr=start;
 	while(ptr->next!=NULL)
 	{
 		
 		pre=ptr;
 		ptr=ptr->next;
	 }
 	pre->next=NULL;
 	free(ptr);
 }
 
 
 
 
 deletepos()
 {
 	int pos,x=1;
 	printf("enter position");
 	scanf("%d",&pos);
 	ptr=start;
 	while(x!=pos)
 	{
 		pre=ptr;
 		x++;
 		ptr=ptr->next;
	 }
	 pre->next=ptr->next;
	 ptr->next=NULL;
	 free(ptr);	
 }
 
 
 
 insertpos()
 {
 	int pos,x=1;
 	 printf("enter the value");
	 scanf("%d",&newnode->n);
	 	printf("enter position");
 	scanf("%d",&pos);
 		ptr=start;
		newnode=malloc(sizeof(struct node));
 	while(x!=pos)
 	{
 		pre=ptr;
 		x++;
 		ptr=ptr->next;
	 }
 	pre->next=newnode;
 	newnode->next=ptr;	
 }
 
 
 
 void search()
 {
 	int x=0,key;
 	printf("enter the key");
 	scanf("%d",&key);
 	ptr=start;
 	while(ptr!=NULL)
 	{
 		if(ptr->n==key)
 		{
 			x++;
 			break;
		 }
		 ptr=ptr->next;
	 }
if(x==0)
printf("not found");
else printf("found");
 	
 }
 
 
 void maximum()
 {
 	int max;
 	ptr=start;
 	max=ptr->n;
 while(ptr!=NULL)
 	{
 		if(ptr->n>max)
 		max=ptr->n;
 	 ptr=ptr->next;
 }
 printf("%d",max);
 
 }
 
 
 void minimum()
 {
 	int min;
 	ptr=start;
 	min=ptr->n;
 while(ptr!=NULL)
 	{
 		if(ptr->n<min)
 		min=ptr->n;
 	 ptr=ptr->next;
 }
 printf("%d",min);
 
 }
