#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffleArray(int arr[], int size) {
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void fillArray(int arr[3][3]) {
    int flatArray[9];
    
   
    for (int i = 0; i < 9; ++i) {
        flatArray[i] = i;
    }

    
    srand(time(NULL));
    shuffleArray(flatArray, 9);

    // Fill the 2D array with the shuffled numbers
    int k = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = flatArray[k++];
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[3][3];

    fillArray(arr);

    printf("Welcome to the 3x3 Puzzle Game!\n");
    printf("Try to arrange the numbers in ascending order from 0 to 8.\n");

    do {
  
        printf("\nCurrent 3x3 array:\n");
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }

        // Get user input for swapping
        int row1, col1, row2, col2;
        printf("\nEnter the row and column indices of the number you want to swap (e.g., 0 1): ");
        scanf("%d %d", &row1, &col1);
        printf("Enter the row and column indices where you want to place the selected number (e.g., 2 2): ");
        scanf("%d %d", &row2, &col2);

        // Perform the swap
        swap(&arr[row1][col1], &arr[row2][col2]);

    } while (arr[0][0] != 0 || arr[0][1] != 1 || arr[0][2] != 2 || arr[1][0] != 3 || arr[1][1] != 4 || arr[1][2] != 5 || arr[2][0] != 6 || arr[2][1] != 7 || arr[2][2] != 8);

    printf("\nCongratulations! You have successfully arranged the numbers in ascending order.\n");

    return 0;
}

