#include<stdio.h>
void main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  n=n&(!(1<<k));           // 5-101
  printf("%d",n);          // Lets take k=1;
}