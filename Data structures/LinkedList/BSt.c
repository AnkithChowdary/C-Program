#include <stdio.h>
#include <stdlib.h>

// Define a structure for a binary tree node
struct BinaryTreeNode {
    int key;
    struct BinaryTreeNode *left, *right;
};

// Function to create a new node with a given value
struct BinaryTreeNode* newNodeCreate(int value)
{
    struct BinaryTreeNode* temp
        = (struct BinaryTreeNode*)malloc(
            sizeof(struct BinaryTreeNode));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to search for a node with a specific key in the
// tree
struct BinaryTreeNode*
searchNode(struct BinaryTreeNode* root, int target)
{
    if (root == NULL || root->key == target) {
        return root;
    }
    if (root->key < target) {
        return searchNode(root->right, target);
    }
    return searchNode(root->left, target);
}

// Function to insert a node with a specific value in the
// tree
struct BinaryTreeNode*
insertNode(struct BinaryTreeNode* node, int value)
{
    if (node == NULL) {
        return newNodeCreate(value);
    }
    if (value < node->key) {
        node->left = insertNode(node->left, value);
    }
    else if (value > node->key) {
        node->right = insertNode(node->right, value);
    }
    return node;
}

// Function to perform post-order traversal
void postOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->key);
    }
}

// Function to perform in-order traversal
void inOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        inOrder(root->left);
        printf(" %d ", root->key);
        inOrder(root->right);
    }
}

// Function to perform pre-order traversal
void preOrder(struct BinaryTreeNode* root)
{
    if (root != NULL) {
        printf(" %d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Function to find the minimum value
struct BinaryTreeNode* findMin(struct BinaryTreeNode* root)
{
    if (root == NULL) {
        return NULL;
    }
    else if (root->left != NULL) {
        return findMin(root->left);
    }
    return root;
}

// Function to delete a node from the tree
struct BinaryTreeNode* deleteNode(struct BinaryTreeNode* root, int x)
{
    // Base case: If the root is NULL, return NULL
    if (root == NULL)
        return NULL;

    // If the key to be deleted is greater than the root's key,
    // then it lies in the right subtree
    if (x > root->key) {
        // Recur for the right subtree
        root->right = deleteNode(root->right, x);
    }
    // If the key to be deleted is smaller than the root's key,
    // then it lies in the left subtree
    else if (x < root->key) {
        // Recur for the left subtree
        root->left = deleteNode(root->left, x);
    }
    // If key is same as root's key, then this is the node to be deleted
    else {
        // Case 1: Node to be deleted has no children
        if (root->left == NULL && root->right == NULL) {
          
          
            free(root);
            // Set root to NULL (no children left)
            return NULL;
        }
        // Case 2: Node to be deleted has one child
        else if (root->left == NULL || root->right == NULL) {
            // Store the child node (either left or right)
            struct BinaryTreeNode* temp;
            if (root->left == NULL) {
                temp = root->right;
            }
            else {
                temp = root->left;
            }
            // Free the memory allocated for the node
            free(root);
            // Return the child node to be connected to parent
            return temp;
        }
        // Case 3: Node to be deleted has two children
        else {
            // Find the in-order successor
            struct BinaryTreeNode* temp = findMin(root->right);
            // Copy the value of the successor to the current node
            root->key = temp->key;
            // Recur to delete the successor from the right subtree
            root->right = deleteNode(root->right, temp->key);
        }
    }
    // Return the root pointer after deletion
    return root;
}


int main()
{
    struct BinaryTreeNode* root = NULL;
    int choice, key;

    do {
        printf("\nBinary Search Tree Operations\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. In-order Traversal\n");
        printf("5. Pre-order Traversal\n");
        printf("6. Post-order Traversal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                root = insertNode(root, key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (searchNode(root, key) != NULL)
                    printf("%d found\n", key);
                else
                    printf("%d not found\n", key);
                break;
            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                printf("Node with key %d deleted\n", key);
                break;
            case 4:
                printf("In-order Traversal: ");
                inOrder(root);
                printf("\n");
                break;
            case 5:
                printf("Pre-order Traversal: ");
                preOrder(root);
                printf("\n");
                break;
            case 6:
                printf("Post-order Traversal: ");
                postOrder(root);
                printf("\n");
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 7);

    return 0;
}
