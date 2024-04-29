#include <stdio.h>
#include <stdlib.h> // Added for malloc and exit functions
#define size 10

struct node
{
    int data;
    struct node *next;
};

struct node *ht[size];

void initialize()
{
    int i;
    for (i = 0; i < size; i++)
    {
        ht[i] = NULL; // Initialize with 0, not NULL
    }
}

void insert()
{
    struct node *newnode, *temp;
    int value, index;
    newnode = (struct node *)malloc(sizeof(struct node));
   
    printf("Enter value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;
    index = value % size;
    if (ht[index] == 0)
    {
        ht[index] = newnode;
    }
    else
    {
        temp = ht[index];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    int i;
    struct node *temp;
    for (i = 0; i < size; i++)
    {
        temp = ht[i];
        printf("Bucket %d: ", i);
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int ch;
    initialize();
    while (1)
    {
        printf("\n1. Insert\n2. Display\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Enter valid choice.\n");
            break;
        }
    }
    return 0;
}
