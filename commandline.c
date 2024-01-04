#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if there are exactly three arguments (including the program name)
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1; // Return an error code
    }

    // Convert command line arguments to integers
    int number1 = atoi(argv[1]);
    int number2 = atoi(argv[2]);

    // Calculate the sum
    int sum = number1 + number2;

    // Display the result
    printf("Sum of %d and %d is: %d\n", number1, number2, sum);

    return 0; // Return success code
}
