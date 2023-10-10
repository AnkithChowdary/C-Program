#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    printf("Number of trailing zeroes: %d\\n", count);
    return 0;
}
