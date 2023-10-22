#include<stdio.h>
void fullpyramid(int n)
{
  
    int i,j;
    for(i=1;i<=n-i;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  //   for (i = n - 2; i >= 1; i--) {
  //   for (j = 1; j <= n - i; j++) {
  //     printf(" ");
  //   }
  //   for (j = 1; j <= 2 * i - 1; j++) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }
 }
void main()
{
    int n;
    scanf("%d",&n);
    fullpyramid(n);
}