#include<stdio.h>
// void main()
// {
//   for(int i=1; i<=10; i++)
//   {
//     for(int j=1; j<=10; j++)
//     printf("%dx%d=%d\n",i,j,i*j);
//   }
// }

// Pyramid 
void main()
{
  int n;
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
    for(int j=1; j<=n-i; j++)
    {
      printf(" ");
    }
    for(int k=1; k<=2*i-1; k++)
    {
      printf("*");
    }

    printf("\n");
  }
}