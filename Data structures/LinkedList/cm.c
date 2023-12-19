#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if there are exactly three command line arguments (program name, num1, num2)
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1; // Return 1 to indicate an error
    }

    // Convert command line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Check if the second number is not zero to avoid division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Return 1 to indicate an error
    }

    // Calculate and print the remainder
    int remainder = num1 % num2;
    printf("The remainder of %d divided by %d is %d\n", num1, num2, remainder);

    return 0; // Return 0 to indicate successful execution
}
