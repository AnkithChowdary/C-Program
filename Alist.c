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

  while(ptr->next!=NULL)
  {
      printf("%d ",ptr->n);
      ptr=ptr->next;
  }
  printf("\n");
}

int main()
{
    int choice;

    while(1){
        printf("\n1.CREATE\n2.DELETE AT END\n3.DELETE AT BEGINNING\n4.MINIMUM\n5.MAXIMUM\n6.DISPLAY\n7.EXIT\n");
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

            case 7:
                exit(0);
            
            
            default:
                printf("Invalid choice!\n");
                break;   
        }
    }

    return 0;
}
