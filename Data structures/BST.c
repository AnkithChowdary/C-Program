#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current; 
}

struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(struct Node* temp) {
    if (temp == NULL) {
        return;
    }
    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
}

void preorder(struct Node* temp) {
    if (temp == NULL) {
        return;
    }
    printf("%d ", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

void postorder(struct Node* temp) {
    if (temp == NULL) {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ", temp->data);
}

struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (root->data < key) {
        return search(root->right, key);
    }
    return search(root->left, key);
}

struct Node* findMin(struct Node* root) {
    if (root == NULL) {
        return NULL;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct Node* findMax(struct Node* root) {
    if (root == NULL) {
        return NULL;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    int choice, data;
    struct Node* temp;

    do {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Find Minimum\n");
        printf("5. Find Maximum\n");
        printf("6. Inorder Traversal\n");
        printf("7. Preorder Traversal\n");
        printf("8. Postorder Traversal\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;
            case 3:
                printf("Enter data to search: ");
                scanf("%d", &data);
                temp = search(root, data);
                if (temp == NULL) {
                    printf("Data not found\n");
                } else {
                    printf("Data found\n");
                }
                break;
            case 4:
                temp = findMin(root);
                if (temp != NULL) {
                    printf("Minimum value: %d\n", temp->data);
                } else {
                    printf("Tree is empty\n");
                }
                    printf("Tree is empty\n");
                
                break;
            case 5:
                temp = findMax(root);
                if (temp != NULL) {
                    printf("Maximum value: %d\n", temp->data);
                } else {
                    printf("Tree is empty\n");
                }
                break;
            case 6:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 7:
                printf("Preorder traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 8:
                printf("Postorder traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 9);

    return 0;
}
