#include<stdio.h>
void main()
{
  int n,c=0;
  scanf("%d",&n);
  for(int i=1; i<n; i++)
  {
    if(n%i==0)
    {
      c++;
    }
  }
  if(c>1)
  {
    printf(" Not a prime Number\n");
  }else
  {
    printf("Prime number\n");
  }
}