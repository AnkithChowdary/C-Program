#include<stdio.h>
void main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  n=n&(1<<k);
  printf("%d",n);    //100  001  000
}