#include<stdio.h>
#include<stdlib.h>

struct node
{
    int n;
    struct node *next;
}*head=NULL,*pre,*ptr,*newnode;

void create()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter the number: ");
    scanf("%d", &(newnode->n));
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

void deleteEnd()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    pre=head;
    ptr=head;
    
    while(ptr->next!=NULL)
    {
        pre=ptr;
        ptr=ptr->next;
    }
    
    if(ptr==head)
    {
        head=NULL;
    }
    else
    {
        pre->next=NULL;
    }
    
    free(ptr);
}

void deleteBeg()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    
    ptr=head;
    
    head=head->next;
    ptr->next=NULL;
    free(ptr);
}

void min()
{
   int min;

   if(head==NULL)
   {
       printf("List is empty\n");
       return;
   }

   min=head->n;

   ptr=head;

   while(ptr!=NULL)
   {
     if(ptr->n<min)
     {
       min=ptr->n;
     }
     ptr=ptr->next;
   }

   printf("Minimum value is: %d\n",min);
}

void max()
{
   int max;

   if(head==NULL)
   {
       printf("List is empty\n");
       return;
   }

   max=head->n;

   ptr=head;

   while(ptr!=NULL)
   {
       if(ptr->n>max)
       {
           max=ptr->n;
       }
       ptr=ptr->next;
   }

   printf("Maximum value is: %d\n",max);
}

void display()
{
  ptr=head;

  while(ptr!=NULL)
  {
      printf("%d ",ptr->n);
      ptr=ptr->next;
  }
  printf("\n");
}
void insertbeg()
{
    newnode->next=head;
    head=newnode;
}
void count()
{
    int count=0;
    
    ptr=head;
    while(ptr!=NULL)
    {
        count++;

        ptr=ptr->next;

    }
    printf("%d\n",count);
}

 void find(int s)
 {
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->n==s)
        {
            printf("FOUND\n");
            break;
        }
        ptr=ptr->next;
    }
 }

  void deletePos(int n)
{
    int i=0;
    struct node *nextnode;
    if(n==0)
    {
        nextnode=head;
        head=head->next;
    }
    else
    {
        ptr=head;
        while(i<n-1)
        {
            ptr=ptr->next;
            i++;
        }
        nextnode=ptr->next;
        ptr->next=nextnode->next;
    }
    free(nextnode);
}
  void insertPos(int c)
  {
    newnode=malloc(sizeof(struct node));
    scanf("%d",&(newnode->n));
    ptr=head;
    int i=1;
    while(i!=c)
    {
       ptr=ptr->next;
       i++;
    }
    pre=ptr->next;
    newnode->next=pre;
    ptr->next=newnode;

  }


int main()
{
    int choice;

    while(1){
        printf("\n1.CREATE\n2.DELETE AT END\n3.DELETE AT BEGINNING\n4.MINIMUM\n5.MAXIMUM\n6.DISPLAY\n7.COUNT\n8.DeletePos\n9.FIND\n10.InsertPos\n11.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                create();
                break;

            case 2:
                deleteEnd();
                break;

            case 3:
                deleteBeg();
                break;

            case 4:
                min();
                break;

            case 5:
                max();
                break;

            case 6:
               display();
               break;

            case 7:
               count();
               break;
            
            case 8:
               int k;
               printf("Enter the position:");
               scanf("%d",&k);
               deletePos(k);
               break;

            case 9:
            int a;
            printf("Enter the number:");
            scanf("%d",a);
            find(a);
            break;

            case 10:
            int d;
            printf("Enter the position:");
            scanf("%d",&d);
            insertPos(d);
            break;

            case 11:
                exit(0);
            
            
            default:
                printf("Invalid choice!\n");
                break;   
        }
    }

    return 0;
}
