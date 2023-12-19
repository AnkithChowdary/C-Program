#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    struct node* next;
} *head = NULL, *ptr, *p1, *p2, *newnode, *head1 = NULL, *head2 = NULL;

void new(int c) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->n = c;
    newnode->next = NULL;
    if (head == NULL)
        head = newnode;
    else {
        ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newnode;
    }
}

void new1(int c) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->n = c;
    newnode->next = NULL;
    if (head1 == NULL)
        head1 = newnode;
    else {
        ptr = head1;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newnode;
    }
}

void new2(int c) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->n = c;
    newnode->next = NULL;
    if (head2 == NULL)
        head2 = newnode;
    else {
        ptr = head2;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newnode;
    }
}

void merge() {
    p1 = head;
    p2 = head1;
    int z;

    while (p1 != NULL && p2 != NULL) {
        if (p1->n <= p2->n) {
            z = p1->n;
            p1 = p1->next;
        } else {
            z = p2->n;
            p2 = p2->next;
        }
        new2(z); // Insert into the third list
    }

    while (p1 != NULL) {
        int h = p1->n;
        new2(h); // Insert into the third list
        p1 = p1->next;
    }

    while (p2 != NULL) {
        int h = p2->n;
        new2(h); // Insert into the third list
        p2 = p2->next;
    }
}
void printList(struct node* list) {
    while (list != NULL) {
        printf("%d ", list->n);
        list = list->next;
    }
    printf("\n");
}

int main() {
    int k;
    printf("Enter the number of elements for the first list: ");
    scanf("%d", &k);
    while (k--) {
        printf("Enter a number: ");
        int s;
        scanf("%d", &s);
        new(s);
    }

    int m;
    printf("Enter the number of elements for the second list: ");
    scanf("%d", &m);
    while (m--) {
        printf("Enter a number: ");
        int d;
        scanf("%d", &d);
        new1(d);
    }

    merge();
  printList(head2);
    // Add code to print or use the merged list (head2) as needed

    return 0;
}
