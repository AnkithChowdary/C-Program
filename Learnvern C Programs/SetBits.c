#include<stdio.h>
void main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  n=(n||(1<<k-1));
  printf("%d",n);
}