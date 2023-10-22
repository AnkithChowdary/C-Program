#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if(n&1==0)              // odd number lsb is 1 and even lsb is 0
  printf("Even");         //for 5 101 and 4 100
  else
  printf("Odd");
}