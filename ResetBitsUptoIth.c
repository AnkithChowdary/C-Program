#include<stdio.h>
void main()
{
  int n,i,j;
  scanf("%d%d%d",&n,&i,&j);
  int a=(~0)|(1<<j);   //1111
  int b=(1<<i)-1;     //
  int c=a|b;
  n=n&c;
  printf("%d",n);
}