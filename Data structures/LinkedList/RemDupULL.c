#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int n;
    struct node* next;
} node;

node* head = NULL;

void removeDup() {
    node* ptr = head;

    while (ptr != NULL && ptr->next != NULL) {
        node* pi = ptr;
        while (pi->next != NULL) {
            if (ptr->n == pi->next->n) {
                node* temp = pi->next;
                pi->next = pi->next->next;
                free(temp);
            } else {
                pi = pi->next;
            }
        }
        ptr = ptr->next;
    }
}

void create(int v) {
    node* newnode = malloc(sizeof(node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter the number: ");
    newnode->n = v;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        node* ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void printList() {
    node* current = head;
    printf("List: ");
    while (current != NULL) {
        printf("%d -> ", current->n);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    while (n--) {
        int c;
        printf("Enter the number:");
        scanf("%d", &c);
        create(c);
    }

    printf("List before removing duplicates:\n");
    printList();

    removeDup();

    printf("List after removing duplicates:\n");
    printList();

    // Deallocate memory
    node* current = head;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
