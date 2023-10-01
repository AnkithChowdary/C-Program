#include<stdio.h>
void main()
{
int number=5,i,j,k,l;
for(i=0;i<=number;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("* ");
    }
    for(k=0 ;k<-number;k--)
    
    printf("\n");
}
for(k=number;k>=0;k--)
{
   for(l=k;l>=0;l--)
    {
        printf("* ");
    } 
    
    printf("\n");
} printf("\n");

    int rows = 5;
  
    // first loop to print all rows
    for (int i = 0; i < rows; i++) {
  
        // inner loop 1 to print white spaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
  
        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}



