#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int n;
    struct node *next;
}*ptr,*newnode,*head=NULL;

void display() {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->n);
        ptr = ptr->next;
    }
  
}



void create() {
    char str[10]; 
    scanf("%s", str);
    if (strcmp(str, "None") != 0) {
        newnode = malloc(sizeof(struct node));
        int k = atoi(str);
        newnode->n = k;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    } 
}

void delAlt() {
    if(head==NULL)
        return;
    struct node *prev = head;
    struct node *node = head->next;
    while (prev != NULL && node != NULL) {
        prev->next = node->next;
        free(node);
        prev = prev->next; 
        if (prev != NULL) {
            node = prev->next;
        }
    }
}

int main() {
    int t = 50;
    while (t-- > 0)
        create();

    delAlt();
    display();
    printf("None");
    
   
    return 0;
}
