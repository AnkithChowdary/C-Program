#include<stdio.h>
int sum(int k)
{
  if(k==1)
  return k;
  else
  return k+sum(k-1);
}
void main()
{
  int n;
  scanf("%d",&n);
  int c=sum(n);
  printf("%d",c);
}