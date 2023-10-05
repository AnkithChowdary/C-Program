#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n ;i++)
  {
    for(int j=1; j<=i; j++)
    {
      printf("%d",i);
    }
    printf("\n");
  }

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=i; j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j<=n-i; j++)
    {
      printf(" ");
    }
    for(int k=i;k>=1;k--)
    {
      printf("%d",k);
    }
    printf("\n");
  }

for(int i=1; i<=n ;i++)
{
  for(int j=1;j<=n-i; j++)
  {
    printf(" ");
  }
  for(int k=i; k>=1; k--)
  {
    printf("%d",i);
  }
  printf("\n");
}
}