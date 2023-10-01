#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  for(int i=0; i<=n;++i)
  {
    for(int j=i ;j<=i;++j)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  for(int i=n; i>=0; --i)
  {
    for(int j=n ; j>=i;--j)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}