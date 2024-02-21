#include<stdio.h>
#include<stdlib.h>

struct node {
    int n;
    struct node* next;
};

struct node* head = NULL;

void newNode(int n) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->n = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        struct node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newnode;
    }
}

void printList(struct node* list) {
    while (list != NULL) {
        printf("%d ", list->n);
        list = list->next;
    }
    printf("\n");
}

struct node* reverseIterative(struct node* list) {
    struct node *prev = NULL, *current = list, *nextnode;

    while (current != NULL) {
        nextnode = current->next;
        current->next = prev;

        
        prev = current;
        current = nextnode;
    }

    return prev; // new head of the reversed list
}

struct node* reverseRecursive(struct node* k) {
    if (k == NULL || k->next == NULL)
        return k;

    struct node* revList = reverseRecursive(k->next);

    k->next->next = k;
    k->next = NULL;

    return revList;
}

int main() {
    newNode(5);
    newNode(4);
    newNode(7);

    printf("Original List:\n");
    printList(head);

    // printf("\nReversed Iteratively:\n");
    // struct node* reversedIterativeList = reverseIterative(head);
    // printList(reversedIterativeList);

    printf("\nReversed Recursively:\n");
    struct node* reversedRecursiveList = reverseRecursive(head);
    printList(reversedRecursiveList);

    return 0;
}
