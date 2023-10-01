#include<stdio.h>
int sum(int n),total;
void main()
{
  int n;
  scanf("%d",&n);
  sum(n);
  printf("%d",total);
}
int sum(int n)
{
  total=(n*(n+1))/2;
  return total;
}