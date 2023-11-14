#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializePuzzle(int puzzle[SIZE][SIZE]);
void displayPuzzle(int puzzle[SIZE][SIZE]);
int isPuzzleSolved(int puzzle[SIZE][SIZE]);
void swap(int puzzle[SIZE][SIZE], int row, int col, int newRow, int newCol);
void getUserMove(int puzzle[SIZE][SIZE], int *moveRow, int *moveCol);
void shufflePuzzle(int puzzle[SIZE][SIZE]);

int main() {
    int puzzle[SIZE][SIZE];
    int moveRow, moveCol;

    initializePuzzle(puzzle);
    shufflePuzzle(puzzle);

    printf("Shuffled Puzzle:\n");
    displayPuzzle(puzzle);

    while (!isPuzzleSolved(puzzle)) {
        getUserMove(puzzle, &moveRow, &moveCol);

        if (moveRow >= 0 && moveRow < SIZE && moveCol >= 0 && moveCol < SIZE) {
            int emptyRow, emptyCol;
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    if (puzzle[i][j] == 0) {
                        emptyRow = i;
                        emptyCol = j;
                        break;
                    }
                }
            }

            if ((abs(moveRow - emptyRow) == 1 && moveCol == emptyCol) ||
                (abs(moveCol - emptyCol) == 1 && moveRow == emptyRow)) {
                swap(puzzle, emptyRow, emptyCol, moveRow, moveCol);
                displayPuzzle(puzzle);
            } else {
                printf("Invalid move. Try again.\n");
            }
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    printf("Congratulations! You solved the puzzle.\n");

    return 0;
}

void initializePuzzle(int puzzle[SIZE][SIZE]) {
    int num = 1;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            puzzle[i][j] = num++;
        }
    }

    puzzle[SIZE - 1][SIZE - 1] = 0;
}

void displayPuzzle(int puzzle[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (puzzle[i][j] == 0) {
                printf("   ");
            } else {
                printf("%2d ", puzzle[i][j]);
            }
        }
        printf("\n");
    }
}

int isPuzzleSolved(int puzzle[SIZE][SIZE]) {
    int num = 1;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (puzzle[i][j] != num++ && (i != SIZE - 1 || j != SIZE - 1)) {
                return 0;
            }
        }
    }

    return 1;
}

void swap(int puzzle[SIZE][SIZE], int row, int col, int newRow, int newCol) {
    int temp = puzzle[row][col];
    puzzle[row][col] = puzzle[newRow][newCol];
    puzzle[newRow][newCol] = temp;
}

void getUserMove(int puzzle[SIZE][SIZE], int *moveRow, int *moveCol) {
    printf("Enter your move (row and column): ");
    scanf("%d %d", moveRow, moveCol);
}

void shufflePuzzle(int puzzle[SIZE][SIZE]) {
    int i, j, k, l;
    srand(time(NULL));

    for (k = 0; k < 100; k++) {
        i = rand() % SIZE;
        j = rand() % SIZE;
        l = rand() % 4;

        switch (l) {
        case 0:
            if (i > 0) {
                swap(puzzle, i, j, i - 1, j);
            }
            break;
        case 1:
            if (i < SIZE - 1) {
                swap(puzzle, i, j, i + 1, j);
            }
            break;
        case 2:
            if (j > 0) {
                swap(puzzle, i, j, i, j - 1);
            }
            break;
        case 3:
            if (j < SIZE - 1) {
                swap(puzzle, i, j, i, j + 1);
            }
            break;
        }
    }
}
