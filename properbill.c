#include<stdio.h>

void main() {
    int n, cost = 0, k;

    while(1) {
        printf("Enter your choice (Enter 4 to exit): ");
        scanf("%d", &n);

        if(n == 4)
            break;

        printf("Enter the quantity: ");
        scanf("%d", &k);

        switch(n) {
            case 1:
                cost += k * 200;
                break;

            case 2:
                cost += k * 50;
                break;

            case 3:
                cost += k * 100;
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    printf("The total cost is: %d\n", cost);
}
