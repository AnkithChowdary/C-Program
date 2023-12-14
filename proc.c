#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(int arr[ROWS][COLS]) {
    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int r = rand() % ROWS;
            int c = rand() % COLS;
            swap(&arr[i][j], &arr[r][c]);
        }
    }
}

void print_board(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int is_winner(int arr[ROWS][COLS]) {
    int count = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] != count % (ROWS * COLS)) {
                return 0; // Not a winner yet
            }
            count++;
        }
    }
    return 1; // Winner
}

int make_move(int arr[ROWS][COLS], char move) {
    // Find the position of the empty space (0)
    int empty_row, empty_col;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == 0) {
                empty_row = i;
                empty_col = j;
                break;
            }
        }
    }

    // Implement the move based on user input
    switch (move) {
        case 'W':
        case 'w':
            if (empty_row > 0) {
                swap(&arr[empty_row][empty_col], &arr[empty_row - 1][empty_col]);
                return 1; // Valid move
            }
            break;
        case 'A':
        case 'a':
            if (empty_col > 0) {
                swap(&arr[empty_row][empty_col], &arr[empty_row][empty_col - 1]);
                return 1; // Valid move
            }
            break;
        case 'S':
        case 's':
            if (empty_row < ROWS - 1) {
                swap(&arr[empty_row][empty_col], &arr[empty_row + 1][empty_col]);
                return 1; // Valid move
            }
            break;
        case 'D':
        case 'd':
            if (empty_col < COLS - 1) {
                swap(&arr[empty_row][empty_col], &arr[empty_row][empty_col + 1]);
                return 1; // Valid move
            }
            break;
        default:
            printf("Invalid move. Please enter W, A, S, D, or Q.\n");
    }

    return 0; // Invalid move
}

int main() {
    int board[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
    shuffle(board);
    
    printf("Welcome to the 3x3 puzzle game!\n");
    printf("The goal of the game is to arrange the numbers in ascending order.\n");

    while (1) {
        printf("Current board:\n");
        print_board(board);

        // Ask the user for input
        printf("Enter move (W - up, A - left, S - down, D - right, Q - quit): ");
        char move;
        scanf(" %c", &move);

        if (move == 'Q' || move == 'q') {
            printf("Quitting the game. Goodbye!\n");
            break;
        }

        // Make the move and check for a win
        if (make_move(board, move)) {
            if (is_winner(board)) {
                printf("Congratulations! You won!\n");
                break;
            }
        }
    }

    return 0;
}
