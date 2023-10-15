#include<stdio.h>

void main() {
    int N, i, Mi, total_assistant_professors = 0;
    
    printf("Enter the number of departments: ");
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
        printf("Enter the total staff in department %d: ", i+1);
        scanf("%d", &Mi);
        
        // Subtracting 1 professor and 2 associate professors from total staff
        total_assistant_professors += Mi - 3;
    }
    
    printf("The total number of assistant professors is: %d\n", total_assistant_professors);
}
